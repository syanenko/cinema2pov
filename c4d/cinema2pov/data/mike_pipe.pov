//------------------------------------------------------------------------
//
// Persistence of Vision Ray Tracer version 3.7
// Scene Description Language (SDL)
// 
// Spline data, obtained from C4D to POV converter usage example
//
// File: spline_usage.pov
// Version: 1.0
// Last updated: 03-Mar-2023
//
// Author: Sergey Yanenko "Yesbird", 2023
// e-mail: See posts in news.povray.org
//
//------------------------------------------------------------------------
#version 3.7;
global_settings { assumed_gamma 1 }

#include "math.inc"

#declare luminosity = 1;
#include "playground.inc"
#include "colormaps.inc"
#include "textures.inc"

// Axis
axis (4,6,4,0.03)

//
// Camera
//
//camo (<0,10,0>, <0,0,0>,  45) // +Y
// camo (<8,0,0>, <0,0,0>, 45)   // +X
camo (<8,10,8>,  <0,3,0>,  45) // +XYZ
// camo (<800,200,800> / 3  <0,0,0>,  45) // +XYZ

//
// Light
// 
//light_source {<800,200,800>,  rgb <1,1,1> * luminosity}
light_source {<-800,200,800>, rgb <1,1,1> * luminosity}
// light_source {<800,200,-800>, rgb <1,1,1> * luminosity}

//
// Background
//
background {color srgb<13,17,23> / 256}

//
// Colormap
//
#declare _f = 0;
#declare _t = 0;
#declare jet              = make_colormap (jet,              _f, _t);
// #declare spring           = make_colormap (spring,           _f, _t);
#declare hot              = make_colormap (hot,              _f, _t);
#declare winter           = make_colormap (winter,           _f, _t);
#declare hsv              = make_colormap (hsv,              _f, _t);
#declare autumn           = make_colormap (autumn,           _f, _t);
// #declare parula           = make_colormap (parula,           _f, _t);
// #declare summer           = make_colormap (summer,           _f, _t);
// #declare turbo            = make_colormap (turbo,            _f, _t);
#declare cool             = make_colormap (cool,             _f, _t);
#declare viridis          = make_colormap (viridis,          _f, _t);
// #declare smooth_cool_warm = make_colormap (smooth_cool_warm, _f, _t);
// #declare plasma           = make_colormap (plasma,           _f, _t);
#declare ext_kindlmann    = make_colormap (ext_kindlmann,    0.6, _t);
// #declare kindlmann        = make_colormap (kindlmann,        _f, _t);
// #declare inferno          = make_colormap (inferno,          _f, _t);
//----------------------------------------------------------------------

//
// Default material
//
#declare mat_default = material {
  texture {
    pigment { gradient y
              color_map  { ext_kindlmann }
              scale 150
              translate 60}}}

#declare cyl_mat = material {
  texture {
    pigment { gradient -y
              color_map  { hot }
              scale 3 
              translate 1.1}}}

#declare cone_mat = material {
  texture {
    pigment { gradient -y
              color_map  { hsv }
              scale 3 
              translate 1.1}}}

#declare cube_mat = material {
  texture {
    pigment { gradient -y
              color_map  { cool }
              scale 3 
              translate 2.1}}}

#declare sphere_mat = material {
  texture {
    pigment { gradient -y
              color_map  { autumn }
              scale 3 
              translate 1}}}
//
// Include entities 
//
// #include "entities.inc"


//--- pipe and flange parts
//--- miller 3.2.23
#include "shapes3.inc"


#macro pm_lathe_pipe (w,h)
    lathe{
        linear_spline
        4,
        <0, 0>,
        <0, h>,
        <w, h>,
        <w, 0>
    }
#end


#declare fill_object  = 1;
#declare merge_object = 1;

#declare pipe_height = 5;
#declare pipe_rad = 1;
#declare flange_height = 4.7;
#declare flange_rad = 2;
#declare edge_rad = .05;
#declare double_flange = 1;
#declare flange_collar = true;
#declare collar_height = .5;
#declare collar_rad = pipe_rad + .1;

#declare bolt_count = 12;
#declare bolt_sides = 7;
#declare bolt_rad = .2;
#declare bolt_height = 0.5;
#declare bolt_position = <pipe_rad + ((flange_rad-pipe_rad)/2),
flange_height-bolt_height, 0>  ;

#declare pipe_ribs = 7;
#declare pipe_rib_rad = .08;


//--- bolt prototype
#declare bolt =
Round_Pyramid_N_in(
    bolt_sides,
    <0,0,0>,
    bolt_rad,
    <0,bolt_height,0>,
    bolt_rad,
    edge_rad,
    fill_object,
    merge_object )

//--- bolt prototype
#declare bolt_end =
Round_Pyramid_N_in(
    bolt_sides,
    <0,0,0>,
    pipe_rad*.6,
    <0,-.25,0>,
    pipe_rad*.55,
    edge_rad,
    fill_object,
    merge_object )



#macro pipe_with_flange()
union{
    Round_Cylinder_Tube(
        <0,0,0>,
        <0,pipe_height,0>,
        pipe_rad,
        edge_rad,
        fill_object,
        merge_object )  //-- main vertical pipe

    Round_Cylinder_Tube(
        <0,flange_height,0>,
        <0,pipe_height,0>,
        flange_rad,
        edge_rad,
        fill_object,
        merge_object )  //--- top flange



    #if (double_flange = 1)
         Round_Cylinder_Tube(
            <0,pipe_height,0>,
            <0,pipe_height + (pipe_height-flange_height),0>,
            flange_rad,
            edge_rad,
            fill_object,
            merge_object )  //--- double flange

            #if (bolt_count > 0)
                #declare c=0;
                #declare inc=360/bolt_count;
                #while (c < bolt_count)
                    #declare r_y = inc*c;
                    #declare n_x = bolt_position.x ;
                    #declare n_y = bolt_position.y +
(pipe_height-flange_height)*2 + bolt_height;
                    #declare n_z = bolt_position.z ;
                    object {bolt translate <n_x, n_y, n_z> rotate y*r_y}
                    #declare c = c + 1;
                #end
            #end
    #end

    bolt_end

    #if (bolt_count > 0)
        #declare c=0;
        #declare inc=360/bolt_count;
        #while (c < bolt_count)
            #declare new_y = inc*c;
            object {bolt translate bolt_position rotate y*new_y}
            #declare c = c + 1;

        #end
    #end


    #if (pipe_ribs> 0)
        #declare c=0;
        #declare inc=flange_height/pipe_ribs;
        #while (c < pipe_ribs)
            #declare new_y = inc*c;
            torus { pipe_rad ,pipe_rib_rad translate <0,new_y,0>}
            #declare c = c + 1;

        #end
     #end

    #if (flange_collar = true)
        #declare n_y = (pipe_height -(pipe_height-flange_height)) -
collar_height ;
        Round_Cylinder_Tube(
            <0,n_y,0>,
            <0,n_y + collar_height ,0>,
            collar_rad,
            edge_rad,
            fill_object,
            merge_object )  //-- collar
     #end

      }
#end


object { pipe_with_flange() material {
  texture { Polished_Chrome
    //pigment { rgb <0,0.1,0> }
}}

scale 1 }

