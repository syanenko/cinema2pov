CONTAINER POVSpline
{
	NAME POVSpline;
	INCLUDE Texpression;
	
	GROUP ID_TAGPROPERTIES
	{
		LONG POV_SPLINE_EXPORT_AS { CYCLE
																 {
																		POV_SPLINE_AS_SPLINE;
																		POV_SPLINE_AS_ARRAY;
																		POV_SPLINE_BOTH;
																 }; ANIM OFF; }

		LONG POV_SPLINE_SPLINE_TYPE { CYCLE
																 {
																		POV_SPLINE_SPLINE_LINEAR;
																		POV_SPLINE_SPLINE_QUADRATIC;
																		POV_SPLINE_SPLINE_CUBIC;
																		POV_SPLINE_SPLINE_NATURAL;
																 }; ANIM OFF; }
	}
}
