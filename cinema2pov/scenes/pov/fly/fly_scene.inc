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
    texture { pigment{ rgbt <1.00, 1.00, 1.00, 0.96>}
      finish { phong 1 reflection {0.1 metallic 0.2}}}

#declare Spotlight_Shape =
  union { sphere { <0, 0, 0>, 0.1 }
    cone { <0,0,0>,0,<0, 0, 1.5>, 0.3 }
    texture {Lightsource_Shape_Tex}
    scale 1.20}

light_source {<0, 0, 0>
  rgb<0.820000, 0.820000, 0.820000> * 1.000000 spotlight
  radius 27.000000
  falloff 27.000000
  tightness 31.400000
  fade_distance 0.000000
  fade_power 0.000000
  looks_like {Spotlight_Shape}

  matrix
 <0.368232, -0.929734, -0.000000,
  0.421647, 0.166998, 0.891249,
  -0.828625, -0.328186, 0.453514,
  37.301008, 15.267797, -21.023683>

}

#declare Lightsource_Shape_Tex =
    texture { pigment{ rgbt <1.00, 1.00, 1.00, 0.96>}
      finish { phong 1 reflection {0.1 metallic 0.2}}}

#declare Area_Shape =
  union {
    plane { <0,0,1>, 0 clipped_by {box {<-0.5,-0.5,-0.5>, <0.5,0.5,0.5>}}}
    cylinder { <0,0,0>, <0,0,0.8>, 0.05 } cone { <0,0,0.6>,0.1,<0,0,1>, 0 }
    texture {Lightsource_Shape_Tex}
    scale 1.20}

light_source {<0, 0, 0>
  rgb<0.820000, 0.820000, 0.820000> * 1.000000
  area_light <24.000000, 0, 0>, <0, 16.000000, 0>, 2, 2
  fade_distance 0.000000
  fade_power 0.000000
  looks_like {Area_Shape}

  matrix
 <1.000000, -0.000000, 0.000000,
  0.000000, 0.000000, 1.000000,
  -0.000000, -1.000000, 0.000000,
  -0.117055, 73.672784, -0.147146>

}

#declare Lightsource_Shape_Tex =
    texture { pigment{ rgbt <1.00, 1.00, 1.00, 0.96>}
      finish { phong 1 reflection {0.1 metallic 0.2}}}

#declare Area_Shape =
  union {
    plane { <0,0,1>, 0 clipped_by {box {<-0.5,-0.5,-0.5>, <0.5,0.5,0.5>}}}
    cylinder { <0,0,0>, <0,0,0.8>, 0.05 } cone { <0,0,0.6>,0.1,<0,0,1>, 0 }
    texture {Lightsource_Shape_Tex}
    scale 1.20}

light_source {<0, 0, 0>
  rgb<0.820000, 0.820000, 0.820000> * 1.000000
  area_light <24.000000, 0, 0>, <0, 16.000000, 0>, 2, 2
  fade_distance 0.000000
  fade_power 0.000000
  looks_like {Area_Shape}

  matrix
 <0.770534, 0.605424, -0.199348,
  -0.294964, 0.615935, 0.730494,
  0.565043, -0.504070, 0.653177,
  40.529770, -23.415857, 68.256441>

}

#declare Lightsource_Shape_Tex =
    texture { pigment{ rgbt <1.00, 1.00, 1.00, 0.96>}
      finish { phong 1 reflection {0.1 metallic 0.2}}}

#declare Area_Shape =
  union {
    plane { <0,0,1>, 0 clipped_by {box {<-0.5,-0.5,-0.5>, <0.5,0.5,0.5>}}}
    cylinder { <0,0,0>, <0,0,0.8>, 0.05 } cone { <0,0,0.6>,0.1,<0,0,1>, 0 }
    texture {Lightsource_Shape_Tex}
    scale 1.20}

light_source {<0, 0, 0>
  rgb<0.820000, 0.820000, 0.820000> * 0.200000
  area_light <24.000000, 0, 0>, <0, 16.000000, 0>, 2, 2
  fade_distance 0.000000
  fade_power 0.000000
  looks_like {Area_Shape}

  matrix
 <-1.000000, -0.000000, 0.000000,
  0.000000, 1.000000, 0.000000,
  -0.000000, 0.000000, -1.000000,
  2.357540, 3.605374, 97.648751>

}

#declare Lightsource_Shape_Tex =
    texture { pigment{ rgbt <1.00, 1.00, 1.00, 0.96>}
      finish { phong 1 reflection {0.1 metallic 0.2}}}

#declare Area_Shape =
  union {
    plane { <0,0,1>, 0 clipped_by {box {<-0.5,-0.5,-0.5>, <0.5,0.5,0.5>}}}
    cylinder { <0,0,0>, <0,0,0.8>, 0.05 } cone { <0,0,0.6>,0.1,<0,0,1>, 0 }
    texture {Lightsource_Shape_Tex}
    scale 1.20}

light_source {<0, 0, 0>
  rgb<0.820000, 0.820000, 0.820000> * 0.200000
  area_light <24.000000, 0, 0>, <0, 16.000000, 0>, 1, 1
  fade_distance 0.000000
  fade_power 0.000000
  looks_like {Area_Shape}

  matrix
 <0.000000, -0.000000, 1.000000,
  0.000000, 1.000000, 0.000000,
  -1.000000, 0.000000, 0.000000,
  98.414489, -1.025177, -0.000000>

}

camera{  perspective
  location  <0, 0, 0>
  angle 53.130102

  matrix
 <-0.630236, -0.000000, 0.776404,
  -0.384263, 0.868935, -0.311920,
  -0.674644, -0.494926, -0.547634,
  66.199468, 49.160715, 53.754305>

}

