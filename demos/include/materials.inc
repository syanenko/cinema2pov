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
#include "include/colormaps.inc"
                              
#declare Default = material { texture {pigment {rgb <1,1,1> }}}

//
// Glass
//
//---------------------------------------------------------------
#declare Bright_Green_Glass  = material { texture { NBglass pigment { rgbf <0, 1, 0, 0.5> }}
                                          interior {Glass_Interior}}

#declare Bright_Pink_Glass   = material { texture { NBglass pigment { rgbf <0.95, 0.37, 0.79, 0.5> }}
                                          interior {Glass_Interior}}

#declare Bright_Orange_Glass = material { texture { NBglass pigment { rgbf <0.96, 0.33, 0, 0.5> }}
                                          interior {Glass_Interior}}

#declare Bright_Blue_Glass   = material { texture { NBglass pigment { rgbf <0.16, 0.33, 0.95, 0> }}
                                          interior {Glass_Interior}}

#declare Glossy_Green_Glass  = material { texture { pigment { rgbf <0, 1, 0, 2.2> }
                                                    finish  { ambient 0.01
                                                              diffuse 0.01
                                                              reflection 0.4
                                                              phong 1
                                                              phong_size 80}}}

#declare Glossy_Pink_Glass   = material { texture { pigment { rgbf <0.95, 0.37, 0.79, 2.2> }
                                                    finish  { ambient 0.005
                                                              diffuse 0.005
                                                              reflection 0.3
                                                              phong 8
                                                              phong_size 80}}}


#declare Glossy_Orange_Glass = material { texture { pigment { rgbf <0.96, 0.33, 0, 2.2> }
                                                    finish  { ambient 0.005
                                                              diffuse 0.005
                                                              reflection 0.3
                                                              phong 8
                                                              phong_size 80}}}
#declare Pearlescent_Green_Glass =
  material {
   texture {
    pigment { rgb <0,1,0> transmit 0.97 }
    finish {
     reflection { .01, .95 fresnel } conserve_energy
     //big fat phong highlight, to give ethereal sheen to the material.
     //make phong fade with angle, using pov's metallic effect on black
     //(because there's no fresnel for phong)
     phong 30 phong_size 120 metallic 1
     specular 50 roughness .0004   //layer a sharp highlight on top.
    }
   }
   interior {
    ior 1.5
    fade_colour <1,.25,.0>
    fade_distance .5
    fade_power 2
   }
  }

#declare Pearlescent_Pink_Glass =
  material {
   texture {
    pigment { rgb <0.95, 0.37, 0.79> transmit 0.97 }
    finish {
     reflection { .01, .95 fresnel } conserve_energy
     //big fat phong highlight, to give ethereal sheen to the material.
     //make phong fade with angle, using pov's metallic effect on black
     //(because there's no fresnel for phong)
     phong 30 phong_size 120 metallic 1
     specular 50 roughness .0004   //layer a sharp highlight on top.
    }
   }
   interior {
    ior 1.5
    fade_colour <1,.25,.0>
    fade_distance .5
    fade_power 2
   }
  }


#declare Pearlescent_Red_Glass =
  material {
   texture {
    pigment { rgb <1, 0.1, 0.1> transmit 0.97 }
    finish {
     reflection { .01, .95 fresnel } conserve_energy
     //big fat phong highlight, to give ethereal sheen to the material.
     //make phong fade with angle, using pov's metallic effect on black
     //(because there's no fresnel for phong)
     phong 30 phong_size 120 metallic 1
     specular 50 roughness .0004   //layer a sharp highlight on top.
    }
   }
   interior {
    ior 1.5
    fade_colour <1,.25,.0>
    fade_distance .5
    fade_power 2
   }
  }

#declare Pearlescent_Blue_Glass =
  material {
   texture {
    pigment { rgb <0.16, 0.33, 0.95> transmit 0.97 }
    finish {
     reflection { .01, .95 fresnel } conserve_energy
     //big fat phong highlight, to give ethereal sheen to the material.
     //make phong fade with angle, using pov's metallic effect on black
     //(because there's no fresnel for phong)
     phong 30 phong_size 120 metallic 1
     specular 50 roughness .0004   //layer a sharp highlight on top.
    }
   }
   interior {
    ior 1.5
    fade_colour <1,.25,.0>
    fade_distance .5
    fade_power 2
   }
  }


//
// Stone
//
//---------------------------------------------------------------
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
//---------------------------------------------------------------
#declare Pine_Wood_01 = material{ texture{ Pine_Wood     
                                    normal { wood 0.5 scale 0.3 turbulence 0.1}
                                    finish { phong 1 } 
                                    rotate<60,0,45> scale 0.3 }}

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
                                    rotate <-20,10,0>  scale 0.8  translate <0,0,0> }}


#declare DMFWood1_01 = material{ texture{ 
                                    pigment {DMFWood1}
                                    finish { phong 1 } 
                                    rotate<30,10,35> scale 1.5 }}

#declare DMFWood1_02 = material{ texture{ 
                                    pigment {DMFWood2}
                                    finish { phong 1 } 
                                    rotate<40,10,35> scale 2.5 }}


#declare DMFWood1_03 = material{ texture{ 
                                    pigment {DMFWood3}
                                    finish { phong 1 } 
                                    rotate<-30,60,35> scale 2.5 }}

#declare DMFWood1_04 = material{ texture{ 
                                    pigment {DMFWood4}
                                    finish { phong 1 } 
                                    rotate<-60,15,45> scale 2.5 }}

#declare DMFWood1_05 = material{ texture{ 
                                    pigment {DMFWood5}
                                    finish { phong 1 } 
                                    rotate<40,10,35> scale 2.5 }}

#declare DMFWood1_06 = material{ texture{ DMFWood6
                                 rotate<80,55,45> scale 2  }}

