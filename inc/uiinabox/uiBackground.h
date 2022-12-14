#ifndef UIINABOX_UIBACKGROUND_H
#define UIINABOX_UIBACKGROUND_H

#include "raylib.h"
#include "uiinabox/apidecl.h"
#include "uiinabox/uiRect.h"

/*******************************************************************************
********************************************************* Types and Definitions
********************************************************************************

*******************************************************************************/

struct uiBackground
{
   Color color;
};
typedef struct uiBackground uiBackground;

/*******************************************************************************
********************************************************************* Functions
********************************************************************************

*******************************************************************************/

#define background_color_ui_( Col )                                            \
(                                                                              \
   (uiBackground){ .color=(Col) }                                              \
)

/*******************************************************************************

*******************************************************************************/

UIINABOX_API void draw_background_ui( uiRect rect, uiBackground bg );

#endif