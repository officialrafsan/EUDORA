#include "EudoraTypes.r"#include "::tabmania.r"resource 'eTAB' (130, "Work Tab", purgeable) {	'CSOm',	'Nick',	'Work',	"Work",	0,	13,	13,	{			// Object 0			fieldObject {					objectFlagAcceptsFocus | objectFlagExportable,					"title",																// tag					"Title:",																// label					"Title:",																// Field name					48,																			// label width					labelFlushRight, 												// label justification					labelNoFlags,														// label field flags					peNoStyledPaste | peClearAllReturns,		// PETE flags for the field					{							left   {   0, tabObject, relToLeft,				rfDefaultMargin	},		// left coordinate							top    {   0, tabObject, relToTop,				rfDefaultMargin	},		// top coordinate							right  {   0, tabObject, relToHorzCenter,	rfNone 					},		// right coordinate							height { kUseOneLineHeight }					}			};			// Object 1			fieldObject {					objectFlagAcceptsFocus | objectFlagExportable,					"company",															// tag					"Company:",															// label					"Company:",															// Field name					0,																			// label width					labelFlushRight, 												// label justification					labelAutoSize,													// label field flags					peNoStyledPaste | peClearAllReturns,		// PETE flags for the field					{							left   {   0, 0, relToRight,					rfDefaultMargin					},		// left coordinate							top    {   0, tabObject, relToTop,		rfDefaultMargin					},		// top coordinate							right  {   0, tabObject, relToRight,	rfNegativeDefaultMargin	},		// right coordinate							height { kUseOneLineHeight }					}			};			// Object 2			controlObject {					objectFlagNone,					"",					"",					"",					0, 0, 0, kControlSeparatorLineProc, 0, coNone, noBehavior, "", "",					{							left   { 0, 0, relToLeft,  	rfNone   },		// left coordinate							top    { 0, 0, relToBottom,  	rfDefaultMargin   },		// left coordinate							right  { 0, 1, relToRight, rfNone },							height { 2 }					}			};			// Object 3			fieldObject {					objectFlagAcceptsFocus | objectFlagExportable,					"address2",															// tag					"Street Address:",											// label					"Address:",															// Field name					48,																			// label width					labelFlushRight, 												// label justification					labelWrapLabel | labelWrapField,													// label field flags					peNoStyledPaste,												// PETE flags for the field					{							left   {   0, tabObject, relToLeft,  rfDefaultMargin   },		// left coordinate							top    {   0, 2, relToBottom,	 			 rfDefaultMargin    },		// top coordinate							right  {   0, tabObject, relToRight, rfNegativeDefaultMargin  },			// right coordinate							height { kUseTwoLineHeight }					}			};			// Object 4			fieldObject {					objectFlagAcceptsFocus | objectFlagExportable,					"city2",																// tag					"City:",																// label					"City:",																// Field name					48,																			// label width					labelFlushRight, 												// label justification					labelNoFlags,														// label field flags					peNoStyledPaste | peClearAllReturns,		// PETE flags for the field					{							left   {   0, tabObject, relToLeft,  	rfDefaultMargin   },		// left coordinate							top    {   0, 3,				 relToBottom,	rfDefaultMargin	},		// top coordinate							right  {   0, tabObject, relToHorzCenter, rfNone  },			// right coordinate							height { kUseOneLineHeight }					}			};			// Object 5			fieldObject {					objectFlagAcceptsFocus | objectFlagExportable,					"state2",																// tag					"State/Province:",											// label					"State/Province:",											// Field name					76,																			// label width					labelFlushRight, 												// label justification					labelNoFlags,														// label field flags					peNoStyledPaste | peClearAllReturns,		// PETE flags for the field					{							left   {   0, tabObject, relToHorzCenter,  	rfDefaultMargin   },		// left coordinate							top    {   0, 3,				 relToBottom,	rfDefaultMargin	},		// top coordinate							right  {   0, tabObject, relToRight, rfNegativeDefaultMargin  },			// right coordinate							height { kUseOneLineHeight }					}			};			// Object 6			fieldObject {					objectFlagAcceptsFocus | objectFlagExportable,					"country2",															// tag					"Country:",															// label					"Country:",															// Field name					48,																			// label width					labelFlushRight, 												// label justification					labelNoFlags,														// label field flags					peNoStyledPaste | peClearAllReturns,		// PETE flags for the field					{							left   {   0, 4, 				 relToLeft,  	rfNone   },	// left coordinate							top    {   0, 4,				 relToBottom,	rfDefaultMargin	},		// top coordinate							right  {   0, 4, 				 relToRight, rfNone  },							// right coordinate							height { kUseOneLineHeight }					}			};			// Object 7			fieldObject {					objectFlagAcceptsFocus | objectFlagExportable,					"zip2",																	// tag					"Zip/Postal Code:",											// label					"Zip/Postal Code:",											// Field name					76,																			// label width					labelFlushRight, 												// label justification					labelNoFlags,														// label field flags					peNoStyledPaste | peClearAllReturns,		// PETE flags for the field					{							left   {   0, 5, relToLeft,  	rfNone   },		// left coordinate							top    {   0, 5, relToBottom,	rfDefaultMargin	},		// top coordinate							right  {   0, 5, relToRight, rfNone  },			// right coordinate							height { kUseOneLineHeight }					}			};			// Object 8			controlObject {					objectFlagNone,					"",					"",					"",					0, 0, 0, kControlSeparatorLineProc, 0, coNone, noBehavior, "", "",					{							left   { 0, 6, relToLeft,  	rfNone   },		// left coordinate							top    { 0, 6, relToBottom,  	rfDefaultMargin   },		// left coordinate							right  { 0, 7, relToRight, rfNone },							height { 2 }					}			};			// Object 9			fieldObject {					objectFlagAcceptsFocus | objectFlagExportable,					"phone2",																// tag					"Phone:",																// label					"Phone:",																// Field name					48,																			// label width					labelFlushRight, 												// label justification					labelNoFlags,														// label field flags					peNoStyledPaste | peClearAllReturns,		// PETE flags for the field					{							left   {   0, 6, relToLeft,  	rfNone   },		// left coordinate							top    {   0, 8, relToBottom,	rfDefaultMargin	},		// top coordinate							right  {   0, 6, relToRight, rfNone  },			// right coordinate							height { kUseOneLineHeight }					}			};			// Object 10			fieldObject {					objectFlagAcceptsFocus | objectFlagExportable,					"fax2",																	// tag					"Fax:",																	// label					"Fax:",																	// Field name					0,																			// label width					labelFlushRight, 												// label justification					labelAutoSize,														// label field flags					peNoStyledPaste | peClearAllReturns,		// PETE flags for the field					{							left   {   0, 9, relToRight,  	rfDefaultMargin   },		// left coordinate							top    {   0, 9, relToTop,	rfNone	},		// top coordinate							right  {   0, 7, relToRight, rfNone  },			// right coordinate							height { kUseOneLineHeight }					}			};			// Object 11			fieldObject {					objectFlagAcceptsFocus | objectFlagExportable,					"mobile2",															// tag					"Mobile:",															// label					"Mobile:",															// Field name					48,																			// label width					labelFlushRight, 												// label justification					labelNoFlags,														// label field flags					peNoStyledPaste | peClearAllReturns,		// PETE flags for the field					{							left   {   0, 9, relToLeft,  	rfNone   },		// left coordinate							top    {   0, 9,				 relToBottom,	rfDefaultMargin	},		// top coordinate							right  {   0, 9, relToRight, rfNone  },			// right coordinate							height { kUseOneLineHeight }					}			};			// Object 12			controlObject {					objectFlagNone,					"",					"Swap with Home",					"",					0, 0, 1, kControlPushButtonProc, 0, coFit, swapHomeWorkBehavior, "Work", "Home",					{							left   { 0, tabObject, relToLeft,  	rfDefaultMargin   },		// left coordinate							bottom { 0, tabObject, relToBottom, rfNegativeDefaultMargin }			// bottom coordinate					}			};			// Object 13			controlObject {					objectFlagNone,					"primary",					"Primary Information",					"",					0, 0, 1, kControlCheckBoxProc, 0, coFit, primaryCheckboxBehavior, "work", "",					{							right  { 0, tabObject, relToRight,  	rfNegativeDefaultMargin   },		// right coordinate							bottom { 0, tabObject, relToBottom,  	rfNegativeDefaultMargin   }			// bottom coordinate					}			};			// Object 14			fieldObject {					objectFlagAcceptsFocus | objectFlagExportable,					"aim2",															// tag					"iChat:",															// label					"iChat:",															// Field name					0,																			// label width					labelFlushRight, 												// label justification					labelAutoSize,														// label field flags					peNoStyledPaste | peClearAllReturns,		// PETE flags for the field					{							left   {   0, 9, relToRight,  	rfDefaultMargin   },		// left coordinate							top    {   0, 9,				 relToBottom,	rfDefaultMargin	},		// top coordinate							right  {   0, 7, relToRight, rfNone  },			// right coordinate							height { kUseOneLineHeight }					}			};						// Object 15			fieldObject {					objectFlagAcceptsFocus | objectFlagExportable,					"web2",																	// tag					"Web:",																	// label					"Web:",																	// Field name					48,																			// label width					labelFlushRight, 												// label justification					labelAutoSizeFieldHeight | labelWrapField,								// label field flags					peNoStyledPaste,												// PETE flags for the field					{							left   {   0, 11, relToLeft,  	rfNone   },									// left coordinate							top    {   0, 11,				 relToBottom,	rfDefaultMargin	},	// top coordinate							right  {   0, tabObject, relToRight, rfNegativeDefaultMargin  },										// right coordinate							bottom {   0, 12, relToTop, rfNegativeDefaultMargin  },										// right coordinate							height { kUseOneLineHeight }					}			}	}};