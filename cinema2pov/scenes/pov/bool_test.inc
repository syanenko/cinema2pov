//---------------------------------------------------------------
// Data exporter from C4D to POV-Ray (SDL) format
// Based on Cineware SDK 22.008 Commandline Tool
//
// Author: Sergey Yanenko 'Yesbird', 2023
// e-mail: See posts in news.povray.org
// Sorces: github.com/syanenko/pov-utils
// POV-Ray site: www.povray.org
//
// Supported primitives: sphere, cube, cone, cylinder, spline, mesh
//---------------------------------------------------------------

#declare Boole = difference {

difference {

torus { 1.000000, 0.400000
  matrix
 <1.000000, 0.000000, 0.000000,
  0.000000, 1.000000, 0.000000,
  0.000000, 0.000000, 1.000000,
  -0.031106, 0.192287, -0.281130>

  material { mat_default }
}

box { <-0.500000, -0.554706, -1.000000>, <0.500000, 0.554706, 1.000000>
  matrix
 <1.000000, 0.000000, 0.000000,
  0.000000, 1.000000, 0.000000,
  0.000000, 0.000000, 1.000000,
  0.914948, 0.305536, -0.443076>

  material { mat_default }
}

}

intersection {

sphere { 0, 1.500000 
  matrix
 <1.000000, 0.000000, 0.000000,
  0.000000, 1.000000, 0.000000,
  0.000000, 0.000000, 1.000000,
  -0.834863, 1.070715, -0.392358>

  material { mat_default }
}

cone { <0.000000, -1.375000, 0.000000>, 1.571429, <0.000000, 1.375000, 0.000000>, 0.000000
  matrix
 <1.000000, 0.000000, 0.000000,
  0.000000, 1.000000, 0.000000,
  0.000000, 0.000000, 1.000000,
  -0.834863, 0.037426, -0.349642>

  material { mat_default }
}

}

}

sphere { 0, 0.500000 
  matrix
 <1.000000, 0.000000, 0.000000,
  0.000000, 1.000000, 0.000000,
  0.000000, 0.000000, 1.000000,
  -0.054982, 0.681413, -0.314835>

  material { mat_default }
}

object{ Boole }
