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

camera{	perspective
	location  <0, 0, 0>
	angle 53.130102

  matrix
 <-0.584973, -0.000000, 0.811052,
  -0.086704, 0.994269, -0.062535,
  -0.806405, -0.106903, -0.581621,
  15.839967, 0.777770, 6.673322>

}

#declare Lightsource_Shape_Tex =
	texture { pigment{ rgbt <1.00, 1.00, 1.00, 0.90>}
		finish { phong 1 reflection {0.1 metallic 0.2}}}

#declare Pointlight_Shape =
	union {sphere { <0, 0, 0>, 0.25 }
		    cone { <0, 0, 0>, 0.15, <0.6,  0, 0>,0 }
		    cone { <0, 0, 0>, 0.15, <-0.6, 0, 0>,0 }
		    cone { <0, 0, 0>, 0.15, <0,  0.6, 0>,0 }
		    cone { <0, 0 ,0>, 0.15, <0, -0.6, 0>,0 }
		    cone { <0, 0, 0>, 0.15, <0,  0, 0.6>,0 }
		    cone { <0, 0, 0>, 0.15, <0,  0,-0.6>,0 }
		    texture { Lightsource_Shape_Tex }
		    scale 2.00}

#declare Spotlight_Shape =
  union { sphere { <0, 0, 0>, 0.1 }
		cone { <0,0,0>,0,<0, 0, 1.5>, 0.3 }
		texture {Lightsource_Shape_Tex}
    scale 2.00}

#declare Area_Shape =
	union {
		plane { <0,0,1>, 0 clipped_by {box {<-0.5,-0.5,-0.5>, <0.5,0.5,0.5>}}}
		cylinder { <0,0,0>, <0,0,0.8>, 0.05 } cone { <0,0,0.6>,0.1,<0,0,1>, 0 }
		texture {Lightsource_Shape_Tex}
		scale 2.00}

light_source {<0, 0, 0>
  rgb<0.210900, 0.570000, 0.258780> * 0.830000 spotlight
  radius 71.000000
  falloff 71.000000
	looks_like {Spotlight_Shape}

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

  material { Pink_Granite }
}

cone { <0.000000, -1.000000, 0.000000>, 1.000000, <0.000000, 1.000000, 0.000000>, 0.000000

  matrix
 <1.000000, 0.000000, 0.000000,
  0.000000, 1.000000, 0.000000,
  0.000000, 0.000000, 1.000000,
  0.000000, 0.000000, 0.000000>

  material { Pine_Wood_02 }
}

cone { <0.000000, -1.000000, 0.000000>, 1.000000, <0.000000, 1.000000, 0.000000>, 0.000000

  matrix
 <1.000000, 0.000000, 0.000000,
  0.000000, 1.000000, 0.000000,
  0.000000, 0.000000, 1.000000,
  0.000000, 0.000000, 4.014211>

  material { Blood_Marble }
}


  matrix
 <1.000000, 0.000000, 0.000000,
  0.000000, 1.000000, 0.000000,
  0.000000, 0.000000, 1.000000,
  7.773492, 0.000000, 0.000000>

}

object{ Plane }
object{ Cones }