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

camera{  perspective
  location  <0, 0, 0>
  angle 53.130102

  matrix
 <-0.685097, -0.000000, 0.728452,
  -0.093324, 0.991760, -0.087769,
  -0.722449, -0.128112, -0.679451,
  17.012373, 0.992139, 9.158566>

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
  rgb<0.210900, 0.570000, 0.258780> * 0.720000
  area_light <1.000000, 0, 0>, <0, 4.000000, 0>, 1, 1
  fade_distance 0.000000
  fade_power 0.000000
  looks_like {Area_Shape}

  matrix
 <0.000000, -0.000000, 1.000000,
  0.000000, 1.000000, 0.000000,
  -1.000000, 0.000000, 0.000000,
  12.800191, -1.025177, -0.000000>

}

#declare Plane = plane { <0,1,0> 0
  bounded_by { box {<-20.000000, -0.010000, -20.000000>, <20.000000, 0.010000, 20.000000>} }
  clipped_by { bounded_by }

  matrix
 <0.000000, -1.000000, 0.000000,
  1.000000, 0.000000, 0.000000,
  -0.000000, 0.000000, 1.000000,
  0.000000, 0.000000, 0.000000>

  material { Default }
}

#declare Cones = union {

cone { <0.000000, -1.000000, 0.000000>, 1.000000, <0.000000, 1.000000, 0.000000>, 0.000000

  matrix
 <1.000000, 0.000000, 0.000000,
  0.000000, 1.000000, 0.000000,
  0.000000, 0.000000, 1.000000,
  0.000000, 0.000000, -3.749159>

  material { M_Ruby_Glass }
}

cone { <0.000000, -1.000000, 0.000000>, 1.000000, <0.000000, 1.000000, 0.000000>, 0.000000

  matrix
 <1.000000, 0.000000, 0.000000,
  0.000000, 1.000000, 0.000000,
  0.000000, 0.000000, 1.000000,
  0.000000, 0.000000, 0.000000>

  material { M_NB_Winebottle_Glass }
}

cone { <0.000000, -1.000000, 0.000000>, 1.000000, <0.000000, 1.000000, 0.000000>, 0.000000

  matrix
 <1.000000, 0.000000, 0.000000,
  0.000000, 1.000000, 0.000000,
  0.000000, 0.000000, 1.000000,
  0.000000, 0.000000, 4.014211>

  material { M_Orange_Glass }
}


  matrix
 <1.000000, 0.000000, 0.000000,
  0.000000, 1.000000, 0.000000,
  0.000000, 0.000000, 1.000000,
  7.773492, 0.000000, 0.000000>

}

object{ Plane }
object{ Cones }
