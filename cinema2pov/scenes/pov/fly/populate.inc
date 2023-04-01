//--- requires predefined vars from scene file



#macro populate_down ()
//--- shortcut
#declare f_x = field_size.x;
#declare f_y = start_height;
#declare f_z = field_size.x;
#declare x_offset = field_size.x/2;
#declare z_offset = field_size.z/2;
#declare Norm = <0,0,0>;
#declare c = 0 ;


union{ 
    #while (c < plant_count)                
        // create random point in space based on blob size
        #declare plant_pos = <f_x * rand(plant_seed), f_y, f_z * rand(plant_seed)>  ;
        
        // shift random points to match a centered field
        #declare start_pos =  < plant_pos.x - x_offset, plant_pos.y, plant_pos.z - z_offset> ; 
 
        // trace a ray for the random point -y and return norm data
        #declare ray = trace(plant_topo, start_pos, -y, Norm);
        
        #if ( Norm.gray!=0 & (vdot(Norm, y) > plant_maxSlope) & (ray.y > plant_minY) )
            // increment plant_current 
            //#debug str(c)
            #declare c = c + 1;
            #declare r = 1;
            #declare new_pos =  <start_pos.x, ray.y+plant_offset ,start_pos.z> ;

            object { plant_object 
                #if (random_size > 0) 
                    #declare f = 0;
                    #while (f=0) 
                        #declare r = rand(plant_seed);
                        #if (r < random_size)
                            #declare r = plant_size + r ;
                            #declare f = 1; 
                        #end  
                    #end 
                #end
                
                #if (plant_randomY=true)
                rotate y*(rand(plant_seed)*360)
                #end
                 
                #if (rotate_to_normal = true) 
                    Reorient_Trans(y, Norm) 
                #end
                
                scale plant_size*r
                translate new_pos 
                
                }
        #end
    #end    
} 
#end






   
   
   
   
#macro populate_up ()
//--- shortcut
#declare f_x = field_size.x;
#declare f_y = start_height;
#declare f_z = field_size.x;
#declare x_offset = field_size.x/2;
#declare z_offset = field_size.z/2;
#declare Norm = <0,0,0>;
#declare c = 0 ;


union{ 
    #while (c < plant_count)                
        // create random point in space based on blob size
        #declare plant_pos = <f_x * rand(plant_seed), f_y, f_z * rand(plant_seed)>  ;
        
        // shift random points to match a centered field
        #declare start_pos =  < plant_pos.x - x_offset, plant_pos.y, plant_pos.z - z_offset> ; 
 
        // trace a ray for the random point y and return norm data
        #declare ray = trace(plant_topo, start_pos, +y, Norm);
                         
        #if ( Norm.gray!=0 & ((vdot(Norm, y)*-1) > plant_maxSlope) ) 

            // increment plant_current
            #declare c = c + 1;
            #declare r = 1;
            #declare new_pos =  <start_pos.x, ray.y+plant_offset ,start_pos.z> ;
            
            
            object { plant_object 
                #if (random_size > 0) 
                    #declare f = 0;
                    #while (f=0) 
                        #declare r = rand(plant_seed);
                        #if (r < random_size)
                            #declare r = plant_size + r ;
                            #declare f = 1; 
                        #end  
                    #end 
                #end
                
                #if (plant_randomY=true)
                rotate y*(rand(plant_seed)*360)
                #end
                 
                #if (rotate_to_normal = true) 
                    Reorient_Trans(-y, Norm) 
                #end
                
                scale plant_size*r
                translate new_pos 
                
                }
        #end
    #end    
} 
#end





#macro populate_front ()
//--- shortcut
#declare f_x = field_size.x;
#declare f_y = field_size.y;
#declare f_z = start_depth;
#declare x_offset = field_size.x/2;
#declare y_offset = field_size.y/2;
#declare Norm = <0,0,0>;
#declare c = 0 ;


union{ 
    #while (c < plant_count)                
        // create random point in space based on blob size
        #declare plant_pos = <f_x * rand(plant_seed), f_y * rand(plant_seed), start_depth >  ;
        
        // shift random points to match a centered field
        #declare start_pos =  < plant_pos.x - x_offset, plant_pos.y - y_offset, plant_pos.z > ; 
 
        // trace a ray for the random point -y and return norm data
        #declare ray = trace(plant_topo, start_pos, z, Norm);
        
        #if ( Norm.gray!=0 & (vdot(Norm, y) > plant_maxSlope) & (ray.y > plant_minY) )
            // increment plant_current 
            //#debug str(c)
            #declare c = c + 1;
            #declare r = 1;
            #declare new_pos =  <start_pos.x, start_pos.y, ray.z + plant_offset > ;

            object { plant_object 
                #if (random_size > 0) 
                    #declare f = 0;
                    #while (f=0) 
                        #declare r = rand(plant_seed);
                        #if (r < random_size)
                            #declare r = plant_size + r ;
                            #declare f = 1; 
                        #end  
                    #end 
                #end
                
                #if (plant_randomY=true)
                rotate y*(rand(plant_seed)*360)
                #end
                 
                #if (rotate_to_normal = true) 
                    Reorient_Trans(-z, Norm) 
                #end
                
                scale plant_size*r
                translate new_pos 
                
                }
        #end
    #end    
} 
#end




#macro populate_back ()
//--- shortcut
#declare f_x = field_size.x;
#declare f_y = field_size.y;
#declare f_z = start_depth;
#declare x_offset = field_size.x/2;
#declare y_offset = field_size.y/2;
#declare Norm = <0,0,0>;
#declare c = 0 ;


union{ 
    #while (c < plant_count)                
        // create random point in space based on blob size
        #declare plant_pos = <f_x * rand(plant_seed), f_y * rand(plant_seed), start_depth >  ;
        
        // shift random points to match a centered field
        #declare start_pos =  < plant_pos.x - x_offset, plant_pos.y - y_offset, plant_pos.z > ; 
 
        // trace a ray for the random point -y and return norm data
        #declare ray = trace(plant_topo, start_pos, -z, Norm);
        
        #if ( Norm.gray!=0 & (vdot(Norm, y) > plant_maxSlope) & (ray.y > plant_minY) )
            // increment plant_current 
            //#debug str(c)
            #declare c = c + 1;
            #declare r = 1;
            #declare new_pos =  <start_pos.x, start_pos.y, ray.z + plant_offset > ;

            object { plant_object 
                #if (random_size > 0) 
                    #declare f = 0;
                    #while (f=0) 
                        #declare r = rand(plant_seed);
                        #if (r < random_size)
                            #declare r = plant_size + r ;
                            #declare f = 1; 
                        #end  
                    #end 
                #end
                
                #if (plant_randomY=true)
                rotate y*(rand(plant_seed)*360)
                #end
                 
                #if (rotate_to_normal = true) 
                    Reorient_Trans(z, Norm) 
                #end
                
                scale plant_size*r
                translate new_pos 
                
                }
        #end
    #end    
} 
#end
   
   