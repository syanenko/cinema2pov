// m.miller 03.31

// -----------------------------------------------------------------------------------------
//                      S I N K   W I T H   D R A I N
//------------------------------------------------------------------------------------------



#declare F_metal_polished  =
finish {
    reflection {0, 1 fresnel on }
    conserve_energy 
    brilliance 5
    ambient 0
    diffuse .5 
    phong 5    
    phong_size 40
    metallic
    specular .4
    roughness 1/20
    reflection .5   
}

#declare F_plastic_gloss =    
    finish {
    reflection {.3, .8 fresnel on } 
    conserve_energy 
    brilliance 6
    ambient 1
    diffuse 1 
    phong 5    
    phong_size 20
    specular .3 
    roughness .2
    reflection .2 
    } 
    
#declare M_metal_chrome = 
material{ 
    texture{ 
        pigment{ color red 0.8 green 0.8 blue 0.8 }   
        finish{ F_metal_polished }
     } 
}


#declare M_black_gloss = 
material{ 
    texture{ pigment { color rgb<0,0,0> }   
        finish{ F_plastic_gloss }
    } 
}


#declare imgDiffuse = "sink_diffuse.png" 
#declare imgBump = "sink_bump.png"

#declare M_sink =
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
     }
     
    normal  {
        bump_map {
            png imgBump 
            map_type 0
            interpolate 4 
        } 
        bump_size 5 
    }
        
    }  
    scale 900  
    rotate x*90
    translate <-450,0,-450>
}



#declare sink_cut =
object{ 
    Round_Box(
        <-400,0,-400>,
        < 400,500, 400>, 
        150,
        0) 
}


#declare drain_hole =
cylinder { 
    <0,-110,0>,
    <0,100,0>, 
     90 
} 




#declare sink_mass =
object {
    box { 
        <-450, -100, -450>,
        < 450, 400, 450>   
    } 
}



#declare sink = 
union {
    union {
        difference { 
            object {sink_mass}
            object {sink_cut}   
            object {drain_hole}
            no_shadow
        }
        
        torus { 
            90,
            5
            translate <0,-5,0> 
          }  
          material {M_sink} 
       }            
    
    object{ 
        Rounded_Tube_AB( 
            <0,-100,0>,   
            <0,-3,0>, 
            86,        
            60,        
            3,         
            1,         
        )
        material {M_metal_chrome } 
      } 
  
}


#declare plug = 
union {
    union {
        sphere{ 
            <0,0,0> 
            60 
            scale <1,.15,1>
            } 
            
        cylinder { 
            <0,-5,0>,
            <0,0,0>, 
             60 
        }  
        material {M_metal_chrome}
    }   
    
    union {
        torus { 
            58,
            2
            translate <0,-6,0>
        }  
        
        Round_Box(
            <-30,0,-2>,
            < 30,-100, 2>, 
            2,
            0
        )
        
        Round_Box(
            <-2,0,-30>,
            < 2,-100, 30>, 
            2,
            0
        ) 
    material {M_black_gloss}
    }    
          

}

#declare sink_and_plug =
union {
    object {sink} 
    object {plug translate <0,20,0>}
    //no_shadow 
}    




#declare T_water =
texture {
    pigment{ rgbf <0.0, 0.0, 0,1, 0.9> }
    finish {
        reflection {0.3, 1 fresnel}
        conserve_energy
    }
}
#declare I_water =
interior {
    ior 1.33
}

#declare M_water =
material {
    texture {T_water}
    interior {I_water}
}


