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

#declare Extrude = prism { linear_sweep cubic_spline 0, 3.000000, 19

  <9.238795, -3.826834>
  <20.000000, 0.000000>
  <9.238795, 3.826834>
  <14.142136, 14.142136>
  <3.826834, 9.238795>
  <0.000000, 20.000000>
  <-3.826834, 9.238795>
  <-14.142136, 14.142136>
  <-9.238795, 3.826834>
  <-20.000000, 0.000000>
  <-9.238795, -3.826834>
  <-14.142136, -14.142136>
  <-3.826834, -9.238795>
  <-0.000000, -20.000000>
  <3.826834, -9.238795>
  <14.142136, -14.142136>
  <9.238795, -3.826834>
  <20.000000, 0.000000>
  <9.238795, 3.826834>
  matrix
 <0.100000, 0.000000, 0.000000,
  0.000000, 0.100000, 0.000000,
  0.000000, 0.000000, 0.100000,
  -0.005274, 0.030602, -0.017559>

  material { mat_default }
}

//
// Spline points array
//
// SplineType: 1
// SegmentCount: 1
// PointCount: 4
//
#declare Romb_size = 4;
#declare Romb = array mixed [Romb_size][2] {
  { 0.000000, <15.000000, 0.000000, 0.000000>}
  { 0.250000, <0.000000, 10.000000, 0.000000>}
  { 0.500000, <-15.000000, 0.000000, 0.000000>}
  { 0.750000, <0.000000, -10.000000, 0.000000>}
}

object{ Extrude }
