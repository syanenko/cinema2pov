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

camera{	orthographic
	location  <0, 0, 0>
	angle 149.177089

  matrix
 <-1.000000, -0.000000, 0.000526,
  -0.000433, 0.566841, -0.823827,
  -0.000298, -0.823828, -0.566840,
  -0.003255, 7.358083, 5.063990>

}

#declare Substract = difference {

prism { linear_sweep linear_spline 0, 0.100000, 17

  <2.000000, 0.000000>
  <0.923880, 0.382683>
  <1.414214, 1.414214>
  <0.382683, 0.923880>
  <0.000000, 2.000000>
  <-0.382683, 0.923880>
  <-1.414214, 1.414214>
  <-0.923880, 0.382683>
  <-2.000000, 0.000000>
  <-0.923880, -0.382683>
  <-1.414214, -1.414214>
  <-0.382683, -0.923880>
  <-0.000000, -2.000000>
  <0.382683, -0.923880>
  <1.414214, -1.414214>
  <0.923880, -0.382683>
  <2.000000, 0.000000>

  matrix
 <1.000000, 0.000000, 0.000000,
  0.000000, 1.000000, 0.000000,
  0.000000, 0.000000, 1.000000,
  0.000000, -0.298215, 0.000000>

  material { mat_default }
}

union {

cone { <0.000000, -0.500000, 0.000000>, 0.200000, <0.000000, 0.500000, 0.000000>, 0.000000
  matrix
 <1.000000, 0.000000, 0.000000,
  0.000000, 1.000000, 0.000000,
  0.000000, 0.000000, 1.000000,
  0.000000, 0.000000, 1.300000>

  material { mat_default }
}

cone { <0.000000, -0.500000, 0.000000>, 0.200000, <0.000000, 0.500000, 0.000000>, 0.000000
  matrix
 <0.707107, 0.000000, 0.707107,
  0.000000, 1.000000, 0.000000,
  -0.707107, 0.000000, 0.707107,
  -0.919239, 0.000000, 0.919239>

  material { mat_default }
}

}

}

cone { <0.000000, -0.500000, 0.000000>, 0.200000, <0.000000, 0.500000, 0.000000>, 0.000000
  matrix
 <0.707107, 0.000000, -0.707107,
  0.000000, 1.000000, 0.000000,
  0.707107, 0.000000, 0.707107,
  0.919239, 0.000000, 0.919239>

  material { mat_default }
}

cone { <0.000000, -0.500000, 0.000000>, 0.200000, <0.000000, 0.500000, 0.000000>, 0.000000
  matrix
 <0.000000, 0.000000, -1.000000,
  0.000000, 1.000000, 0.000000,
  1.000000, 0.000000, 0.000000,
  1.300000, 0.000000, 0.000000>

  material { mat_default }
}

cone { <0.000000, -0.500000, 0.000000>, 0.200000, <0.000000, 0.500000, 0.000000>, 0.000000
  matrix
 <-0.707107, -0.000000, -0.707107,
  0.000000, 1.000000, 0.000000,
  0.707107, 0.000000, -0.707107,
  0.919239, 0.000000, -0.919239>

  material { mat_default }
}

cone { <0.000000, -0.500000, 0.000000>, 0.200000, <0.000000, 0.500000, 0.000000>, 0.000000
  matrix
 <-1.000000, -0.000000, -0.000000,
  0.000000, 1.000000, 0.000000,
  0.000000, 0.000000, -1.000000,
  0.000000, 0.000000, -1.300000>

  material { mat_default }
}

cone { <0.000000, -0.500000, 0.000000>, 0.200000, <0.000000, 0.500000, 0.000000>, 0.000000
  matrix
 <-0.707107, 0.000000, 0.707107,
  0.000000, 1.000000, 0.000000,
  -0.707107, 0.000000, -0.707107,
  -0.919239, 0.000000, -0.919239>

  material { mat_default }
}

cone { <0.000000, -0.500000, 0.000000>, 0.200000, <0.000000, 0.500000, 0.000000>, 0.000000
  matrix
 <-0.000000, 0.000000, 1.000000,
  0.000000, 1.000000, 0.000000,
  -1.000000, 0.000000, -0.000000,
  -1.300000, 0.000000, -0.000000>

  material { mat_default }
}

#declare Board = difference {

intersection {

box { <-0.200000, -0.200000, -0.200000>, <0.200000, 0.200000, 0.200000>
  matrix
 <10.000000, 0.000000, 0.000000,
  0.000000, 1.000000, 0.000000,
  0.000000, 0.000000, 30.000000,
  -2.695171, -0.161315, 0.615893>

  material { mat_default }
}

cylinder { <0.000000, -1.000000, 0.000000>, <0.000000, 1.000000, 0.000000>, 0.500000
  matrix
 <1.000000, 0.000000, 0.000000,
  0.000000, 1.000000, 0.000000,
  0.000000, 0.000000, 3.000000,
  -2.708827, -0.827478, -0.046330>

  material { mat_default }
}

}

prism { linear_sweep linear_spline 0, 4.000000, 17

  <3.000000, 0.000000>
  <1.847759, 0.765367>
  <2.121320, 2.121320>
  <0.765367, 1.847759>
  <0.000000, 3.000000>
  <-0.765367, 1.847759>
  <-2.121320, 2.121320>
  <-1.847759, 0.765367>
  <-3.000000, 0.000000>
  <-1.847759, -0.765367>
  <-2.121320, -2.121320>
  <-0.765367, -1.847759>
  <-0.000000, -3.000000>
  <0.765367, -1.847759>
  <2.121320, -2.121320>
  <1.847759, -0.765367>
  <3.000000, 0.000000>

  matrix
 <0.100000, 0.000000, 0.000000,
  0.000000, 0.100000, 0.000000,
  0.000000, 0.000000, 0.100000,
  -2.700445, -0.282867, -0.017559>

  material { mat_default }
}

}

object{ Substract }
object{ Board }