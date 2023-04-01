//--- beetle materials

//--- C O L O R S
#ifndef (Transparent) #declare Transparent = rgbt 1 ;#end
#declare C_white =          color rgb<1,1,1>  ;
#declare C_black =          color rgb<0,0,0>  ;
#declare C_red =            color rgb<1,0,0>  ;  
#declare C_red_dark =       color rgb<.9,0,0>  ;
#declare C_green =          color rgb<0,1,0>  ;
#declare C_blue =           color rgb<0,.5,.9>  ;
#declare C_orange =         color rgb<1,.5,0>  ;
#declare C_copper =         color rgb <0.40, 0.20, 0.15>;  
#declare C_silver =         color rgb <0.85, 0.85, 0.8>;   
#declare C_gold =           color red 0.82 green 0.6 blue 0.196078;
#declare C_gold_bright=     color <0.90, 0.65, 0.15>;
#declare C_light_blue =     color red 0.6 green 0.8 blue 1; 
#declare C_horizon_blue =   color red .82 green 1 blue .98; 
#declare C_light_green =    color rgb<.75,1,.9>  ;
#declare C_gray10 =         color red 0.1 green 0.1 blue 0.1;   
#declare C_gray20 =         color red 0.2 green 0.2 blue 0.2;
#declare C_gray30 =         color red 0.3 green 0.3 blue 0.3; 
#declare C_gray40 =         color red 0.4 green 0.4 blue 0.4;
#declare C_gray50 =         color red 0.5 green 0.5 blue 0.5;
#declare C_gray60 =         color red 0.6 green 0.6 blue 0.6; 
#declare C_gray70 =         color red 0.7 green 0.7 blue 0.7;   
#declare C_gray80 =         color red 0.8 green 0.8 blue 0.8; 
#declare C_gray90 =         color red 0.9 green 0.9 blue 0.9;
#declare C_tan =            color red 0.75 green 0.66 blue 0.5;
#declare C_tan_gold =       color red 0.75 green 0.56 blue 0.45;
#declare C_tan_dark =       color red 0.66 green 0.5 blue 0.4; 
#declare C_rose =           color red 0.66 green 0.5 blue 0.4;
#declare RGB_green_olive =  rgb <0.4, 0.6, 0.2> ;
#declare RGB_green_gray =   rgb <0.5, 0.6, 0.4> ; 
#declare RGB_yellow_gray =  rgb <0.7, 0.8, 0.4> ;
#declare RGB_brown_gray =   rgb <0.879, 0.55, 0.32> ;  
#declare C_brown_gray =     color red 1 green 0.6 blue 0.32 ; 
#declare C_teal =           color rgb<.30,.51,.54> ;
#declare C_purple =         color red 0.18 green 0 blue 0.26;
#declare C_skylight_blue =  color red .10 green .15 blue .2 ;
#declare C_skylight_warm =  color red .06 green .04 blue .03 ;
#declare C_dark_gray_blue = color red .04 green .08 blue .10 ;      
#declare C_gray_blue =      color red .04 green .06 blue .07 ;
#declare C_dark_cyan =      color red 0 green.07 blue .11 ; 

#declare C_water = colour red .03 green .04 blue .05 filter 1 ;
#declare C_water_fade_A = colour red .05 green .06 blue .07 filter .2 ;
#declare C_water_fade_B = colour red .05 green .06 blue .07 filter .2 ;
#declare C_water_fade_C = colour red .05 green .06 blue .07 filter .2 ;

#declare f = .0039  ;                             
#declare tR = 107*f ;
#declare tG = 176*f ;
#declare tB = 189*f ;
#declare C_teal = color rgb<tR,tG,tB> ;


#declare C_offWhite = color red 0.8 green 0.7 blue 0.5;
#declare C_red50 = rgbf<1,0,0,.5>;


// -----------------------------------------------------------------------------------------
//                     C O L O R    M A P S
//------------------------------------------------------------------------------------------  

#declare CM_black_bands =
    color_map {
        [ 0.0      C_white ]  
        [ 0.3      C_white ]
        [ 0.50     C_black ]
        [ 0.9      C_white ]
        [ 1.0      C_white ]
    }  
        
#declare C_map_spotted_skin =  
    color_map {
        [0.00      C_offWhite*2] 
        [0.3       C_offWhite*1]
        [0.7       C_tan *.75]
        [1.1       C_tan*.2]

    }

#declare C_map_spotted_skin_dark =  
    color_map {
        [0.00      C_offWhite*1] 
        [0.3       C_offWhite*.5]
        [0.7       C_tan_gold *.6]
        [1.1       C_tan_gold*.1]

    }

#declare C_map_spotted_rose =  
    color_map {
        [0.00      C_tan_gold*1] 
        [0.3       C_tan_gold*.5]
        [0.7       C_rose *.6]
        [1.1       C_rose*.1]

    }

    
#declare CM_red_gold =
    color_map {
        [ 0.0     C_red_dark ]  
        [ 0.2     C_orange * .5 ]
        [ 0.4     C_orange * .5]
        [ 1.0     C_red_dark ]
    }
        
          
// -----------------------------------------------------------------------------------------
//                     F I N I S H E S 
//------------------------------------------------------------------------------------------  

#declare F_velvet_metal =
    finish {
        ambient 0
        brilliance 8
        diffuse 1
        metallic
        specular 5
        roughness 1/20
        phong 3
        phong_size 100 //fresnel 
        reflection {0, .5 fresnel}
    }   
 
     
#declare F_metal_hard =
finish {
    conserve_energy 
    brilliance 5
    ambient .2
    diffuse 1 
    phong 20    
    phong_size 50
    metallic
    specular 10
    roughness 1/20
    reflection {0.01, .7 fresnel on } 
}


#declare F_bug_gloss =
    finish {
        ambient .5
        brilliance 8
        diffuse 1   
        //metallic
        specular 5
        roughness 1/100
        phong albedo 0.5
        phong_size 90  
        reflection {0, .8 fresnel}
    }
    
#declare F_gloss =
    finish {
        ambient 0
        brilliance 8
        diffuse 1   
        //metallic
        specular 5
        roughness 1/100
        phong albedo 0.5
        phong_size 70  
        reflection {.1, .7 fresnel}
    }

#declare F_soft =
    finish {
        ambient .2
        diffuse 1   
        phong .5
        phong_size 70  
        reflection {.01, .52 fresnel}
    }
        
#declare F_skin =
    finish {
        ambient .1
        diffuse 1   
        specular .2
        phong .8
        phong_size 40  
    }
    
    
// -----------------------------------------------------------------------------------------
//                     P I G M E N T S
//------------------------------------------------------------------------------------------ 
   
#declare P_black_bands = 
   pigment { 
        bozo 
        color_map {CM_black_bands} 
        turbulence 0 
        }         
        
        
        
// -----------------------------------------------------------------------------------------
//                     N O R M A L S
//------------------------------------------------------------------------------------------  

#declare N_brush_xz = 
    normal {
       bozo 
       scale <1,.1,1>
       bump_size .2  
       turbulence 0 
    }  
    
#declare N_crackle_small = 
    normal {
        crackle
        turbulence .3 
        scale .1 
        bump_size 1
    }
        
#declare N_crackle_large = 
    normal {
        crackle
        turbulence .3 
        scale 1 
        bump_size .3
    }

#declare N_skin = 
    normal {
        bozo
        turbulence .03 
        scale 1 
        bump_size .3
    }


#declare N_eye = normal { 
    bumps 1 
    scale 1 turbulence 0.05 bump_size .2 }   ;
    
    
// -----------------------------------------------------------------------------------------
//                     M A T E R I A L S
//------------------------------------------------------------------------------------------  

#declare M_gray50_satin = 
material{ 
    texture{ 
        pigment{ C_gray70 } 
        finish { F_soft  }
        } 
    }

#declare M_black_hair = 
material{ 
    texture{ 
        pigment{ C_black } 
        finish { F_metal_hard  }
        } 
    }

#declare M_default =  
material{ 
    texture {
        pigment{ rgb <0.4, 0.34, 0.2> *2} 
        finish {
            diffuse .9
            ambient .2 
            phong .5
            phong_size 40
            //reflection .005
        } 
    }    
} 


#declare fly_eye =  
material{ 
    texture {
        pigment{ C_black } 
        finish { F_bug_gloss }
        normal { N_crackle_large scale 1}
    }    
} 




// -----------------------------------------------------------------------------------------
//                      F L Y   S K I N
//------------------------------------------------------------------------------------------  

    
   
#declare mouth_material = 
material {
    texture {
        pigment { 
            gradient y
            color_map {CM_red_gold} 
            } 
        finish { F_velvet_metal }
        normal { N_skin }
    }   
} 

#declare head_material = 
material {
    texture {
        pigment { 
        C_white
        } 
        finish { F_velvet_metal }
        normal { N_skin }
    }   
} 


#declare fly_red = 
material {
    texture {
        pigment { C_red_dark } 
        finish { F_skin }
        normal { N_brush_xz }
    }   
}  

#declare fly_black = 
material {
    texture {
        pigment { C_black } 
        finish  { F_velvet_metal }
        normal  { N_brush_xz scale 2}
    }   
}  


#declare fly_tan = 
material {
    texture {
        pigment { C_gold_bright } 
        finish  { F_skin }
        normal  { N_skin scale 2}
    }   
}   



#declare imgDiffuse = "body_diffuse.png" 
#declare imgBump = "body_bump.png"

#declare M_fly_body =
material {
    texture {
       pigment { 
            image_map {
                png imgDiffuse     
                map_type 2
                interpolate 4 
                } 
                //filter 1
      }
   
     finish { 
        F_metal_hard
        //F_soft
        //F_skin 
     }
     
    normal  {
        bump_map {
            png imgBump 
            map_type 2
            interpolate 4 
        } 
        bump_size 1 
    }
        
    }  
    rotate y*180
    scale 46   
}


#declare imgDiffuse = "back_plate_diffuse.png" 
#declare imgBump = "back_plate_bump.png"

#declare M_fly_back_plate =
material {
    texture {
       pigment { 
            image_map {
                png imgDiffuse     
                map_type 2
                interpolate 4 
                }
      }
   
     finish { 
        F_metal_hard
        //F_soft
        //F_skin 
     }
     
    normal  {
        bump_map {
            png imgBump 
            map_type 2
            interpolate 4 
        } 
        bump_size 1 
    }
        
    }
    rotate y*180 
    scale y*21.24 
    translate y-.5   
}




#declare imgDiffuse = "chest_diffuse.png" 
#declare imgBump = "chest_bump.png"

#declare M_fly_chest =
material {
    texture {
       pigment { 
            image_map {
                png imgDiffuse     
                map_type 0
                interpolate 4 
                }
      }
   
     finish { 
        F_metal_hard
        //F_soft
        //F_skin 
     }
     
    normal  {
        bump_map {
            png imgBump 
            map_type 0
            interpolate 4 
        } 
        bump_size 1 
    }
        
    }

    scale 40 
   
}




//------ spotted skin
#declare T_spotted_skin = 
#declare sz = 2;   
#declare turb = 0.32; 
#declare bump = 3;  
texture{
    pigment{ 
        leopard  
        turbulence turb
        color_map{ C_map_spotted_skin }
        scale sz
        } 
             
    normal { 
        pigment_pattern{ 
            leopard 
            turbulence turb
            color_map{ C_map_spotted_skin }
         }
         scale sz 
         bump_size bump 
    }   
        
    finish { 
        ambient .1
        diffuse .8 
        phong .2
        phong_size 50  
        }
} 

#declare T_spotted_skin_dark = 
#declare sz = 2;   
#declare turb = 0.32; 
#declare bump = 3;  
texture{
    pigment{ 
        leopard  
        turbulence turb
        color_map{ C_map_spotted_skin_dark }
        scale sz
        } 
             
    normal { 
        pigment_pattern{ 
            leopard 
            turbulence turb
            color_map{ C_map_spotted_skin_dark }
         }
         scale sz 
         bump_size bump 
    }   
        
    finish { 
        ambient .1
        diffuse .8 
        phong .2
        phong_size 50  
        }
} 

#declare T_spotted_rose = 
#declare sz = 2;   
#declare turb = 0.32; 
#declare bump = 3;  
texture{
    pigment{ 
        leopard  
        turbulence turb
        color_map{ C_map_spotted_rose }
        scale sz
        } 
             
    normal { 
        pigment_pattern{ 
            leopard 
            turbulence turb
            color_map{ C_map_spotted_rose }
         }
         scale sz 
         bump_size bump 
    }   
        
    finish { 
        ambient .1
        diffuse .8 
        phong .2
        phong_size 50  
        }
} 


//------ gloss bump skin
#declare T_bumpy_skin = 
#declare sz = 1;   
#declare turb = 0.1; 
#declare bump = 2;  
texture{
    pigment{ 
        Transparent
        } 
             
    normal { 
         bozo 
         turbulence turb
         scale sz 
         bump_size bump 
    }   
        
    finish { 
        ambient .2
        brilliance 4
        diffuse 1
        specular .5
        roughness 1/20
        phong 1
        phong_size 80 //fresnel 
        reflection {.01, .4 fresnel}
        }
}


#declare M_spotted_skin = material {
    texture{T_spotted_skin scale <.03,.05,.03>} 
    texture{T_bumpy_skin scale 1}  
    } 

#declare M_spotted_skin_dark = material {
    texture{T_spotted_skin_dark scale <.03,.05,.03>} 
    texture{T_bumpy_skin scale .1}  
    }

#declare M_spotted_rose = material {
    texture{T_spotted_rose scale <.03,.05,.03>} 
    texture{T_bumpy_skin scale .01}  
    }

#declare eye_material =
material {
    texture {
        pigment {
            gradient y
            color_map {CM_red_gold}
            translate y-.6
            }
            finish { 
                ambient 0
                brilliance 8
                diffuse 1
                metallic
                specular 10
                roughness 1/20
                phong 3
                phong_size 100 //fresnel 
                reflection {.04, .7 fresnel}
            } 
        normal {N_eye scale .003}    
    }
}


// -----------------------------------------------------------------------------------------
//                      S A M P L E    M A T E R I A L
//------------------------------------------------------------------------------------------  


#macro render_sample( mat, sz )
    
    camera {
        up <0, 1, 0>
        angle 65    
        location <0, 2, -5>
        look_at <0 , 0, 0> 
    } 

    light_source {
      <0,0,0>                
      color rgb <.14,.16,.14> * 7      
      spotlight               
      translate <-20, 20, -20> 
      point_at <0,0,0>   
      radius 3                
      tightness 2             
      falloff 14
      }

    light_source {
      <0,0,0>                
      color rgb <.14,.16,.14> * 3      
      spotlight               
      translate <20, -20, -10> 
      point_at <0,0,0>   
      radius 3                
      tightness 2             
      falloff 14
      }

    object { sphere { <0,0,0> 1 }   material {mat scale sz} hollow }
    
#end  




