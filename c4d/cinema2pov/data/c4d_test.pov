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
axis (15,15,14,0.1)

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
  texture {
    pigment { gradient y
              color_map  { ext_kindlmann }
              scale 23
              translate -2}}}
*/
#declare mat_default = material {
  texture {pigment {rgb <1,1,1> }}}

//
// Include exported data
//
// #include "c4d_test.inc"
// #include "global_test.inc"
// #include "extrude_test.inc"
// #include "sweep_test.inc"
// #include "lathe_test.inc"
// #include "spline_test.inc"

// looks_like { sphere { 0, 0.3 pigment{rgb <0,1,0>}}}
//  material { texture {pigment {rgb <1,1,1> }}}

#include "lights_test.inc"


