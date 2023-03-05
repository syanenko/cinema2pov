//---------------------------------------------------------------
// Data exporter from C4D to POV-Ray (SDL) format
// Based on Cineware SDK 22.008 Commandline Tool
//
// Author: Sergey Yanenko 'Yesbird', 2023
// e-mail: See posts in news.povray.org
// Sorces: github.com/syanenko/pov-utils
// POV-Ray site: www.povray.org
//
// Supported entities: sphere, cube, cone, cylinder, spline, mesh
//---------------------------------------------------------------

sphere { 0, 0.600000 
  matrix
 <0.500000, 0.000000, 0.000000,
  0.000000, 1.000000, 0.000000,
  0.000000, 0.000000, 1.000000,
  1.279329, 0.000000, -4.299302>

  material { sphere_mat }
}

sphere { 0, 0.600000 
  matrix
 <0.200000, -0.000000, 0.000000,
  0.000000, 1.060660, 1.060660,
  -0.000000, -0.565685, 0.565685,
  -1.508912, -0.636130, -4.391043>

  material { sphere_mat }
}

sphere { 0, 0.600000 
  matrix
 <1.000000, 0.000000, 0.000000,
  0.000000, 1.000000, 0.000000,
  0.000000, 0.000000, 1.000000,
  0.000000, 0.000000, -4.299302>

  material { sphere_mat }
}

cone { <0.000000, -1.000000, 0.000000>, 1.000000, <0.000000, 1.000000, 0.000000>, 0.200000
  matrix
 <1.000000, 0.000000, 0.000000,
  0.000000, 1.000000, 0.000000,
  0.000000, 0.000000, 1.000000,
  2.998035, 1.000000, 0.000000>

  material { cone_mat }
}

box { <-1.000000, -0.500000, -1.669922>, <1.000000, 0.500000, 1.669922>
  matrix
 <1.000000, 0.000000, 0.000000,
  0.000000, 1.000000, 0.000000,
  0.000000, 0.000000, 1.000000,
  0.000000, 0.000000, 3.615841>

  material { cube_mat }
}

cylinder { <0.000000, -1.000000, 0.000000>, <0.000000, 1.000000, 0.000000>, 0.500000
  matrix
 <0.707107, -0.707107, 0.000000,
  0.707107, 0.707107, -0.000000,
  0.000000, 0.000000, 1.000000,
  0.000000, 0.000000, 0.000000>

  material { cyl_mat }
}
