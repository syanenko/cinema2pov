//------------------------------------------------------------------------
//
// Persistence of Vision Ray Tracer version 3.7
// Scene Description Language (SDL)
// 
// C4D to POV converter: materials demos
//
// File: demos.pov
// Version: 1.0
// Last updated: 03-Apr-2023
//
// Author: Sergey Yanenko "Yesbird", 2023
// e-mail: See posts in news.povray.org
//
//------------------------------------------------------------------------
#version 3.7;
global_settings { assumed_gamma 1.5 }

#include "include/materials.inc"

//
// Background
//
background {color srgb<13,17,23> / 256}

//
// Materials
//
#include "stone_demo.inc"
// #include "glass_demo.inc"
// #include "wood_demo.inc"
