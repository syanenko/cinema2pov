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

camera{	perspective
	location  <0, 0, 0>
	angle 53.130102

  matrix
 <0.969611, -0.000000, 0.244652,
  -0.183365, 0.662009, 0.726719,
  -0.161962, -0.749496, 0.641892,
  1.076982, 5.945170, -4.511736>

}

#declare Extrude = prism { linear_sweep cubic_spline 0, 1.000000, 7

  <0.000000, -1.000000>
  <1.500000, 0.000000>
  <0.000000, 1.000000>
  <-1.500000, 0.000000>
  <0.000000, -1.000000>
  <1.500000, 0.000000>
  <0.000000, 1.000000>
  matrix
 <1.000000, 0.000000, 0.000000,
  0.000000, 1.000000, 0.000000,
  0.000000, 0.000000, 1.000000,
  0.000000, 0.000000, 0.000000>

  material { mat_default }
}

object{ Extrude }
