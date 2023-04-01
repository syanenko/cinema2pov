//--- underlay  

#macro image_underlay (mat, sc, rt, tr)
    #declare thin_box = box { 
        <0,0,0>,
        <1.0,1,1.0>
        } 
    object {
        thin_box  
        material{mat}
        scale sc
        rotate rt 
        translate tr
        }
#end  

#declare img = "fly_underlay.jpg"
#declare img_x = 100 ;  
#declare img_y = 100 ;
#declare img_z = .1 ;  
#declare illum = .5 ;
#declare img_scale = <img_x,img_y,img_z> ;
   
   

#declare underlay_material = 
material {
    texture {
       pigment { 
            image_map {
                jpeg img 
                interpolate 4 
                }
      }
   
     finish {
        emission illum
        ambient 0
        diffuse 0
     }
    }    
}

#declare Underlay =  
union{
    object { image_underlay(underlay_material,<img_x,img_y,img_z>, <0,0,0>, <0,-55,0>)  } 
    object { image_underlay(underlay_material,<img_x,img_y,img_z>, <90,0,0>, <0,1,-26.5>) }  
}    