/* this file contains the actual definitions of */
/* the IIDs and CLSIDs */

/* link this file in with the server and any clients */


/* File created by MIDL compiler version 3.01.75 */
/* at Tue Sep 30 18:27:33 1997
 */
/* Compiler settings for EudoraExe.idl:
    Oicf (OptLev=i2), W1, Zp8, env=Win32, ms_ext, c_ext
    error checks: none
*/
//@@MIDL_FILE_HEADING(  )
#ifdef __cplusplus
extern "C"{
#endif 


#ifndef __IID_DEFINED__
#define __IID_DEFINED__

typedef struct _IID
{
    unsigned long x;
    unsigned short s1;
    unsigned short s2;
    unsigned char  c[8];
} IID;

#endif // __IID_DEFINED__

#ifndef CLSID_DEFINED
#define CLSID_DEFINED
typedef IID CLSID;
#endif // CLSID_DEFINED

const IID LIBID_IEScriptObjectModel = {0x3E76DB61,0x6F74,0x11CF,{0x8F,0x20,0x00,0x80,0x5F,0x2C,0xD0,0x64}};


const IID IID_IBidentOmLocation = {0x163BB1E0,0x6E00,0x11CF,{0x83,0x7A,0x48,0xDC,0x04,0xC1,0x00,0x00}};


const CLSID CLSID_IBidentOmLocation_Class = {0x163BB1E1,0x6E00,0x11CF,{0x83,0x7A,0x48,0xDC,0x04,0xC1,0x00,0x00}};


const IID IID_IBidentOmLink = {0x163BB1E2,0x6E00,0x11CF,{0x83,0x7A,0x48,0xDC,0x04,0xC1,0x00,0x00}};


const IID DIID_IBidentOmLinkEvents = {0x163BB1E3,0x6E00,0x11CF,{0x83,0x7A,0x48,0xDC,0x04,0xC1,0x00,0x00}};


const CLSID CLSID_IBidentOmLink_Class = {0xB3E43805,0x6DFF,0x11CF,{0x83,0x7A,0x48,0xDC,0x04,0xC1,0x00,0x00}};


const IID IID_IBidentOmAnchor = {0x163BB1E4,0x6E00,0x11CF,{0x83,0x7A,0x48,0xDC,0x04,0xC1,0x00,0x00}};


const CLSID CLSID_IBidentOmAnchor_Class = {0x163BB1E5,0x6E00,0x11CF,{0x83,0x7A,0x48,0xDC,0x04,0xC1,0x00,0x00}};


const IID IID_IBidentOmLinksCollection = {0x163BB1E8,0x6E00,0x11CF,{0x83,0x7A,0x48,0xDC,0x04,0xC1,0x00,0x00}};


const CLSID CLSID_IBidentOmLinksCollection_Class = {0x163BB1E9,0x6E00,0x11CF,{0x83,0x7A,0x48,0xDC,0x04,0xC1,0x00,0x00}};


const IID IID_IBidentOmAnchorsCollection = {0x163BB1EA,0x6E00,0x11CF,{0x83,0x7A,0x48,0xDC,0x04,0xC1,0x00,0x00}};


const CLSID CLSID_IBidentOmAnchorsCollection_Class = {0x163BB1EC,0x6E00,0x11CF,{0x83,0x7A,0x48,0xDC,0x04,0xC1,0x00,0x00}};


const IID IID_IBidentOmHistory = {0xFECEAAA2,0x8405,0x11CF,{0x8B,0xA1,0x00,0xAA,0x00,0x47,0x6D,0xA6}};


const CLSID CLSID_IBidentOmHistory_class = {0xFECEAAA3,0x8405,0x11CF,{0x8B,0xA1,0x00,0xAA,0x00,0x47,0x6D,0xA6}};


const IID IID_IBidentOmNavigator = {0xFECEAAA5,0x8405,0x11CF,{0x8B,0xA1,0x00,0xAA,0x00,0x47,0x6D,0xA6}};


const CLSID CLSID_IBidentOmNavigator_class = {0xFECEAAA6,0x8405,0x11CF,{0x8B,0xA1,0x00,0xAA,0x00,0x47,0x6D,0xA6}};


const IID IID_IBidentOmElementsCollection = {0x0D04D289,0x6BEC,0x11CF,{0x8B,0x97,0x00,0xAA,0x00,0x47,0x6D,0xA6}};


const CLSID CLSID_IBidentOmElementsCollection_Class = {0x0D04D28A,0x6BEC,0x11CF,{0x8B,0x97,0x00,0xAA,0x00,0x47,0x6D,0xA6}};


const IID IID_IBidentOmForm = {0x0D04D283,0x6BEC,0x11CF,{0x8B,0x97,0x00,0xAA,0x00,0x47,0x6D,0xA6}};


const IID DIID_IBidentOmFormEvents = {0x0D04D284,0x6BEC,0x11CF,{0x8B,0x97,0x00,0xAA,0x00,0x47,0x6D,0xA6}};


const CLSID CLSID_IBidentOmForm_Class = {0x0D04D285,0x6BEC,0x11CF,{0x8B,0x97,0x00,0xAA,0x00,0x47,0x6D,0xA6}};


const IID IID_IBidentOmFormsCollection = {0x0D04D286,0x6BEC,0x11CF,{0x8B,0x97,0x00,0xAA,0x00,0x47,0x6D,0xA6}};


const CLSID CLSID_IBidentOmFormsCollection_Class = {0x0D04D287,0x6BEC,0x11CF,{0x8B,0x97,0x00,0xAA,0x00,0x47,0x6D,0xA6}};


const IID IID_IOmDocument = {0xD48A6EC8,0x6A4A,0x11CF,{0x94,0xA7,0x44,0x45,0x53,0x54,0x00,0x00}};


const CLSID CLSID_IOmDocument_class = {0xD48A6EC9,0x6A4A,0x11CF,{0x94,0xA7,0x44,0x45,0x53,0x54,0x00,0x00}};


const IID IID_IBidentOmFramesCollection = {0xCC95F7C0,0x83EA,0x11CF,{0x9F,0xA7,0x00,0xAA,0x00,0x6C,0x42,0xC4}};


const CLSID CLSID_IBidentOmFramesCollection_class = {0xEE2C4BA0,0x83EA,0x11CF,{0x9F,0xA7,0x00,0xAA,0x00,0x6C,0x42,0xC4}};


const IID IID_IOmWindow = {0xD48A6EC4,0x6A4A,0x11CF,{0x94,0xA7,0x44,0x45,0x53,0x54,0x00,0x00}};


const IID DIID_IOmWindowEvents = {0x96A0A4E0,0xD062,0x11CF,{0x94,0xB6,0x00,0xAA,0x00,0x60,0x27,0x5C}};


const CLSID CLSID_IOmWindow_class = {0xD48A6EC6,0x6A4A,0x11CF,{0x94,0xA7,0x44,0x45,0x53,0x54,0x00,0x00}};


const IID IID_IBidentOmRadioButtonGroup = {0xBCC5AF22,0x7300,0x11CF,{0x8F,0x20,0x00,0x80,0x5F,0x2C,0xD0,0x64}};


const CLSID CLSID_IBidentOmRadioButtonGroup_Class = {0xBCC5AF23,0x7300,0x11CF,{0x8F,0x20,0x00,0x80,0x5F,0x2C,0xD0,0x64}};


const IID IID_IBidentHTMLDocument = {0x626FC520,0xA41E,0x11CF,{0xA7,0x31,0x00,0xA0,0xC9,0x08,0x26,0x37}};


const CLSID CLSID_IBidentHTMLDocument_class = {0x25336920,0x03F9,0x11CF,{0x8F,0xD0,0x00,0xAA,0x00,0x68,0x6F,0x13}};


#ifdef __cplusplus
}
#endif
