//--- macro tools


// Similar to Reorient_Trans(), points y axis along Axis.
#macro Point_At_Trans(YAxis)
   #local Y = vnormalize(YAxis);
   #local X = VPerp_To_Vector(Y);
   #local Z = vcross(X, Y);
   Shear_Trans(X, Y, Z)
#end

// based on original Reorient() macro by John VanSickle
#macro Reorient_Trans(Axis1, Axis2)
   #local vX1 = vnormalize(Axis1);
   #local vX2 = vnormalize(Axis2);
   #local Y = vcross(vX1, vX2);
   #if(vlength(Y) > 0)
      #local vY = vnormalize(Y);
      #local vZ1 = vnormalize(vcross(vX1, vY));
      #local vZ2 = vnormalize(vcross(vX2, vY));
      transform {
         matrix < vX1.x, vY.x,vZ1.x, vX1.y,vY.y,vZ1.y, vX1.z,vY.z, vZ1.z, 0,0,0 >
         matrix < vX2.x,vX2.y,vX2.z,  vY.x,vY.y, vY.z, vZ2.x,vZ2.y,vZ2.z, 0,0,0 >
      }
   #else
      #if (vlength(vX1-vX2)=0)
         transform {}
      #else
         #local vZ = VPerp_To_Vector(vX2);
         transform { Axis_Rotate_Trans(vZ,180) }
      #end
   #end
#end 




#macro image_underlay ()
    #declare thin_box = box { 
        <0,0,0>,
        <1.0,1,1.0>
        } 
    object {
        thin_box  
        material{mat}
        scale img_scale
        rotate img_rot 
        translate img_pos  
        no_shadow
        }
#end  


//--- add to difference
#declare paper_Cut_Z =
union{ 
    plane{ <1,0,0> 0 }  
    plane{ <0,1,0> 0.2 }                      //--cut at center X
    plane{ <0,0,-1> 0 translate <0,0,.002>}   //--pos Z end
    plane{ <0,0,1> 0 translate <0,0,-.002>}   //--pos Z start     
    } 
       

//--- add to difference      
#declare paper_Cut_Z_Curved =
union{  
    plane{ <1,0,0> 0 } 
    plane{ <0,1,0> 0.2 }                                       //--cut at center X
    sphere{ <0,0,0> 100    translate <0,0,100> }             //--pos Z end
    sphere{ <0,0,0> 100.01 translate <0,0,100> inverse}      //--pos Z start     
    } 
    


