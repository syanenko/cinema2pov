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
//
// Author: Tek
// Description: http://news.povray.org/povray.binaries.images/thread/%3C42c858a2%40news.povray.org%3E/
//
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

//
// Author: Tek
// Description: http://news.povray.org/povray.binaries.images/thread/%3C42c858a2%40news.povray.org%3E/
//
#declare Pearlescent_Pink_Glass =
  material {
   texture {
    pigment { rgb <0.95, 0.37, 0.79> transmit 0.97 }
    finish {
     reflection { .01, .95 fresnel } conserve_energy
     phong 30 phong_size 120 metallic 1
     specular 50 roughness .0004
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
// Author: Tek
// Description: http://news.povray.org/povray.binaries.images/thread/%3C42c858a2%40news.povray.org%3E/
//
#declare Pearlescent_Red_Glass =
  material {
   texture {
    pigment { rgb <1, 0.1, 0.1> transmit 0.97 }
    finish {
     reflection { .01, .95 fresnel } conserve_energy
     phong 30 phong_size 120 metallic 1
     specular 50 roughness .0004
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
// Author: Tek
// http://news.povray.org/povray.binaries.images/thread/%3C42c858a2%40news.povray.org%3E/
//
#declare Pearlescent_Blue_Glass =
  material {
   texture {
    pigment { rgb <0.16, 0.33, 0.95> transmit 0.97 }
    finish {
     reflection { .01, .95 fresnel } conserve_energy
     phong 30 phong_size 120 metallic 1
     specular 50 roughness .0004
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


//
// Stone
//
//---------------------------------------------------------------
#declare Blood_Marble = material{ texture { pigment {Blood_Marble}
                                  finish { phong 1 } 
                                  scale 4.2 }}

#declare Pink_Granite = material{ texture { pigment{ Pink_Granite } 
                                  finish { phong 1 } 
                                  scale 0.7 }}

#declare Jade = material{ texture { pigment{ Jade }
                          finish { phong 1 } 
                          scale 1 }}

#declare Red_Marble = material{ texture { pigment{ Red_Marble }
                                finish { phong 1 } 
                                scale 0.7 }}

#declare White_Marble = material{ texture { pigment{ White_Marble }
                                  finish { phong 1 } 
                                  scale 0.8 }}

#declare Blue_Agate = material{ texture { pigment{ Blue_Agate }
                                finish { phong 1 } 
                                scale 0.8 }}

#declare Sapphire_Agate = material{ texture { pigment{ Sapphire_Agate }
                                    finish { phong 1 } 
                                    scale 0.7 }}

#declare Brown_Agate = material{ texture { pigment{ Brown_Agate }
                                 finish { phong 1 } 
                                 scale 0.8 }}

#declare PinkAlabaster = material{ texture { PinkAlabaster }
                                   scale 1 }

//
// Metal
//
//---------------------------------------------------------------
#declare Chrome           = material{ texture { Chrome_Texture   }} 
#declare Gold             = material{ texture { Gold_Texture     }}    
#declare Bronze           = material{ texture { Bronze_Texture   }}    
#declare Copper           = material{ texture { Copper_Texture   }}    
#declare Silver           = material{ texture { Silver_Texture   }}    
#declare Polished_Chrome  = material{ texture { Polished_Chrome  }}
#declare Polished_Brass   = material{ texture { Polished_Brass   }}
#declare New_Brass        = material{ texture { New_Brass        }}
#declare Spun_Brass       = material{ texture { Spun_Brass       }}
#declare Brushed_Aluminum = material{ texture { Brushed_Aluminum }}
#declare Silver1          = material{ texture { Silver1          }}
#declare Silver2          = material{ texture { Silver2          }}
#declare Silver3          = material{ texture { Silver3          }}
#declare Soft_Silver      = material{ texture { Soft_Silver      }}
#declare New_Penny        = material{ texture { New_Penny        }}
#declare Tinny_Brass      = material{ texture { Tinny_Brass      }}
#declare Gold_Nugget      = material{ texture { Gold_Nugget      }}
#declare Brass_Valley     = material{ texture { Brass_Valley }
                                      scale 2 }
#declare Rust             = material{ texture { Rust }
                                      scale 2 }
#declare Rusty_Iron       = material{ texture { Rusty_Iron }
                                      scale 2.5 }
