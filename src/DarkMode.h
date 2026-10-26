/****************************************************************************
 * Permanent dark mode - colour palette and helpers
 *  The whole GUI is forced into a dark theme. ChessApp::FilterEvent() (in
 *  main.cpp) applies DarkModeApply() to every window as it is created and
 *  to every top level window (frames, dialogs) as it is shown.
 ****************************************************************************/
#ifndef DARK_MODE_H
#define DARK_MODE_H
#include "wx/wx.h"

inline wxColour DarkModeBg()          { return wxColour( 43, 43, 43); }    // panels, dialogs
inline wxColour DarkModeFg()          { return wxColour(225,225,225); }    // normal text
inline wxColour DarkModeInputBg()     { return wxColour( 30, 30, 30); }    // text/list/grid controls
inline wxColour DarkModeSelectBg()    { return wxColour( 80, 80, 80); }    // highlighted item
inline wxColour DarkModeBorder()      { return wxColour( 90, 90, 90); }
inline wxColour DarkModeComment()     { return wxColour(110,170,255); }    // comments in move list
inline wxColour DarkModeBookBg()      { return wxColour( 20, 90, 30); }    // book moves (was bright green)
inline wxColour DarkModeAlert()       { return wxColour(255, 90, 90); }    // was wxRED

inline wxColour DarkModeTabActive()   { return wxColour( 70, 70, 70); }    // selected notebook tab
inline wxColour DarkModeFgDim()       { return wxColour(165,165,165); }    // unselected tabs, menu disabled
inline wxColour DarkModeMenuBar()     { return wxColour( 32, 32, 32); }

// Apply the dark theme to a window, and optionally all of its descendants
void DarkModeApply( wxWindow *win, bool recursive=true );

// Dark tab strip for wxAuiNotebooks (pass to SetArtProvider())
class wxAuiTabArt;
wxAuiTabArt *DarkModeNewTabArt();

// Dark sashes and borders for a wxAuiManager
class wxAuiManager;
void DarkModeAuiManager( wxAuiManager &mgr );

#endif // DARK_MODE_H
