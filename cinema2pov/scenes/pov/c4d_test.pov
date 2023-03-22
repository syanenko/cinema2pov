//------------------------------------------------------------------------
//
// Persistence of Vision Ray Tracer version 3.7
// Scene Description Language (SDL)
// 
// Test c4d exported scenes
//
// File: c4d_test.pov
// Version: 1.0
// Last updated: 22-Mar-2023
//
// Author: Sergey Yanenko "Yesbird", 2023
// e-mail: See posts in news.povray.org
//
//------------------------------------------------------------------------
#version 3.7;
global_settings { assumed_gamma 1 }


#declare luminosity = 0;
#include "include/playground.inc"
#include "include/colormaps.inc"

#include "include/materials.inc"


// Axis
// axis (15,15,14,0.1)

//
// Camera
//
// camo (<0,20,0>, <0,0,0>,  45)     // +Y
// camo (<8,0,0> * 1, <0,0,0>, 45)   // +X
// camo (<0,8,0>, <0,0,0>, 45) // +Y
// camp (<8,8,8> * 1, <0,0,0>,  45) // +XYZ       


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
#declare ext_kindlmann    = make_colormap (ext_kindlmann,    0, _t);
// #declare kindlmann        = make_colormap (kindlmann,        _f, _t);
// #declare inferno          = make_colormap (inferno,          _f, _t);
//----------------------------------------------------------------------

//
// C4D Material
//
#declare mat_cylinder = material {
  texture {
    pigment { gradient -y
              color_map  { hot }
              scale 3 
              translate 1.1}}}

#declare mat_cone = material {
  texture {
    pigment { gradient -y
              color_map  { hot }
              scale 3 
              translate 1.1}}}

#declare mat_cube = material {
  texture {
    pigment { gradient -y
              color_map  { cool }
              scale 3 
              translate 2.1}}}

#declare mat_sphere = material {
  texture {
    pigment { gradient -y
              color_map  { autumn }
              scale 3 
              translate 1}}}

/*
#declare mat_default = material {
  texture {pigment {rgb <1,1,1> }}}
*/

#declare Default = material {
  texture {pigment {rgb <1,1,1> }}}
/*
#declare mat_default = material {
  texture {
    pigment { gradient y
              color_map  { ext_kindlmann }
              scale 23
              translate -2}}}

#declare mat_default = material {
  texture {
    pigment { gradient y
              color_map  { ext_kindlmann }
              scale 23
              translate -2}}}
*/


/*
// Materials

M_NB_Winebottle_Glass
M_Green_Glass
M_NB_Glass
M_Ruby_Glass
M_Dark_Green_Glass
M_Orange_Glass


#declare Orange_Glass = material{ texture { Orange_Glass }
                                  interior{ I_Glass }}

#declare Ruby_Glass = material{ texture { Ruby_Glass }
                                interior{ I_Glass }}

#declare Winebottle_Glass = material{ texture { NBwinebottle }
                                      interior{ I_Glass }}

#declare Blood_Marble = material{ texture { pigment {Blood_Marble}
                                  // normal { bumps 1.9 scale 0.02}
                                  finish { phong 1 } 
                                  scale 2.0 }
                                  interior{ I_Glass }
                                }
*/

//
// Include exported data
//
// #include "c4d_test.inc"
// #include "global_test.inc"
// #include "extrude_test.inc"
// #include "sweep_test.inc"
// #include "lathe_test.inc"
// #include "spline_test.inc"
// #include "lights_test.inc"


#declare obj = cone { <0.000000, -1.000000, 0.000000>, 1.000000, <0.000000, 1.000000, 0.000000>, 0.000000

  matrix
 <1.000000, 0.000000, 0.000000,
  0.000000, 1.000000, 0.000000,
  0.000000, 0.000000, 1.000000,
  0.000000, 0.000000, 0.000000>

  material { M_NB_Winebottle_Glass }
}


#include "materials_demo.inc"

/* Extrude test
camo (<0,45,0>, <0,0,0>, 45) // +Y
#declare Extrude = prism { linear_sweep bezier_spline 0, 3.000000, 16

  // -----------
  <15.000000, 0.000000>   // P1
  <15.000000, 3.750000>   // T2
  <5.625000, 10.000000>   // T3
  <0.000000, 10.000000>   // P2
  // -----------
  <0.000000, 10.000000>   // P2
  <-5.625000, 10.000000>  // T4
  <-15.000000, 3.750000>  // T5
  <-15.000000, 0.000000>  // P3
  // -----------
  <-15.000000, 0.000000>  // P3
  <-15.000000, -3.750000> // T6
  <-5.625000, -10.000000> // T7
  <0.000000, -10.000000>  // P4
  // -----------
  <0.000000, -10.000000>  // P4
  <5.625000, -10.000000>  // T8
  <15.000000, -3.750000>  // T1
  <15.000000, 0.000000>   // P1
  // -----------
  
  material { texture {pigment {rgb <1,1,1> }}}
}

object{ Extrude }
*/

