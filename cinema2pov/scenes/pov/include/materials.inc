//---------------------------------------------------------------
// Scene exporter from C4D to POV-Ray (SDL) format
// Based on Cineware SDK 22.008 Commandline Tool
// 
// Author: Sergey Yanenko 'Yesbird', 2023
// e-mail: See posts in news.povray.org
// Sorces: github.com/syanenko/pov-utils
// POV-Ray site: www.povray.org
//
// Materials definitions file
//
// Defined in "textures.inc": 
//
// M_Glass
// M_Glass2
// M_Glass3
// M_Green_Glass
// M_NB_Glass
// M_NB_Old_Glass
// M_NB_Winebottle_Glass
// M_NB_Beerbottle_Glass
// M_Ruby_Glass
// M_Dark_Green_Glass
// M_Yellow_Glass
// M_Orange_Glass
// M_Vicks_Bottle_Glass
// M_Water
//
//---------------------------------------------------------------

#include "textures.inc"
#include "glass.inc"
                              
#declare Default = material { texture {pigment {rgb <1,1,1> }}}

//
// Glass
//
#declare Bright_Green_Glass  = material { texture { NBglass pigment { rgbf <0, 1, 0, 0.5> }}
                                          interior {Glass_Interior}}

#declare Bright_Pink_Glass   = material { texture { NBglass pigment { rgbf <0.95, 0.37, 0.79, 0.5> }}
                                          interior {Glass_Interior}}

#declare Bright_Orange_Glass = material { texture { NBglass pigment { rgbf <0.96, 0.33, 0, 0.5> }}
                                          interior {Glass_Interior}}

#declare Glossy_Green_Glass  = material { texture { pigment { rgbf <0, 1, 0, 3.2> }
                                                    finish  { ambient 0
                                                              diffuse 0
                                                              reflection 0.5
                                                              phong 0.3
                                                              phong_size 60}}}

#declare Glossy_Pink_Glass   = material { texture { pigment { rgbf <0.95, 0.37, 0.79, 3.2> }
                                                    finish  { ambient 0
                                                              diffuse 0
                                                              reflection 0.5
                                                              phong 0.3
                                                              phong_size 60}}}


#declare Glossy_Orange_Glass = material { texture { pigment { rgbf <0.96, 0.33, 0, 3.2> }
                                                    finish  { ambient 0
                                                              diffuse 0
                                                              reflection 0.5
                                                              phong 0.3
                                                              phong_size 60}}}
//
// Stone
//
#declare Blood_Marble = material{ texture { pigment {Blood_Marble}
                                  // normal { bumps 1.9 scale 0.02}
                                    finish { phong 1 } 
                                    scale 4.0 }}

#declare Pink_Granite = material{ texture { pigment{ Pink_Granite } 
                                  // normal { bumps 0.5 scale 0.05}
                                   finish { phong 1 } 
                                   scale 0.7 }}
//
// Wood
//
#declare Pine_Wood_01 = material{ texture{ Pine_Wood     
                                    normal { wood 0.5 scale 0.3 turbulence 0.1}
                                    finish { phong 1 } 
                                    rotate<60,0,45> scale 0.25 }}

#declare Pine_Wood_02 = material{ texture{
                                    pigment{ wood turbulence 0.02 octaves 4 lambda 3
                                    scale 0.175 rotate <2, 3, 0> 
                                    color_map {
                                      [0.0 color rgb <1.30, 0.99, 0.64>]
                                      [0.5 color rgb <0.75, 0.39, 0.17>]
                                      [0.7 color rgb <0.75, 0.39, 0.17>]
                                      [1.0 color rgb <1.30, 0.99, 0.64>] }}
                                    // normal { agate 0.5 scale 0.25} 
                                    finish { phong 1 } 
                                    rotate <0,0, 0>  scale 2  translate <0,0,0> }}
