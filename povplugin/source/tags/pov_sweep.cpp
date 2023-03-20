// example code for creating a styling tag for Hair

#include "c4d.h"
#include "c4d_symbols.h"
#include "lib_hair.h"
#include "main.h"

#include "povsweep.h"

//////////////////////////////////////////////////////////////////////////

class POVSweepTag : public TagData
{
	INSTANCEOF(POVSweepTag, TagData)

public:
	virtual Bool Init(GeListNode* node);
	virtual void Free(GeListNode* node) {};

	static NodeData* Alloc() { return NewObjClear(POVSweepTag); }

	//////////////////////////////////////////////////////////////////////////
};

//////////////////////////////////////////////////////////////////////////
//
// Preserved for accepting splie data 
// 
/*
static Bool _StyleFn(BaseDocument* doc, BaseList2D* op, HairObject* hair, HairGuides* guides, Vector* padr, Int32 cnt, Int32 scnt)
{
	Int32					 i, l;
	Matrix				 axis(DC);
	BaseContainer* bc = op->GetDataInstance();

	SplineData* dsplinex = (SplineData*)bc->GetCustomDataType(HAIR_STYLING_SPLINE_X, CUSTOMDATATYPE_SPLINE);
	SplineData* dspliney = (SplineData*)bc->GetCustomDataType(HAIR_STYLING_SPLINE_Y, CUSTOMDATATYPE_SPLINE);
	Float				displace = bc->GetFloat(HAIR_STYLING_DISPLACE);

	for (i = 0; i < cnt; i++)
	{
		guides->GetRootAxis(i, axis, true, true, true, true);	// NOTE: during styling the points are in local space and their initial state

		for (l = 1; l < scnt; l++)
		{
			Float dx = 0.0, dy = 0.0;

			if (dsplinex)
				dx = dsplinex->GetPoint(Float(l) / Float(scnt - 1)).y;
			if (dspliney)
				dy = dspliney->GetPoint(Float(l) / Float(scnt - 1)).y;

			dx *= displace; dy *= displace;

			padr[i * scnt + l] += dx * axis.v1 + dy * axis.v2;
		}
	}

	return true;
}
*/
//////////////////////////////////////////////////////////////////////////

Bool POVSweepTag::Init(GeListNode* node)
{
	BaseContainer* bc = ((BaseList2D*)node)->GetDataInstance();

	bc->SetFloat(HAIR_STYLING_DISPLACE, 10.0);

	GeData d(CUSTOMDATATYPE_SPLINE, DEFAULTVALUE);

	SplineData* p = (SplineData*)d.GetCustomDataType(CUSTOMDATATYPE_SPLINE);
	if (p)
	{
		p->MakeLinearSplineBezier(2);
	}
	bc->SetData(HAIR_STYLING_SPLINE_X, d);
	bc->SetData(HAIR_STYLING_SPLINE_Y, d);

	return true;
}

//////////////////////////////////////////////////////////////////////////

#define ID_POV_SWEEP 1018980

Bool RegisterStylingTag()
{
	return RegisterTagPlugin(ID_POV_SWEEP, GeLoadString(IDS_POV_SWEEP),
		                       TAG_MULTIPLE | TAG_VISIBLE, POVSweepTag::Alloc,
		                       "POVSweep", AutoBitmap("pvengine-xp.ico"), 0);
}
