// example code for creating a tag that can use the Hair API

#include "c4d.h"
#include "c4d_symbols.h"
#include "lib_hair.h"
#include "main.h"

#include "povlight.h"

//
// POVLightTag
//
class POVLightTag : public TagData
{
	INSTANCEOF(POVLightTag, TagData)

public:
	virtual Bool Init(GeListNode* node);
	virtual void Free(GeListNode* node) {};

	static NodeData* Alloc() { return NewObjClear(POVLightTag); }
};

//
// Init
//
Bool POVLightTag::Init(GeListNode* node)
{
	BaseContainer* bc = ((BaseList2D*)node)->GetDataInstance();

	// TODO: Init: https://wiki.povray.org/content/Reference:Light_Source#Area_Lights
	
	bc->SetFloat(POV_LIGHT_TIGHTNESS,         0.0);
	bc->SetFloat(POV_LIGHT_FADE_DISTANCE,     0.0);
	bc->SetFloat(POV_LIGHT_FADE_POWER,        0.0);
	bc->SetInt32(POV_LIGHT_AREA_NUM_X,          2);
	bc->SetInt32(POV_LIGHT_AREA_NUM_Y,          2);
	bc->SetFloat(POV_LIGHT_ICON_SCALE,        1.0);
	bc->SetFloat(POV_LIGHT_ICON_TRANSPARENCY, 0.99);
	
	bc->SetBool(POV_LIGHT_DISPLAY_ICON,      true);
	bc->SetBool(POV_LIGHT_MEDIA_INTERACTION, true);
	
	return true;
}

//
// Register
//
#define ID_POV_LIGHT  1018986

Bool RegisterPOVLightTag()
{
	return RegisterTagPlugin(ID_POV_LIGHT, GeLoadString(IDS_POV_LIGHT),
		                       TAG_MULTIPLE | TAG_VISIBLE, POVLightTag::Alloc,
		                       "POVLight", AutoBitmap("pvengine-xp.ico"), 0);
}
