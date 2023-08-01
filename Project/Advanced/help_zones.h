// [Header file created by Help ID Fixer at 08:57:23 on 07 Jan 2005]
// [Allocated ID range = 1000 to 1999]
////////////////////////////////////////////////////////////////////////
//
//                     ASTA DEVELOPMENT CORPORATION LIMITED
//
////////////////////////////////////////////////////////////////////////
//
// Module,           help_zones.h
//
// Description,      Defines the set of help pointer zones
//
// Copyright (C) 1998 Asta Group Plc
// Licensed material - program property of Asta Development Corp. Ltd
//
////////////////////////////////////////////////////////////////////////

#ifndef HELP_ZONE_HEADER
#define HELP_ZONE_HEADER

#ifdef __cplusplus
typedef INT32 HELP_ZONE;
#endif

#define IDH_HZUNKNOWN      -1
#define IDH_HZHTSYSMENU                                                          1000
#define IDH_HZSPREADSHEET                                                        1001
#define IDH_HZBARCHART                                                           1002
#define IDH_HZHISTOGRAM                                                          1003	//Histogram pane
#define IDH_HZEXPLORER                                                           1004
#define IDH_HZRAV                                                                1005
#define IDH_HZMENUBAR                                                            1006
#define IDH_HZPROJECTTREE                                                        1007
#define IDH_HZPREVIEW                                                            1008
#define IDH_HZHISTOGRAMBAR                                                       1009	//Histogram toolbar
#define IDH_HZLOB_DATA                                                           1010	// Line of balance pane
#define IDH_HZLOB_GRAPH                                                          1011	// Line of balance pane
#define IDH_LAST_HELP_ZONE                                                       1012

// BUGFIX 23188 12.0.01 dick broughton 06/10/2011 -- many irrelevant help-zones removed
#define IDH_HZMESSAGEAREAZONE                                                    1031

#ifdef __cplusplus
//////////////////////////////////////////////////////////////////////////////
// Class,       ZONE_WINDOW
// Description, Base class from which to derive for help zoning functionality
// Exceptions,  None
// Author,      Ben
// Keywords,    ZONE
//////////////////////////////////////////////////////////////////////////////
class ZONE_WINDOW
{
public:
#ifdef WINVER
virtual HELP_ZONE GetHelpZone (POINT) const = 0;
#else
virtual HELP_ZONE GetHelpZone (INT64) const = 0;
#endif
virtual bool      NoDeferToParent () const {return false;}  //HISTOGRAM TOOLBAR doesn't want to use it's parent window's help zone.
};
#endif

STRING GetPathForHelpFile (void);
FILENAME GetHelpFileName (void);
void   InvokeCustomerServicesHelp();
#endif







// [Help ID Fixer report: Max ID = 1999]
