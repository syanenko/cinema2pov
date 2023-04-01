// FLY
// convert x3d
// m.miller 03.22.2023

// -----------------------------------------------------------------------------------------
//                      H A I R
//------------------------------------------------------------------------------------------ 

#declare grow_hair = true;



#declare hair_A =
sphere_sweep {
     cubic_spline
     8,
     <0.000, 0.000, 0.000> , 0.119
     <0.000, 0.000, 0.000> , 0.119
     <0.155, 0.117, 0.000> , 0.089
     <1.184, 0.485, 0.000> , 0.061
     <2.243, 0.714, 0.000> , 0.056
     <3.479, 0.759, 0.000> , 0.048
     <4.617, 0.649, 0.000> , 0.031
     <4.617, 0.649, 0.000> , 0.031
     tolerance 0.000001
     }
     
     
#declare hair_B =
sphere_sweep {
     cubic_spline
     8,
     <0.000, 0.000, 0.000> , 0.119
     <0.000, 0.000, 0.000> , 0.119
     <0.155, -0.117, 0.000> , 0.089
     <1.184, -0.485, 0.000> , 0.061
     <2.243, -0.714, 0.000> , 0.056
     <3.479, -0.759, 0.000> , 0.048
     <4.617, -0.649, 0.000> , 0.031
     <4.617, -0.649, 0.000> , 0.031
     tolerance 0.000001
     }


#declare hair_C =
sphere_sweep {
     cubic_spline
     7,
     <0.000, 0.006, -0.002> , 0.070
     <0.000, 0.006, -0.002> , 0.070
     <0.072, -0.452, -0.386> , 0.066
     <0.050, -1.164, -0.981> , 0.040
     <-0.031, -1.941, -1.632> , 0.030
     <-0.044, -2.879, -2.416> , 0.010
     <-0.044, -2.879, -2.416> , 0.010
     tolerance 0.000001
     }
     
     
// -----------------------------------------------------------------------------------------
//                     H E A D
//------------------------------------------------------------------------------------------ 


#declare head =
#declare th = 0.48 ;
#declare sf = 2.0 ;
#declare nStrenth = -2.5 ;
#declare nSize = 1 ;
blob {
     threshold th
     sphere{ <0,0,0>, 1, 1 scale <3.192, 4.490, 4.171> * sf  translate <17.634, 22.723, -3.440> }
     sphere{ <0,0,0>, 1, 1 scale <3.192, 3.586, 4.171> * sf  translate <17.919, 18.219, 3.200> }
     sphere{ <0,0,0>, 1, 1 scale <2.095, 2.702, 2.510> * sf  translate <14.114, 17.170, -2.500> }
     sphere{ <0,0,0>, 1, 1 scale <2.095, 2.702, 2.510> * sf  translate <14.114, 17.170, 2.500> }
     sphere{ <0,0,0>, 1, 1 scale <2.761, 3.692, 3.703> * sf  translate <15.880, 20.640, 2.000> }
     sphere{ <0,0,0>, 1, 1 scale <2.761, 3.692, 3.703> * sf  translate <15.880, 20.640, -2.000> }
     sphere{ <0,0,0>, 1, 1 scale <1.817, 1.938, 1.801> * sf  translate <13.553, 14.540, 1.000> }
     sphere{ <0,0,0>, 1, 1 scale <1.817, 1.938, 1.801> * sf  translate <13.553, 14.540, -1.000> }
     sphere{ <0,0,0>, 1, 1 scale <2.729, 3.840, 3.567> * sf  translate <15.433, 22.279, 0.000> }
     sphere{ <0,0,0>, 1, 1 scale <3.192, 3.586, 4.171> * sf  translate <17.919, 18.219, -2.976> }
     // sphere{ <0,0,0>, 1, 1 scale <1.000, 1.000, 1.000> * sf  translate <0.000, 0.000, 0.000> }
     sphere{ <0,0,0>, 1, 1 scale <3.192, 4.490, 4.171> * sf  translate <17.634, 22.723, 3.440> }
     sphere{ <0,0,0>, 1, 1 scale <1.860, 2.616, 1.594> * sf  translate <13.506, 23.877, 0.000> }
     sphere{ <0,0,0>, 1, 1 scale <2.777, 3.907, 3.629> * sf  translate <13.506, 20.436, 0.000> }
     sphere{ <0,0,0>, 1, 1 scale <2.202, 2.616, 0.876> * sf  translate <15.755, 25.542, 0.000> }
     sphere{ <0,0,0>, 1, 1 scale <1.817, 1.938, 2.431> * sf  translate <12.213, 14.234, -1.349> }
     sphere{ <0,0,0>, 1, 1 scale <1.817, 1.938, 2.431> * sf  translate <12.213, 14.234, 1.349> }
     sphere{ <0,0,0>, 1, nStrenth scale <8.076, 8.076, 3.529> * nSize  translate <8.612, 16.929, 0.000> }
     sphere{ <0,0,0>, 1, nStrenth scale <5.617, 5.617, 3.688> * nSize  translate <12.203, 10.505, 0.000> }
     sphere{ <0,0,0>, 1, nStrenth scale <8.076, 8.076, 1.300> * nSize  translate <7.935, 18.244, 0.000> }
     }


#declare eye_lid =
#declare sf = 2.3 ;
sphere_sweep {
     cubic_spline
     17,
     <18.448, 27.506, 3.552> , 0.547 * sf
     <18.448, 27.506, 3.552> , 0.547 * sf
     <18.232, 27.506, 1.653> , 0.547 * sf
     <17.125, 27.919, 0.962> , 0.547 * sf
     <15.340, 27.879, 0.950> , 0.547 * sf
     <13.519, 26.776, 1.483> , 0.547 * sf
     <11.995, 23.787, 2.762> , 0.547 * sf
     <11.875, 20.023, 4.106> , 0.547 * sf
     <13.237, 17.260, 5.500> , 0.547 * sf
     <15.633, 15.692, 5.778> , 0.547 * sf
     <16.525, 16.605, 7.173> , 0.547 * sf
     <17.806, 19.063, 8.342> , 0.547 * sf
     <18.820, 22.238, 8.081> , 0.547 * sf
     <18.752, 24.746, 7.373> , 0.547 * sf
     <18.489, 26.691, 5.793> , 0.547 * sf
     <18.448, 27.506, 3.552> , 0.547 * sf
     <18.448, 27.506, 3.552> , 0.547 * sf 
     translate <.3,-.29,-.9>
     }


#declare antenna =
sphere_sweep {
     cubic_spline
     9,
     <8.475, 20.455, 2.028> , 0.605
     <8.475, 20.455, 2.028> , 0.605
     <9.524, 21.183, 1.823> , 0.745
     <10.488, 21.920, 1.587> , 0.559
     <11.118, 22.259, 1.359> , 0.269
     <11.654, 22.795, 1.122> , 0.461
     <12.449, 23.062, 0.776> , 0.287
     <13.135, 23.102, 0.201> , 0.287
     <13.135, 23.102, 0.201> , 0.287 
     scale <1,1,.5>  
     translate <1,1,0>
     }
     
#declare nose_part =
sphere_sweep {
     cubic_spline
     11, 
     <12.237, 23, 0> , 0.982
     <12.237, 23, 0> , 0.982
     <12.237, 22.772, 0> , 0.982
     <12.311, 21.655, 0> , 0.959
     <12.304, 20.605, 0> , 0.989
     <12.268, 19.480, 0> , 0.979
     <12.143, 18.026, 0> , 0.989
     <11.837, 16.662, 0> , 0.979
     <11.837, 16.9,   0> , 0.989  
     <11.837, 14.5,   0> ,   1.0 
     <11.837, 14.5,   0> ,   1.0
     translate <.5,-.7,0>
     }

#declare nose_bridge =
sphere_sweep {
     cubic_spline
     13,
     <12.338, 12.850, 0.000> , 0.990
     <12.338, 12.850, 0.000> , 0.990
     <11.303, 13.461, 0.000> , 0.639
     <10.339, 13.626, 0.000> , 0.497
     <9.586, 13.532, 0.000> , 0.497
     <10.151, 14.284, 0.000> , 0.497
     <11.115, 15.977, 0.000> , 0.497
     <11.515, 17.859, 0.000> , 0.497
     <11.773, 19.646, 0.000> , 0.497
     <11.797, 21.574, 0.000> , 0.497
     <11.820, 22.938, 0.000> , 0.422
     <12.973, 23.691, 0.000> , 0.422
     <12.973, 23.691, 0.000> , 0.422
     tolerance 0.000001  
     scale <1,1,.6>
     }

    
      
#declare nose =
union {
    object { nose_part   }
    union {
        object { nose_bridge translate <.5,.4,.25>}
        object { nose_bridge translate <.9,.4, .65>} 
        object { nose_bridge translate <.5,.4,-.25>}  
        object { nose_bridge translate <.9,.4,-.65>}  
        scale <1,1,.8>
    }
    material {M_spotted_skin_dark scale 5}
}
 

#declare eye_lids = 
union{
    object { eye_lid }  
    object { eye_lid scale <1,1,-1> }  
    }

#declare tounge =
#declare th = 0.5 ;
#declare sf = 2.0 ;
#declare nStrenth = -5 ;
#declare nSize = 1 ;
blob {
     threshold th
     sphere{ <0,0,0>, 1, 1 scale <1.000, 1.000, 1.000> * sf  translate <12.386, 12.074, 0.241> }
     sphere{ <0,0,0>, 1, 1 scale <0.571, 0.571, 0.571> * sf  translate <13.459, 11.834, 0.136> }
     sphere{ <0,0,0>, 1, 1 scale <0.429, 0.429, 0.429> * sf  translate <14.440, 11.905, 0.066> }
     sphere{ <0,0,0>, 1, 1 scale <0.752, 0.752, 0.752> * sf  translate <11.928, 12.599, 0.324> }
     sphere{ <0,0,0>, 1, 1 scale <0.571, 0.571, 0.571> * sf  translate <13.065, 11.903, 0.173> }
     sphere{ <0,0,0>, 1, 1 scale <0.429, 0.429, 0.429> * sf  translate <14.000, 11.842, 0.095> }
     sphere{ <0,0,0>, 1, 1 scale <0.272, 0.272, 0.272> * sf  translate <9.918, 13.493, 0.560> }
     sphere{ <0,0,0>, 1, 1 scale <0.343, 0.343, 0.343> * sf  translate <10.420, 13.286, 0.503> }
     sphere{ <0,0,0>, 1, 1 scale <0.482, 0.482, 0.482> * sf  translate <10.749, 13.265, 0.475> }
     sphere{ <0,0,0>, 1, 1 scale <0.272, 0.272, 0.272> * sf  translate <10.110, 13.365, 0.560> } 
     scale <1,1,1.2>
     translate <0,.5,0>
     } 

    
#declare eyes =
#declare sf = 1 ;
union { 
     sphere{ <0,0,0>, 1.05 scale <4.244, 6.966, 6.000> * sf  translate <16.01, 21.9, -3.300> }
     sphere{ <0,0,0>, 1.05 scale <4.244, 6.966, 6.000> * sf  translate <16.01, 21.9, 3.300> }
     }
  
  

#declare head_parts = 
union{
    union {
        object { head }   
        object { eye_lids }  
        material { M_spotted_skin scale <1,1,1>} 
    }
}


#declare fly_head = 
difference {
    object { head_parts }
    object { eyes }
    object { nose } 
    rotate <0,-90,0> 
} 
 

//--- fly_large_leg_hair 
#declare plant_object = object{ hair_A rotate y+90 material {M_black_hair}} ;  
#declare plant_size = .49;
#declare random_size = 0 ; 
#declare field_size = <100,100,1>;
#declare plant_topo =  fly_head ;
#declare plant_count = 200 ;     
#declare start_depth = -100 ; 
#declare plant_randomY = false; 
#declare plant_offset = 0;
#declare plant_minY = 2 ;             
#declare plant_maxSlope = .001 ;         
#declare plant_seed=seed(333) ;
#declare rotate_to_normal = true; 

#if (grow_hair = true)
    #declare head_hair_A  = object { populate_front() }
#end
      
      
//--- fly_large_leg_hair 
#declare plant_object = 
    object{ 
        hair_B  
        scale <1,-1,1>
        rotate x+90
        material {M_black_hair}
        }   
#declare plant_size = .29;
#declare random_size = 0 ; 
#declare field_size = <100,100,1>;
#declare plant_topo =  fly_head ;
#declare plant_count = 200 ;     
#declare start_depth = -100 ; 
#declare plant_randomY = false; 
#declare plant_offset = 0;
#declare plant_minY = 0 ;             
#declare plant_maxSlope = .001 ;         
#declare plant_seed=seed(666) ;
#declare rotate_to_normal = true; 

#if (grow_hair = true)
    #declare head_hair_B  = object { populate_front() }
#end

//--- fly_large_leg_hair 
#declare plant_object = 
    object{ 
        hair_B  
        scale <1,1,1>
        rotate x+120
        material {M_black_hair}
        }   
#declare plant_size = .29;
#declare random_size = 0 ; 
#declare field_size = <100,100,1>;
#declare plant_topo =  fly_head ;
#declare plant_count = 200 ;     
#declare start_height = -100 ; 
#declare plant_randomY = false; 
#declare plant_offset = 0;
#declare plant_minY = 0 ;             
#declare plant_maxSlope = .001 ;         
#declare plant_seed=seed(666) ;
#declare rotate_to_normal = true; 

#if (grow_hair = true)
    #declare head_hair_C  = object { populate_up() }
#end




#declare head_with_hair = 
union{
    union {
        union {
            object { 
                fly_head 
                }
            #if (grow_hair = true)  
                object { head_hair_A }
                object { head_hair_B } 
                object { head_hair_C } 
            #end
            rotate <0,90,0>
        }
        union {
            object { nose scale<1,1,3> translate <-.5,1,0>}
            union {
                object { antenna scale <1,1,.8> translate <-2,1,0>}   
                object { antenna scale <1,1,-.8> translate <-2,1,0>}
                material { M_spotted_rose scale <9,9,9>} 
            }   
            object { tounge }
            material { M_spotted_rose scale <7,7,7>}
        } 
        object { eyes material { eye_material scale 13 translate <0,-3,0>} }
    } 
    translate <0,-3,0>
}




#declare body =  
lathe{ 
      cubic_spline
      43,
     <0.001, 0.100> 
     <0.001, 0.000>, 
     <1.600, 0.646>,
     <2.882, 1.663>,
     <3.900, 2.900>,
     <4.420, 3.894>,
     <4.459, 3.986>,
     <4.925, 4.052>,
     <5.457, 4.399>,
     <6.877, 6.457>,
     <7.857, 9.021>,
     <8.364, 11.030>,
     <8.348, 11.148>,
     <8.647, 11.290>,
     <8.995, 11.841>,
     <9.199, 13.837>,
     <9.166, 16.107>,
     <8.905, 18.099>,
     <8.859, 18.235>,
     <9.143, 18.451>,
     <9.347, 18.995>, 
     <9.254, 20.554>,
     <8.674, 22.678>,
     <7.695, 25.853>,
     <7.675, 27.244>,
     <8.165, 30.007>,
     <7.838, 31.787>,
     <7.038, 32.735>,
     <6.499, 34.809>,
     <5.862, 36.229>, 
     <5.921, 36.445>,
     <6.587, 37.386>,
     <6.646, 38.953>,
     <6.235, 40.521>,
     <5.353, 41.619>,
     <4.106, 42.324>,
     <4.025, 42.618>,
     <4.384, 43.157>,
     <4.286, 44.153>, 
     <3.208, 45.166>,
     <1.787, 45.721>,
     <0.000, 45.982>, 
     <0.000, 45.982>
      material {M_fly_body} 
      }
     
   
 
#declare back_plate =
lathe{ 
      cubic_spline
      23,
     <0.000, 21.768>,
     <0.000, 21.768>,
     <2.090, 22.290>,
     <3.625, 23.483>,
     <4.703, 25.230>,
     <4.850, 26.275>,
     <4.703, 26.618>,
     <4.741, 26.854>,
     <5.289, 27.885>,
     <6.014, 29.785>,
     <6.484, 32.235>,
     <6.621, 34.508>,
     <6.249, 36.057>,
     <5.857, 36.684>,
     <5.914, 36.854>,
     <6.311, 37.421>,
     <6.360, 38.580>,
     <5.935, 40.197>,
     <4.596, 41.667>,
     <2.751, 42.565>,
     <1.068, 42.941>,
     <0.040, 43.006>,
     <0.040, 43.006>
     material {M_fly_back_plate}
     }



#declare Chest =
#declare th = 0.9 ;
#declare sf = 2.5 ;
#declare nStrenth = -5 ;
#declare nSize = 1 ;
blob {
     threshold th
     sphere{ <0,0,0>, 1, 1 scale <1.232, 1.232, 1.232> * sf  translate <27.918, 22.003, 7.621> }
     sphere{ <0,0,0>, 1, 1 scale <0.891, 0.891, 0.891> * sf  translate <26.460, 21.227, 7.189> }
     sphere{ <0,0,0>, 1, 1 scale <0.891, 0.891, 0.891> * sf  translate <29.329, 21.227, 7.621> }
     sphere{ <0,0,0>, 1, 1 scale <1.232, 1.232, 1.232> * sf  translate <27.918, 21.509, 7.621> }
     sphere{ <0,0,0>, 1, 1 scale <1.841, 1.841, 1.841> * sf  translate <28.343, 17.528, 7.601> }
     sphere{ <0,0,0>, 1, 1 scale <1.153, 1.153, 1.153> * sf  translate <30.472, 18.712, 8.228> }
     sphere{ <0,0,0>, 1, 1 scale <1.232, 1.232, 1.232> * sf  translate <28.604, 15.630, 7.601> }
     sphere{ <0,0,0>, 1, 1 scale <1.232, 1.232, 1.232> * sf  translate <29.535, 15.679, 7.601> }
     sphere{ <0,0,0>, 1, 1 scale <1.232, 1.232, 1.232> * sf  translate <30.711, 17.231, 8.463> }
     sphere{ <0,0,0>, 1, 1 scale <1.232, 1.232, 1.232> * sf  translate <27.281, 16.577, 8.228> }
     sphere{ <0,0,0>, 1, 1 scale <1.272, 1.272, 1.272> * sf  translate <26.150, 18.369, 8.130> }
     sphere{ <0,0,0>, 1, 1 scale <1.232, 1.232, 1.232> * sf  translate <22.999, 22.003, 6.895> }
     sphere{ <0,0,0>, 1, 1 scale <1.232, 1.232, 1.232> * sf  translate <22.999, 21.509, 6.895> }
     sphere{ <0,0,0>, 1, 1 scale <0.891, 0.891, 0.891> * sf  translate <24.410, 21.227, 6.680> }
     sphere{ <0,0,0>, 1, 1 scale <1.107, 1.107, 1.107> * sf  translate <21.541, 21.227, 6.210> }
     sphere{ <0,0,0>, 1, 1 scale <1.232, 1.232, 1.232> * sf  translate <25.525, 17.348, 7.162> }
     sphere{ <0,0,0>, 1, 1 scale <1.232, 1.232, 1.232> * sf  translate <24.542, 15.797, 6.086> }
     sphere{ <0,0,0>, 1, 1 scale <1.232, 1.232, 1.232> * sf  translate <23.629, 15.748, 5.903> }
     sphere{ <0,0,0>, 1, 1 scale <1.272, 1.272, 1.272> * sf  translate <21.119, 18.487, 5.940> }
     sphere{ <0,0,0>, 1, 1 scale <1.232, 1.232, 1.232> * sf  translate <22.209, 16.695, 6.258> }
     sphere{ <0,0,0>, 1, 1 scale <1.841, 1.841, 1.841> * sf  translate <23.236, 17.646, 6.342> }
     sphere{ <0,0,0>, 1, 1 scale <1.841, 1.841, 1.841> * sf  translate <32.093, 14.627, 6.165> }
     sphere{ <0,0,0>, 1, 1 scale <1.232, 1.232, 1.232> * sf  translate <30.929, 13.675, 6.258> }
     sphere{ <0,0,0>, 1, 1 scale <1.272, 1.272, 1.272> * sf  translate <29.839, 15.467, 5.940> }
     sphere{ <0,0,0>, 1, 1 scale <1.232, 1.232, 1.232> * sf  translate <32.329, 12.728, 5.766> }
     sphere{ <0,0,0>, 1, 1 scale <1.232, 1.232, 1.232> * sf  translate <33.360, 12.777, 5.753> }
     sphere{ <0,0,0>, 1, 1 scale <1.232, 1.232, 1.232> * sf  translate <34.383, 14.329, 5.967> }
     sphere{ <0,0,0>, 1, 1 scale <0.891, 0.891, 0.891> * sf  translate <31.197, 20.239, 8.636> }
     sphere{ <0,0,0>, 1, 1 scale <1.422, 1.422, 1.422> * sf  translate <33.483, 20.409, 8.636> }
     sphere{ <0,0,0>, 1, 1 scale <0.855, 0.855, 0.855> * sf  translate <35.148, 20.268, 8.636> }
     sphere{ <0,0,0>, 1, 1 scale <3.232, 3.232, 3.232> * sf  translate <26.978, 14.005, 3.578> }
     sphere{ <0,0,0>, 1, 1 scale <3.232, 3.232, 3.232> * sf  translate <31.895, 11.932, 3.578> }
     sphere{ <0,0,0>, 1, 1 scale <3.232, 3.232, 3.232> * sf  translate <36.650, 12.826, 3.578> }
     sphere{ <0,0,0>, 1, 1 scale <3.232, 3.232, 3.232> * sf  translate <23.402, 15.468, 3.578> }
     sphere{ <0,0,0>, 1, 1 scale <0.616, 0.616, 0.616> * sf  translate <35.368, 20.268, 10.088> } 
     material {M_fly_chest}
     }


       
    

#declare fly_body = 
union{ 
    object { body  scale<.9,1,1.2> rotate z*81 translate <64,13,0> }
    object { back_plate scale<.7,1,1.2> rotate z*92 translate <64,24,0> }
    
    union {
        object { Chest } 
        object { Chest scale z*-1} 
        translate <0,2,0>
    }
} 




//--- fly_large_back_hair 
#declare plant_object = object{ hair_A rotate x+10 material {M_black_hair}} ;  
#declare plant_size = 1;
#declare random_size = .1 ; 
#declare field_size = <200,1,100>;
#declare plant_topo =  fly_body ;
#declare plant_count = 100 ;     
#declare start_height = 100 ; 
#declare plant_randomY = false; 
#declare plant_offset = 0;
#declare plant_minY = 0 ;             
#declare plant_maxSlope = .01 ;         
#declare plant_seed=seed(111) ;
#declare rotate_to_normal = true; 

#if (grow_hair = true)
    #declare fly_large_back_hair = object { populate_down() }
#end

//--- fly_large_belly_hair 
#declare plant_object = object{ hair_B scale <1,1,1> material {M_black_hair}} ;  
#declare plant_size = 1;
#declare random_size = .1 ; 
#declare field_size = <200,1,100>;
#declare plant_topo =  fly_body ;
#declare plant_count = 100 ;     
#declare start_height = 0 ; 
#declare plant_randomY = false; 
#declare plant_offset = 0;
#declare plant_minY = 10 ;             
#declare plant_maxSlope = .01 ;         
#declare plant_seed=seed(222) ;
#declare rotate_to_normal = true; 


#if (grow_hair = true)
    #declare fly_large_belly_hair = object { populate_up() }
#end



// -----------------------------------------------------------------------------------------
//                      W I N G S
//------------------------------------------------------------------------------------------ 

#declare imgDiffuse = "wing_diffuse.png" 
#declare imgBump = "wing_bump.png"

#declare M_fly_wing =
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
        bump_size 2 
    }
        
    }  

    scale <20.2,42,1>   
}



#declare wing_extrude = 
lathe{ 
      cubic_spline
      30,
     <29.480, 0.000>,
     <29.480, 0.000>,
     <27.956, 2.858>,
     <26.602, 6.515>,
     <24.976, 11.053>,
     <23.622, 15.760>,
     <22.098, 21.246>,
     <20.777, 26.360>,
     <20.134, 30.288>,
     <20.371, 34.351>,
     <21.522, 37.941>,
     <23.520, 40.379>,
     <25.044, 40.582>,
     <26.873, 39.499>,
     <28.938, 37.061>,
     <29.954, 35.401>,
     <31.918, 33.166>,
     <33.612, 30.457>,
     <34.357, 28.357>,
     <36.238, 25.242>,
     <37.512, 21.694>,
     <38.335, 17.618>,
     <38.433, 14.561>,
     <37.747, 11.739>,
     <36.552, 9.936>,
     <34.122, 8.466>,
     <32.417, 5.840>,
     <31.143, 2.626>,
     <30.496, 0.294>,
     <30.496, 0.294> 
     translate <-19.6,-1.045,0>
      }
      
            
#declare wing_skin =
difference {
    object { wing_extrude }
    object {paper_Cut_Z_Curved }
}



#declare wing_spine =
sphere_sweep {
     cubic_spline
     19,
     <10.720, -1.045, -0.000> , 0.497
     <10.720, -1.045, -0.000> , 0.497
     <9.387, 0.169, 0.000> , 0.636
     <9.132, 0.698, 0.000> , 0.442
     <8.760, 1.345, -0.034> , 0.643
     <7.623, 3.265, -0.090> , 0.444
     <7.447, 3.873, -0.090> , 0.284
     <6.741, 5.832, -0.204> , 0.284
     <6.134, 7.890, -0.340> , 0.284
     <5.076, 10.614, -0.601> , 0.245
     <3.802, 14.416, -1.077> , 0.245
     <3.429, 16.219, -1.338> , 0.245
     <2.312, 20.138, -2.075> , 0.204
     <1.744, 22.471, -2.563> , 0.204
     <0.823, 26.037, -3.470> , 0.204
     <0.313, 28.781, -4.264> , 0.154
     <0.059, 31.838, -5.216> , 0.100
     <0.341, 34.462, -6.135> , 0.050
     <0.341, 34.462, -6.135> , 0.010
     tolerance 0.000001
     scale<1,1,-1>
     }

     
#declare wing_spine_2 =
sphere_sweep {
     cubic_spline
     16,
     <1.933, 22.101, -2.495> , 0.154
     <1.933, 22.101, -2.495> , 0.154
     <3.302, 20.208, -2.075> , 0.132
     <4.386, 17.852, -1.633> , 0.155
     <5.444, 14.776, -1.122> , 0.190
     <6.034, 13.001, -0.872> , 0.154
     <7.049, 9.838, -0.498> , 0.191
     <7.849, 7.972, -0.341> , 0.215
     <8.089, 6.526, -0.223> , 0.281
     <8.767, 4.063, -0.111> , 0.284
     <9.297, 2.626, -0.054> , 0.444
     <9.713, 1.345, -0.032> , 0.643
     <9.935, 0.548, 0.000> , 0.442
     <10.285, -0.225, -0.000> , 0.636
     <10.720, -1.045, -0.000> , 0.497
     <10.720, -1.045, -0.000> , 0.497
     tolerance 0.000001  
     scale<1,1,-1>
     }

         
#declare wing =
union {
    object {wing_skin}
    object {wing_spine}
    object {wing_spine_2} 
    scale <1,1,-1>
    translate <0,1.045,0> 
    material {M_fly_wing}
    rotate <-90,-90,0>
    rotate <-30,0,10> 
    translate <30,19,-18>
} 




#declare wings =
union {
    object { wing }
    object { wing scale <1,1,-1>}
}    





// -----------------------------------------------------------------------------------------
//                      L E G S
//------------------------------------------------------------------------------------------ 

#declare leg_A =
sphere_sweep {
     cubic_spline
     32,
     <0.000, 0.000, 0.000> , 1.000
     <0.000, 0.000, 0.000> , 1.000
     <-0.750, -0.779, 1.184> , 1.000
     <-1.416, -1.276, 2.066> , 0.676
     <-2.043, -1.533, 2.869> , 0.676
     <-2.788, -0.671, 3.614> , 0.914
     <-4.336, 1.386, 3.614> , 0.713
     <-5.433, 3.071, 3.614> , 0.616
     <-6.577, 4.544, 3.614> , 0.775
     <-7.197, 4.283, 3.614> , 0.508
     <-7.922, 4.306, 3.614> , 0.635
     <-8.569, 3.581, 3.614> , 0.495
     <-10.117, 1.680, 3.614> , 0.495
     <-11.744, -0.691, 3.614> , 0.495
     <-13.076, -2.670, 3.614> , 0.702
     <-13.370, -3.317, 3.614> , 0.478
     <-14.017, -3.865, 3.614> , 0.511
     <-15.604, -4.375, 3.614> , 0.314
     <-16.702, -4.786, 3.614> , 0.314
     <-17.211, -5.002, 3.614> , 0.445
     <-17.564, -5.178, 3.614> , 0.244
     <-18.720, -5.433, 3.614> , 0.415
     <-19.210, -5.492, 3.614> , 0.232
     <-19.994, -5.414, 3.614> , 0.374
     <-20.445, -5.453, 3.614> , 0.213
     <-20.915, -5.414, 3.614> , 0.368
     <-21.386, -5.374, 3.614> , 0.217
     <-22.111, -5.296, 3.614> , 0.405
     <-22.463, -5.374, 3.614> , 0.165
     <-22.855, -5.316, 3.614> , 0.106
     <-23.228, -5.629, 3.614> , 0.083
     <-23.228, -5.629, 3.614> , 0.083
     tolerance 0.000001
     rotate <0,0,10.5> 
     translate <27.34,11.76,4.6>
     }



#declare leg_B =
sphere_sweep {
     cubic_spline
     32,
     <0.000, 0.002, 0.007> , 1.000
     <0.000, 0.002, 0.007> , 1.000
     <0.411, -0.777, 2.238> , 1.000
     <0.612, -1.273, 3.325> , 0.676
     <0.781, -1.531, 4.330> , 0.676
     <0.828, -0.669, 5.382> , 0.914
     <-0.019, 1.459, 6.237> , 0.713
     <-1.098, 3.262, 7.004> , 0.616
     <-1.786, 4.547, 7.472> , 0.775
     <-2.401, 4.286, 7.534> , 0.508
     <-3.285, 4.543, 7.731> , 0.635
     <-4.157, 3.489, 7.922> , 0.495
     <-5.379, 1.502, 8.423> , 0.495
     <-6.932, -0.849, 8.999> , 0.495
     <-8.183, -2.668, 9.552> , 0.702
     <-8.381, -3.314, 9.769> , 0.478
     <-8.818, -3.863, 10.246> , 0.511
     <-9.889, -4.373, 11.417> , 0.314
     <-11.680, -4.784, 14.055> , 0.314
     <-12.024, -5.000, 14.431> , 0.445
     <-12.262, -5.176, 14.691> , 0.244
     <-13.043, -5.431, 15.544> , 0.415
     <-13.373, -5.490, 15.906> , 0.232
     <-13.903, -5.411, 16.484> , 0.374
     <-14.207, -5.450, 16.817> , 0.213
     <-14.524, -5.411, 17.164> , 0.368
     <-14.842, -5.372, 17.511> , 0.217
     <-15.331, -5.294, 18.045> , 0.405
     <-15.570, -5.372, 18.306> , 0.165
     <-15.834, -5.313, 18.595> , 0.106
     <-16.086, -5.627, 18.870> , 0.083
     <-16.086, -5.627, 18.870> , 0.0
     tolerance 0.000001
     rotate <0,0,12> 
     translate <38,10.9,5>
     }


#declare leg_C =
sphere_sweep {
     cubic_spline
     32,
     <0.000, 0.000, 0.000> , 1.000
     <0.000, 0.000, 0.000> , 1.000
     <1.239, -0.779, -0.255> , 1.000
     <2.323, -1.275, -0.475> , 0.676
     <3.814, -1.533, -0.681> , 0.676
     <4.862, -1.122, -0.668> , 0.914
     <5.085, 1.005, 0.027> , 0.713
     <5.322, 2.808, 0.916> , 0.616
     <5.664, 4.937, 1.905> , 0.775
     <6.137, 4.609, 2.289> , 0.508
     <7.046, 3.759, 2.921> , 0.635
     <7.874, 2.875, 3.697> , 0.495
     <9.392, 0.903, 5.051> , 0.666
     <10.953, -1.424, 6.773> , 0.656
     <12.828, -3.654, 8.210> , 0.702
     <13.097, -4.154, 8.405> , 0.478
     <13.596, -4.637, 8.833> , 0.511
     <14.082, -4.831, 9.323> , 0.314
     <16.657, -5.542, 11.572> , 0.314
     <17.051, -5.594, 11.921> , 0.445
     <17.270, -5.770, 12.200> , 0.244
     <18.136, -6.025, 12.965> , 0.415
     <18.503, -6.084, 13.290> , 0.232
     <19.091, -6.006, 13.809> , 0.374
     <19.428, -6.045, 14.107> , 0.213
     <19.781, -6.006, 14.419> , 0.368
     <20.133, -5.966, 14.730> , 0.217
     <20.677, -5.888, 15.210> , 0.405
     <20.941, -5.966, 15.444> , 0.165
     <21.235, -5.908, 15.703> , 0.106
     <21.514, -6.221, 15.950> , 0.083
     <21.514, -6.221, 15.950> , 0.083
     tolerance 0.000001
     rotate <10,-30,0> 
     translate <41,10.5,7>
     }
     
     
#declare leg_parts =
union{
    object { leg_A }
    object { leg_B }
    object { leg_C }
}



//--- fly_large_leg_hair 
#declare plant_object = object{ hair_C rotate x-1 material {M_black_hair}} ;  
#declare plant_size = 1;
#declare random_size = 0 ; 
#declare field_size = <100,50,1>;
#declare plant_topo =  leg_parts ;
#declare plant_count = 50 ;     
#declare start_depth = -100 ; 
#declare plant_randomY = false; 
#declare plant_offset = 0;
#declare plant_minY = 4 ;             
#declare plant_maxSlope = .01 ;         
#declare plant_seed=seed(111) ;
#declare rotate_to_normal = true; 

#if (grow_hair = true)
    #declare leg_hair_A  = object { populate_front() }
#end  


//--- fly_large_leg_hair 
#declare plant_object = object{ hair_C rotate x-1 material {M_black_hair}} ;  
#declare plant_size = 1;
#declare random_size = 0 ; 
#declare field_size = <100,50,1>;
#declare plant_topo =  leg_parts ;
#declare plant_count = 50 ;     
#declare start_depth = 100 ; 
#declare plant_randomY = false; 
#declare plant_offset = 0;
#declare plant_minY = 4 ;             
#declare plant_maxSlope = .01 ;         
#declare plant_seed=seed(111) ;
#declare rotate_to_normal = true; 

#if (grow_hair = true)
    #declare leg_hair_B = object { populate_back() }
#end

#declare legs =
union{
    object { leg_parts } 
    #if (grow_hair = true)
        object { leg_hair_A  }
        object { leg_hair_B }
    #end
    material {fly_black}
}


// -----------------------------------------------------------------------------------------
//                      F L Y
//------------------------------------------------------------------------------------------ 


#declare fly = 
union {
    object { fly_body }   
    object { head_with_hair }
    object { wings }
    #if (grow_hair = true)
        object { fly_large_back_hair } 
        object { fly_large_belly_hair }
    #end 
    object { legs }
    object { legs scale <1,1,-1>}
    translate <-50,-2,0>                   
    }

  
