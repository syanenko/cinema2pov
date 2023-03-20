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

#declare luminosity = 1.3;
#include "playground.inc"
#include "colormaps.inc"

//
// Use include exported 'helix' array
//
#include "spline.inc"

// Axis
axis (4,4,4,0.05)

//
// Camera
//
camo (<0,10,0>, <0,0,0>, 45)  // +Y
// camo (<8,-2,0>, <0,-2,0>, 45) // +X
// camo (<8,-1,-3>/1.1, <0,-2.2,0>, 45) // +XYZ

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
// #declare hot              = make_colormap (hot,              _f, _t);
// #declare winter           = make_colormap (winter,           _f, _t);
// #declare hsv              = make_colormap (hsv,              _f, _t);
// #declare autumn           = make_colormap (autumn,           _f, _t);
// #declare parula           = make_colormap (parula,           _f, _t);
// #declare summer           = make_colormap (summer,           _f, _t);
// #declare turbo            = make_colormap (turbo,            _f, _t);
// #declare cool             = make_colormap (cool,             _f, _t);
// #declare viridis          = make_colormap (viridis,          _f, _t);
// #declare smooth_cool_warm = make_colormap (smooth_cool_warm, _f, _t);
// #declare plasma           = make_colormap (plasma,           _f, _t);
#declare ext_kindlmann    = make_colormap (ext_kindlmann,    0.6, _t);
// #declare kindlmann        = make_colormap (kindlmann,        _f, _t);
// #declare inferno          = make_colormap (inferno,          _f, _t);

//------------------------------------------------------------------------

//
// Sweep sphere
//     
#if (1)
sphere_sweep {
    cubic_spline // b_spline, linear_spline 
    helix_size
        #for (i,0,helix_size-1)
          helix[i][1], helix[i][0] / 3.5 // center, radius                      
        #end
  
    pigment { gradient -y
              color_map  { jet }
              scale 4 
              translate 0.3}
}
#end // if

//
// Make spline (need to draw spheres)
//
#if (0)
#declare _spline =
  spline {
    natural_spline
      #for (i,0,helix_size-1)
          helix[i][0], helix[i][1] // val_n, <point_n>
      #end
  }
#end // if

//
// Draw spheres
//
#if (0)
#declare r_max = 0.35;
#declare c_step = 0.014;
declare  length = 1 - c_step;
#declare c = 0;

#while (c < length)
  #local R = c / 2.5;
  #local center = _spline(c);
  
  #debug concat("----- DEBUG: center=<", vstr(3, center,",", 0,1), ">\n")  
  #debug concat("----- DEBUG: R=", str(R,5,3), "\n\n")

  sphere {
    center, R
    pigment { gradient -y
              color_map  { ext_kindlmann }
              scale 6.7
              translate c}
   }

  #declare c = c + c_step;
#end

#end // if
