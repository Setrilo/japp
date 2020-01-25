#include "qcommon/qfiles.h"

#define NUM_FORCE_STAR_IMAGES  9
#define FORCE_NONJEDI	0
#define FORCE_JEDI		1

extern int uiForceSide;
extern int uiJediNonJedi;
extern int uiForceRank;
extern int uiMaxRank;
extern int uiForceUsed;
extern int uiForceAvailable;
extern qboolean gTouchedForce;
/*[Old JAPP Code]
extern qboolean uiForcePowersDisabled[NUM_FORCE_POWERS];
extern int uiForcePowersRank[NUM_FORCE_POWERS];
extern const forceSide_t uiForcePowerDarkLight[NUM_FORCE_POWERS];
[End Old JAPP Code]*/

//[Gunnery System]
extern qboolean uiForcePowersDisabled[NUM_TOTAL_SKILLS];
extern int uiForcePowersRank[NUM_TOTAL_SKILLS];
extern const forceSide_t uiForcePowerDarkLight[NUM_TOTAL_SKILLS];
//[End Gunnery System]]

extern int uiSaberColorShaders[NUM_SABER_COLORS];
// Dots above or equal to a given rank carry a certain color.

void UI_InitForceShaders( void );
void UI_ReadLegalForce( void );
void UI_DrawTotalForceStars( rectDef_t *rect, float scale, vector4 *color, uiTextStyle_e textStyle );
void UI_DrawForceStars( rectDef_t *rect, float scale, const vector4 *color, uiTextStyle_e textStyle, int findex, int val, int min, int max );
void UI_UpdateClientForcePowers( const char *teamArg );
void UI_SaveForceTemplate( void );
void UI_UpdateForcePowers( void );
qboolean UI_SkinColor_HandleKey( uint32_t flags, float *special, int key, int num, int min, int max, int type );
qboolean UI_ForceSide_HandleKey( uint32_t flags, float *special, int key, int num, int min, int max, int type );
qboolean UI_JediNonJedi_HandleKey( uint32_t flags, float *special, int key, int num, int min, int max, int type );
qboolean UI_ForceMaxRank_HandleKey( uint32_t flags, float *special, int key, int num, int min, int max, int type );
qboolean UI_ForcePowerRank_HandleKey( uint32_t flags, float *special, int key, int num, int min, int max, int type );
void UI_ForceConfigHandle( int oldindex, int newindex );
