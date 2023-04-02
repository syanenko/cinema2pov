//---------------------------------------------------------------
// Data exporter from C4D to POV-Ray (SDL) format
// Based on Cineware SDK 22.008 Commandline Tool
//
// Author: Sergey Yanenko 'Yesbird', 2023
// e-mail: See posts in news.povray.org
// Sorces: github.com/syanenko/pov-utils
// POV-Ray site: www.povray.org
//
// Supported primitives: camera, sphere, cube, cone, cylinder, spline
//                       mesh2, prism, sphere sweep, lathe
//---------------------------------------------------------------

#declare Lightsource_Shape_Tex =
    texture { pigment{ rgbt <1.00, 1.00, 1.00, 0.99>}
      finish { phong 1 reflection {0.1 metallic 0.2}}}

#declare Area_Shape =
  union {
    plane { <0,0,1>, 0 clipped_by {box {<-0.5,-0.5,-0.5>, <0.5,0.5,0.5>}}}
    cylinder { <0,0,0>, <0,0,0.8>, 0.05 } cone { <0,0,0.6>,0.1,<0,0,1>, 0 }
    texture {Lightsource_Shape_Tex}
    scale 1.00}

light_source {<0, 0, 0>
  rgb<1.000000, 1.000000, 1.000000> * 1.000000 shadowless
  area_light <4.000000, 0, 0>, <0, 4.000000, 0>, 2, 2
  fade_distance 0.000000
  fade_power 0.000000
  looks_like {Area_Shape}

  matrix
 <0.879741, 0.257649, -0.399590,
  0.000000, 0.840441, 0.541903,
  0.475453, -0.476734, 0.739371,
  -1.927480, 2.193520, -2.905654>

}

camera{  perspective
  location  <0, 0, 0>
  angle 53.130102

  matrix
 <0.963988, -0.000000, 0.265947,
  -0.147410, 0.832329, 0.534320,
  -0.221356, -0.554281, 0.802355,
  1.410254, 4.058105, -5.305321>

}

