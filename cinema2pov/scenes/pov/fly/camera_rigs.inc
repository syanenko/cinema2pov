// camera positions

#macro render_plan(f, nx, nz)
    camera {
        up <0, 1, 0>
        angle f    
        location <0, 50000, 0>
        look_at <0 , 0 ,  0> 
        translate <nx,0,-1>
    } 
#end 

#macro render_front_elev(f, nx, ny)
    camera {
        up <0, 1, 0>
        angle f    
        location <0, 0, -5000>
        look_at <0 , 0 ,  0> 
        translate <nx,ny,0>
    } 
#end 
 
 
#macro render_side_elev(f, nx, ny)
    camera {
        up <0, 1, 0>
        angle f    
        location <-5000, 0, 0>
        look_at <0 , 0 ,  0> 
        translate <nx,ny,0>
    } 
#end 


#macro render_ceiling(f, nx, ny)
    camera {
        up <0, 1, 0>
        angle f    
        location <0, -5000, 0>
        look_at <0 , 0 ,  0> 
        translate <nx,ny,0>
    } 
#end 



#macro render_top_left(f, pos)
    camera {
        up <0, 1, 0>
        angle f    
        location <0, 100, -300> 
        look_at pos
    } 
#end 


#macro render_bottom_left(f, pos)
    camera {
        up <0, 1, 0>
        angle f    
        location <-50, -50, -50> 
        look_at pos
    } 
#end 



#macro render_top_right(f, pos)
    camera {
        up <0, 1, 0>
        angle f    
        location <100, 50, -50> 
        look_at pos
    } 
#end   


#macro render_bottom_right(f, pos)
    camera {
        up <0, 1, 0>
        angle f    
        location <50, -50, -50> 
        look_at pos
    } 
#end        

#macro render_ground_left(f, pos)
    camera {
        up <0, 1, 0>
        angle f    
        location <-20, 10, -250> 
        look_at pos
    } 
#end       



#macro render_view_A(f, pos)
    camera {
        up <0, 1, 0>
        angle f    
        location <-60, 45, -230> 
        look_at pos
    } 
#end  


#macro render_view_B(f, pos)
    camera {
        up <0, 1, 0>
        angle f    
        location <-15, 12, -70> 
        look_at pos
    } 
#end  

#macro render_view_C(f, pos)
    camera {
        up <0, 1, 0>
        angle f    
        location <-15, 10, -67> 
        look_at pos
    } 
#end  

#macro render_view_D(f, pos)
    camera {
        up <0, 1, 0>
        angle f    
        location <-7, 4, -55> 
        look_at pos
    } 
#end  
