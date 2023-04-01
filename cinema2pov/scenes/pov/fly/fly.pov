// flys in the drain
// m.miller 3.28.2023 

#version 3.8; 


global_settings {    
    assumed_gamma 1.5
    max_trace_level 7
    ambient_light <.01,.01,.01> * 20
}                        



// -----------------------------------------------------------------------------------------
//                      I N C L U D E S
//------------------------------------------------------------------------------------------ 

// #include "shapes.inc"
// #include "shapes2.inc"
// #include "shapes3.inc" 
#include "populate.inc" 
#include "tools.inc" 
#include "camera_rigs.inc" 

#include "../include/materials.inc"
#include "fly_scene.inc" 

#declare luminosity = 0;
#include "playground.inc" 
// Axis
// axis (40,30,40,0.5)

 

// -----------------------------------------------------------------------------------------
//                      S K Y
//------------------------------------------------------------------------------------------ 
background {color srgb<13,17,23> / 256} // Githab

#declare show_fog = false ;
#declare world_clouds = false;


// -----------------------------------------------------------------------------------------
//                      L I G H T S
//------------------------------------------------------------------------------------------ 

/*
#declare array_count = 2;

// --- S K Y  L I G H T
#declare light_A =
light_source {
    <0,0,0> 
    #declare light_color = color red .05 green .05 blue .05 ;                      
    light_color * 10                   
    area_light
    <50, 0, 0> <0, 0, 50>         
    array_count, array_count                          
    adaptive 0                    
    jitter                        
    circular                      
    orient                        
    translate <0, 200, 0>
    // translate <0, 200, 0>
}   
light_A

     
// --- S M A L L  F I L L  L I G H T   
#declare light_B =
light_source {
    <0,0,0> 
    #declare light_color = color red .03 green .04 blue .04 ;                      
    light_color * 5                   
    area_light
    <40, 0, 0> <0, 0, 40>         
    array_count, array_count                          
    adaptive 0                    
    jitter                        
    circular                      
    orient                        
    translate <0, 40, 12>
    // translate <-10, 40, 20>
}   
light_B


// --- U P  L I G H T - faked surface bounce 
#declare light_C =
light_source {
    <0,0,0> 
    #declare light_color = color red .03 green .04 blue .05 ;                      
    light_color * 12                   
    area_light
    <80, 0, 0> <0, 0, 80>         
    array_count, array_count                          
    adaptive 0                    
    jitter                        
    circular                      
    orient                        
    translate <-10, -80, 0>
    // translate <-100, 0, 0>
}   
light_C


// --- U P  L I G H T - faked surface bounce 
#declare light_D =
light_source {
    <0,0,0> 
    #declare light_color = color red .03 green .04 blue .05 ;                      
    light_color * 8                   
    area_light
    <80, 0, 0> <0, 0, 80>         
    array_count, array_count                          
    adaptive 0                    
    jitter                        
    circular                      
    orient                        
    translate <100, -80, -50>
    // translate <100, 0, 0>
}   
light_D
*/



// -----------------------------------------------------------------------------------------
//                      F L Y
//------------------------------------------------------------------------------------------ 

#include "fly_materials.inc" 
#include "fly.inc"
// object  {fly rotate <0,40,0>  translate <60,0,-150> }
// object  {fly rotate <0,-40,0> translate <-20,0,-140> }

// Single
object  {fly translate <15,-10,0> rotate <0,clock + 180,0> }

//---back left
// object  {fly rotate <0,-160,0> translate <-120,0,60> }

//---back wall
/*
object {
    fly 
    rotate <0,-90,0>  
    rotate <-70,0,0> 
    translate <-20,120,395> 
    }
*/


// -----------------------------------------------------------------------------------------
//                      U N D E R L A Y
//------------------------------------------------------------------------------------------ 
//#include "fly_underlay.inc"
//Underlay






// -----------------------------------------------------------------------------------------
//                      S I N K
//------------------------------------------------------------------------------------------ 
/*
#include "sink_with_drain.inc"


sink_and_plug  
*/


// -----------------------------------------------------------------------------------------
//                      W A T E R
//------------------------------------------------------------------------------------------ 
/*
#include "water.inc"

object { 
    water 
    scale <1,1,1> 
    rotate <0,-110,0> 
    translate <0,0,0>
    material {M_water}
    }
    
*/
// ------------------------------------------------------------------------------------ -----
//                      C A M E R A S
//------------------------------------------------------------------------------------------
     
//#declare ortho_fov = 2;   
//#declare pers_fov = 60;

//render_sample (M_beetle_eye, 1)      

//render_plan(ortho_fov,0,-1)      
//render_ceiling(ortho_fov,50,-1)
//render_front_elev(ortho_fov,30,35) 
//render_side_elev(ortho_fov,0,20) 
//render_top_left(pers_fov,<0,0,0>)                     
//render_bottom_left(pers_fov,<60,10,0>) 
//render_top_right(pers_fov,<10,20,0>) 
//render_ground_left(pers_fov,<0,21,0>) 

//render_view_A(pers_fov,<30,-35,0>)
//render_view_B(pers_fov,<5,15,0>)   
//render_view_C(pers_fov,<6,15,0>)
//render_view_D(pers_fov,<12,15,0>)   


// Cameras
// camp (<45,45,45> * 1.5, <0,0,0>, 45)
// camp (<100,0,0>, <0,0,0>, 45) // +X 
// camp (<0,0,100>, <0,0,0>, 45)    // +Z 
