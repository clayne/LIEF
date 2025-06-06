/* Copyright 2017 - 2025 R. Thomas
 * Copyright 2017 - 2025 Quarkslab
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
#ifndef LIEF_PE_GDI32_DLL_LOOKUP_H
#define LIEF_PE_GDI32_DLL_LOOKUP_H
#include <cstdint>

namespace LIEF {
namespace PE {

inline const char* gdi32_dll_lookup(uint32_t i) {
  switch(i) {
  case 0x0001: return "AbortDoc";
  case 0x0002: return "AbortPath";
  case 0x0003: return "AddFontMemResourceEx";
  case 0x0004: return "AddFontResourceA";
  case 0x0005: return "AddFontResourceExA";
  case 0x0006: return "AddFontResourceExW";
  case 0x0007: return "AddFontResourceTracking";
  case 0x0008: return "AddFontResourceW";
  case 0x0009: return "AngleArc";
  case 0x000a: return "AnimatePalette";
  case 0x000b: return "AnyLinkedFonts";
  case 0x000c: return "Arc";
  case 0x000d: return "ArcTo";
  case 0x000e: return "BRUSHOBJ_hGetColorTransform";
  case 0x000f: return "BRUSHOBJ_pvAllocRbrush";
  case 0x0010: return "BRUSHOBJ_pvGetRbrush";
  case 0x0011: return "BRUSHOBJ_ulGetBrushColor";
  case 0x0012: return "BeginPath";
  case 0x0013: return "BitBlt";
  case 0x0014: return "CLIPOBJ_bEnum";
  case 0x0015: return "CLIPOBJ_cEnumStart";
  case 0x0016: return "CLIPOBJ_ppoGetPath";
  case 0x0017: return "CancelDC";
  case 0x0018: return "CheckColorsInGamut";
  case 0x0019: return "ChoosePixelFormat";
  case 0x001a: return "Chord";
  case 0x001b: return "ClearBitmapAttributes";
  case 0x001c: return "ClearBrushAttributes";
  case 0x001d: return "CloseEnhMetaFile";
  case 0x001e: return "CloseFigure";
  case 0x001f: return "CloseMetaFile";
  case 0x0020: return "ColorCorrectPalette";
  case 0x0021: return "ColorMatchToTarget";
  case 0x0022: return "CombineRgn";
  case 0x0023: return "CombineTransform";
  case 0x0024: return "CopyEnhMetaFileA";
  case 0x0025: return "CopyEnhMetaFileW";
  case 0x0026: return "CopyMetaFileA";
  case 0x0027: return "CopyMetaFileW";
  case 0x0028: return "CreateBitmap";
  case 0x0029: return "CreateBitmapIndirect";
  case 0x002a: return "CreateBrushIndirect";
  case 0x002b: return "CreateColorSpaceA";
  case 0x002c: return "CreateColorSpaceW";
  case 0x002d: return "CreateCompatibleBitmap";
  case 0x002e: return "CreateCompatibleDC";
  case 0x002f: return "CreateDCA";
  case 0x0030: return "CreateDCW";
  case 0x0031: return "CreateDIBPatternBrush";
  case 0x0032: return "CreateDIBPatternBrushPt";
  case 0x0033: return "CreateDIBSection";
  case 0x0034: return "CreateDIBitmap";
  case 0x0035: return "CreateDiscardableBitmap";
  case 0x0036: return "CreateEllipticRgn";
  case 0x0037: return "CreateEllipticRgnIndirect";
  case 0x0038: return "CreateEnhMetaFileA";
  case 0x0039: return "CreateEnhMetaFileW";
  case 0x003a: return "CreateFontA";
  case 0x003b: return "CreateFontIndirectA";
  case 0x003c: return "CreateFontIndirectExA";
  case 0x003d: return "CreateFontIndirectExW";
  case 0x003e: return "CreateFontIndirectW";
  case 0x003f: return "CreateFontW";
  case 0x0040: return "CreateHalftonePalette";
  case 0x0041: return "CreateHatchBrush";
  case 0x0042: return "CreateICA";
  case 0x0043: return "CreateICW";
  case 0x0044: return "CreateMetaFileA";
  case 0x0045: return "CreateMetaFileW";
  case 0x0046: return "CreatePalette";
  case 0x0047: return "CreatePatternBrush";
  case 0x0048: return "CreatePen";
  case 0x0049: return "CreatePenIndirect";
  case 0x004a: return "CreatePolyPolygonRgn";
  case 0x004b: return "CreatePolygonRgn";
  case 0x004c: return "CreateRectRgn";
  case 0x004d: return "CreateRectRgnIndirect";
  case 0x004e: return "CreateRoundRectRgn";
  case 0x004f: return "CreateScalableFontResourceA";
  case 0x0050: return "CreateScalableFontResourceW";
  case 0x0051: return "CreateSolidBrush";
  case 0x0052: return "DPtoLP";
  case 0x0053: return "DdEntry0";
  case 0x005e: return "DdEntry1";
  case 0x0054: return "DdEntry10";
  case 0x0055: return "DdEntry11";
  case 0x0056: return "DdEntry12";
  case 0x0057: return "DdEntry13";
  case 0x0058: return "DdEntry14";
  case 0x0059: return "DdEntry15";
  case 0x005a: return "DdEntry16";
  case 0x005b: return "DdEntry17";
  case 0x005c: return "DdEntry18";
  case 0x005d: return "DdEntry19";
  case 0x0069: return "DdEntry2";
  case 0x005f: return "DdEntry20";
  case 0x0060: return "DdEntry21";
  case 0x0061: return "DdEntry22";
  case 0x0062: return "DdEntry23";
  case 0x0063: return "DdEntry24";
  case 0x0064: return "DdEntry25";
  case 0x0065: return "DdEntry26";
  case 0x0066: return "DdEntry27";
  case 0x0067: return "DdEntry28";
  case 0x0068: return "DdEntry29";
  case 0x0074: return "DdEntry3";
  case 0x006a: return "DdEntry30";
  case 0x006b: return "DdEntry31";
  case 0x006c: return "DdEntry32";
  case 0x006d: return "DdEntry33";
  case 0x006e: return "DdEntry34";
  case 0x006f: return "DdEntry35";
  case 0x0070: return "DdEntry36";
  case 0x0071: return "DdEntry37";
  case 0x0072: return "DdEntry38";
  case 0x0073: return "DdEntry39";
  case 0x007f: return "DdEntry4";
  case 0x0075: return "DdEntry40";
  case 0x0076: return "DdEntry41";
  case 0x0077: return "DdEntry42";
  case 0x0078: return "DdEntry43";
  case 0x0079: return "DdEntry44";
  case 0x007a: return "DdEntry45";
  case 0x007b: return "DdEntry46";
  case 0x007c: return "DdEntry47";
  case 0x007d: return "DdEntry48";
  case 0x007e: return "DdEntry49";
  case 0x0087: return "DdEntry5";
  case 0x0080: return "DdEntry50";
  case 0x0081: return "DdEntry51";
  case 0x0082: return "DdEntry52";
  case 0x0083: return "DdEntry53";
  case 0x0084: return "DdEntry54";
  case 0x0085: return "DdEntry55";
  case 0x0086: return "DdEntry56";
  case 0x0088: return "DdEntry6";
  case 0x0089: return "DdEntry7";
  case 0x008a: return "DdEntry8";
  case 0x008b: return "DdEntry9";
  case 0x008c: return "DeleteColorSpace";
  case 0x008d: return "DeleteDC";
  case 0x008e: return "DeleteEnhMetaFile";
  case 0x008f: return "DeleteMetaFile";
  case 0x0090: return "DeleteObject";
  case 0x0091: return "DescribePixelFormat";
  case 0x0092: return "DeviceCapabilitiesExA";
  case 0x0093: return "DeviceCapabilitiesExW";
  case 0x0094: return "DrawEscape";
  case 0x0095: return "Ellipse";
  case 0x0096: return "EnableEUDC";
  case 0x0097: return "EndDoc";
  case 0x0098: return "EndFormPage";
  case 0x0099: return "EndPage";
  case 0x009a: return "EndPath";
  case 0x009b: return "EngAcquireSemaphore";
  case 0x009c: return "EngAlphaBlend";
  case 0x009d: return "EngAssociateSurface";
  case 0x009e: return "EngBitBlt";
  case 0x009f: return "EngCheckAbort";
  case 0x00a0: return "EngComputeGlyphSet";
  case 0x00a1: return "EngCopyBits";
  case 0x00a2: return "EngCreateBitmap";
  case 0x00a3: return "EngCreateClip";
  case 0x00a4: return "EngCreateDeviceBitmap";
  case 0x00a5: return "EngCreateDeviceSurface";
  case 0x00a6: return "EngCreatePalette";
  case 0x00a7: return "EngCreateSemaphore";
  case 0x00a8: return "EngDeleteClip";
  case 0x00a9: return "EngDeletePalette";
  case 0x00aa: return "EngDeletePath";
  case 0x00ab: return "EngDeleteSemaphore";
  case 0x00ac: return "EngDeleteSurface";
  case 0x00ad: return "EngEraseSurface";
  case 0x00ae: return "EngFillPath";
  case 0x00af: return "EngFindResource";
  case 0x00b0: return "EngFreeModule";
  case 0x00b1: return "EngGetCurrentCodePage";
  case 0x00b2: return "EngGetDriverName";
  case 0x00b3: return "EngGetPrinterDataFileName";
  case 0x00b4: return "EngGradientFill";
  case 0x00b5: return "EngLineTo";
  case 0x00b6: return "EngLoadModule";
  case 0x00b7: return "EngLockSurface";
  case 0x00b8: return "EngMarkBandingSurface";
  case 0x00b9: return "EngMultiByteToUnicodeN";
  case 0x00ba: return "EngMultiByteToWideChar";
  case 0x00bb: return "EngPaint";
  case 0x00bc: return "EngPlgBlt";
  case 0x00bd: return "EngQueryEMFInfo";
  case 0x00be: return "EngQueryLocalTime";
  case 0x00bf: return "EngReleaseSemaphore";
  case 0x00c0: return "EngStretchBlt";
  case 0x00c1: return "EngStretchBltROP";
  case 0x00c2: return "EngStrokeAndFillPath";
  case 0x00c3: return "EngStrokePath";
  case 0x00c4: return "EngTextOut";
  case 0x00c5: return "EngTransparentBlt";
  case 0x00c6: return "EngUnicodeToMultiByteN";
  case 0x00c7: return "EngUnlockSurface";
  case 0x00c8: return "EngWideCharToMultiByte";
  case 0x00c9: return "EnumEnhMetaFile";
  case 0x00ca: return "EnumFontFamiliesA";
  case 0x00cb: return "EnumFontFamiliesExA";
  case 0x00cc: return "EnumFontFamiliesExW";
  case 0x00cd: return "EnumFontFamiliesW";
  case 0x00ce: return "EnumFontsA";
  case 0x00cf: return "EnumFontsW";
  case 0x00d0: return "EnumICMProfilesA";
  case 0x00d1: return "EnumICMProfilesW";
  case 0x00d2: return "EnumMetaFile";
  case 0x00d3: return "EnumObjects";
  case 0x00d4: return "EqualRgn";
  case 0x00d5: return "Escape";
  case 0x00d6: return "EudcLoadLinkW";
  case 0x00d7: return "EudcUnloadLinkW";
  case 0x00d8: return "ExcludeClipRect";
  case 0x00d9: return "ExtCreatePen";
  case 0x00da: return "ExtCreateRegion";
  case 0x00db: return "ExtEscape";
  case 0x00dc: return "ExtFloodFill";
  case 0x00dd: return "ExtSelectClipRgn";
  case 0x00de: return "ExtTextOutA";
  case 0x00df: return "ExtTextOutW";
  case 0x00e0: return "FONTOBJ_cGetAllGlyphHandles";
  case 0x00e1: return "FONTOBJ_cGetGlyphs";
  case 0x00e2: return "FONTOBJ_pQueryGlyphAttrs";
  case 0x00e3: return "FONTOBJ_pfdg";
  case 0x00e4: return "FONTOBJ_pifi";
  case 0x00e5: return "FONTOBJ_pvTrueTypeFontFile";
  case 0x00e6: return "FONTOBJ_pxoGetXform";
  case 0x00e7: return "FONTOBJ_vGetInfo";
  case 0x00e8: return "FillPath";
  case 0x00e9: return "FillRgn";
  case 0x00ea: return "FixBrushOrgEx";
  case 0x00eb: return "FlattenPath";
  case 0x00ec: return "FloodFill";
  case 0x00ed: return "FontIsLinked";
  case 0x00ee: return "FrameRgn";
  case 0x00ef: return "GdiAddFontResourceW";
  case 0x00f0: return "GdiAddGlsBounds";
  case 0x00f1: return "GdiAddGlsRecord";
  case 0x00f2: return "GdiAlphaBlend";
  case 0x00f3: return "GdiArtificialDecrementDriver";
  case 0x00f4: return "GdiCleanCacheDC";
  case 0x00f5: return "GdiComment";
  case 0x00f6: return "GdiConsoleTextOut";
  case 0x00f7: return "GdiConvertAndCheckDC";
  case 0x00f8: return "GdiConvertBitmap";
  case 0x00f9: return "GdiConvertBitmapV5";
  case 0x00fa: return "GdiConvertBrush";
  case 0x00fb: return "GdiConvertDC";
  case 0x00fc: return "GdiConvertEnhMetaFile";
  case 0x00fd: return "GdiConvertFont";
  case 0x00fe: return "GdiConvertMetaFilePict";
  case 0x00ff: return "GdiConvertPalette";
  case 0x0100: return "GdiConvertRegion";
  case 0x0101: return "GdiConvertToDevmodeW";
  case 0x0102: return "GdiCreateLocalEnhMetaFile";
  case 0x0103: return "GdiCreateLocalMetaFilePict";
  case 0x0104: return "GdiDeleteLocalDC";
  case 0x0105: return "GdiDeleteSpoolFileHandle";
  case 0x0106: return "GdiDescribePixelFormat";
  case 0x0107: return "GdiDllInitialize";
  case 0x0108: return "GdiDrawStream";
  case 0x0109: return "GdiEndDocEMF";
  case 0x010a: return "GdiEndPageEMF";
  case 0x0112: return "GdiEntry1";
  case 0x010b: return "GdiEntry10";
  case 0x010c: return "GdiEntry11";
  case 0x010d: return "GdiEntry12";
  case 0x010e: return "GdiEntry13";
  case 0x010f: return "GdiEntry14";
  case 0x0110: return "GdiEntry15";
  case 0x0111: return "GdiEntry16";
  case 0x0113: return "GdiEntry2";
  case 0x0114: return "GdiEntry3";
  case 0x0115: return "GdiEntry4";
  case 0x0116: return "GdiEntry5";
  case 0x0117: return "GdiEntry6";
  case 0x0118: return "GdiEntry7";
  case 0x0119: return "GdiEntry8";
  case 0x011a: return "GdiEntry9";
  case 0x011b: return "GdiFixUpHandle";
  case 0x011c: return "GdiFlush";
  case 0x011d: return "GdiFullscreenControl";
  case 0x011e: return "GdiGetBatchLimit";
  case 0x011f: return "GdiGetCharDimensions";
  case 0x0120: return "GdiGetCodePage";
  case 0x0121: return "GdiGetDC";
  case 0x0122: return "GdiGetDevmodeForPage";
  case 0x0123: return "GdiGetLocalBrush";
  case 0x0124: return "GdiGetLocalDC";
  case 0x0125: return "GdiGetLocalFont";
  case 0x0126: return "GdiGetPageCount";
  case 0x0127: return "GdiGetPageHandle";
  case 0x0128: return "GdiGetSpoolFileHandle";
  case 0x0129: return "GdiGetSpoolMessage";
  case 0x012a: return "GdiGradientFill";
  case 0x012b: return "GdiInitSpool";
  case 0x012c: return "GdiInitializeLanguagePack";
  case 0x012d: return "GdiIsMetaFileDC";
  case 0x012e: return "GdiIsMetaPrintDC";
  case 0x012f: return "GdiIsPlayMetafileDC";
  case 0x0130: return "GdiPlayDCScript";
  case 0x0131: return "GdiPlayEMF";
  case 0x0132: return "GdiPlayJournal";
  case 0x0133: return "GdiPlayPageEMF";
  case 0x0134: return "GdiPlayPrivatePageEMF";
  case 0x0135: return "GdiPlayScript";
  case 0x0136: return "GdiPrinterThunk";
  case 0x0137: return "GdiProcessSetup";
  case 0x0138: return "GdiQueryFonts";
  case 0x0139: return "GdiQueryTable";
  case 0x013a: return "GdiRealizationInfo";
  case 0x013b: return "GdiReleaseDC";
  case 0x013c: return "GdiReleaseLocalDC";
  case 0x013d: return "GdiResetDCEMF";
  case 0x013e: return "GdiSetAttrs";
  case 0x013f: return "GdiSetBatchLimit";
  case 0x0140: return "GdiSetLastError";
  case 0x0141: return "GdiSetPixelFormat";
  case 0x0142: return "GdiSetServerAttr";
  case 0x0143: return "GdiStartDocEMF";
  case 0x0144: return "GdiStartPageEMF";
  case 0x0145: return "GdiSwapBuffers";
  case 0x0146: return "GdiTransparentBlt";
  case 0x0147: return "GdiValidateHandle";
  case 0x0148: return "GetArcDirection";
  case 0x0149: return "GetAspectRatioFilterEx";
  case 0x014a: return "GetBitmapAttributes";
  case 0x014b: return "GetBitmapBits";
  case 0x014c: return "GetBitmapDimensionEx";
  case 0x014d: return "GetBkColor";
  case 0x014e: return "GetBkMode";
  case 0x014f: return "GetBoundsRect";
  case 0x0150: return "GetBrushAttributes";
  case 0x0151: return "GetBrushOrgEx";
  case 0x0152: return "GetCharABCWidthsA";
  case 0x0153: return "GetCharABCWidthsFloatA";
  case 0x0154: return "GetCharABCWidthsFloatW";
  case 0x0155: return "GetCharABCWidthsI";
  case 0x0156: return "GetCharABCWidthsW";
  case 0x0157: return "GetCharWidth32A";
  case 0x0158: return "GetCharWidth32W";
  case 0x0159: return "GetCharWidthA";
  case 0x015a: return "GetCharWidthFloatA";
  case 0x015b: return "GetCharWidthFloatW";
  case 0x015c: return "GetCharWidthI";
  case 0x015d: return "GetCharWidthInfo";
  case 0x015e: return "GetCharWidthW";
  case 0x015f: return "GetCharacterPlacementA";
  case 0x0160: return "GetCharacterPlacementW";
  case 0x0161: return "GetClipBox";
  case 0x0162: return "GetClipRgn";
  case 0x0163: return "GetColorAdjustment";
  case 0x0164: return "GetColorSpace";
  case 0x0165: return "GetCurrentObject";
  case 0x0166: return "GetCurrentPositionEx";
  case 0x0167: return "GetDCBrushColor";
  case 0x0168: return "GetDCOrgEx";
  case 0x0169: return "GetDCPenColor";
  case 0x016a: return "GetDIBColorTable";
  case 0x016b: return "GetDIBits";
  case 0x016c: return "GetDeviceCaps";
  case 0x016d: return "GetDeviceGammaRamp";
  case 0x016e: return "GetETM";
  case 0x016f: return "GetEUDCTimeStamp";
  case 0x0170: return "GetEUDCTimeStampExW";
  case 0x0171: return "GetEnhMetaFileA";
  case 0x0172: return "GetEnhMetaFileBits";
  case 0x0173: return "GetEnhMetaFileDescriptionA";
  case 0x0174: return "GetEnhMetaFileDescriptionW";
  case 0x0175: return "GetEnhMetaFileHeader";
  case 0x0176: return "GetEnhMetaFilePaletteEntries";
  case 0x0177: return "GetEnhMetaFilePixelFormat";
  case 0x0178: return "GetEnhMetaFileW";
  case 0x0179: return "GetFontAssocStatus";
  case 0x017a: return "GetFontData";
  case 0x017b: return "GetFontLanguageInfo";
  case 0x017c: return "GetFontResourceInfoW";
  case 0x017d: return "GetFontUnicodeRanges";
  case 0x017e: return "GetGlyphIndicesA";
  case 0x017f: return "GetGlyphIndicesW";
  case 0x0180: return "GetGlyphOutline";
  case 0x0181: return "GetGlyphOutlineA";
  case 0x0182: return "GetGlyphOutlineW";
  case 0x0183: return "GetGlyphOutlineWow";
  case 0x0184: return "GetGraphicsMode";
  case 0x0185: return "GetHFONT";
  case 0x0186: return "GetICMProfileA";
  case 0x0187: return "GetICMProfileW";
  case 0x0188: return "GetKerningPairs";
  case 0x0189: return "GetKerningPairsA";
  case 0x018a: return "GetKerningPairsW";
  case 0x018b: return "GetLayout";
  case 0x018c: return "GetLogColorSpaceA";
  case 0x018d: return "GetLogColorSpaceW";
  case 0x018e: return "GetMapMode";
  case 0x018f: return "GetMetaFileA";
  case 0x0190: return "GetMetaFileBitsEx";
  case 0x0191: return "GetMetaFileW";
  case 0x0192: return "GetMetaRgn";
  case 0x0193: return "GetMiterLimit";
  case 0x0194: return "GetNearestColor";
  case 0x0195: return "GetNearestPaletteIndex";
  case 0x0196: return "GetObjectA";
  case 0x0197: return "GetObjectType";
  case 0x0198: return "GetObjectW";
  case 0x0199: return "GetOutlineTextMetricsA";
  case 0x019a: return "GetOutlineTextMetricsW";
  case 0x019b: return "GetPaletteEntries";
  case 0x019c: return "GetPath";
  case 0x019d: return "GetPixel";
  case 0x019e: return "GetPixelFormat";
  case 0x019f: return "GetPolyFillMode";
  case 0x01a0: return "GetROP2";
  case 0x01a1: return "GetRandomRgn";
  case 0x01a2: return "GetRasterizerCaps";
  case 0x01a3: return "GetRegionData";
  case 0x01a4: return "GetRelAbs";
  case 0x01a5: return "GetRgnBox";
  case 0x01a6: return "GetStockObject";
  case 0x01a7: return "GetStretchBltMode";
  case 0x01a8: return "GetStringBitmapA";
  case 0x01a9: return "GetStringBitmapW";
  case 0x01aa: return "GetSystemPaletteEntries";
  case 0x01ab: return "GetSystemPaletteUse";
  case 0x01ac: return "GetTextAlign";
  case 0x01ad: return "GetTextCharacterExtra";
  case 0x01ae: return "GetTextCharset";
  case 0x01af: return "GetTextCharsetInfo";
  case 0x01b0: return "GetTextColor";
  case 0x01b1: return "GetTextExtentExPointA";
  case 0x01b2: return "GetTextExtentExPointI";
  case 0x01b3: return "GetTextExtentExPointW";
  case 0x01b4: return "GetTextExtentExPointWPri";
  case 0x01b5: return "GetTextExtentPoint32A";
  case 0x01b6: return "GetTextExtentPoint32W";
  case 0x01b7: return "GetTextExtentPointA";
  case 0x01b8: return "GetTextExtentPointI";
  case 0x01b9: return "GetTextExtentPointW";
  case 0x01ba: return "GetTextFaceA";
  case 0x01bb: return "GetTextFaceAliasW";
  case 0x01bc: return "GetTextFaceW";
  case 0x01bd: return "GetTextMetricsA";
  case 0x01be: return "GetTextMetricsW";
  case 0x01bf: return "GetTransform";
  case 0x01c0: return "GetViewportExtEx";
  case 0x01c1: return "GetViewportOrgEx";
  case 0x01c2: return "GetWinMetaFileBits";
  case 0x01c3: return "GetWindowExtEx";
  case 0x01c4: return "GetWindowOrgEx";
  case 0x01c5: return "GetWorldTransform";
  case 0x01c6: return "HT_Get8BPPFormatPalette";
  case 0x01c7: return "HT_Get8BPPMaskPalette";
  case 0x01c8: return "IntersectClipRect";
  case 0x01c9: return "InvertRgn";
  case 0x01ca: return "IsValidEnhMetaRecord";
  case 0x01cb: return "IsValidEnhMetaRecordOffExt";
  case 0x01cc: return "LPtoDP";
  case 0x01cd: return "LineDDA";
  case 0x01ce: return "LineTo";
  case 0x01cf: return "MaskBlt";
  case 0x01d0: return "MirrorRgn";
  case 0x01d1: return "ModifyWorldTransform";
  case 0x01d2: return "MoveToEx";
  case 0x01d3: return "NamedEscape";
  case 0x01d4: return "OffsetClipRgn";
  case 0x01d5: return "OffsetRgn";
  case 0x01d6: return "OffsetViewportOrgEx";
  case 0x01d7: return "OffsetWindowOrgEx";
  case 0x01d8: return "PATHOBJ_bEnum";
  case 0x01d9: return "PATHOBJ_bEnumClipLines";
  case 0x01da: return "PATHOBJ_vEnumStart";
  case 0x01db: return "PATHOBJ_vEnumStartClipLines";
  case 0x01dc: return "PATHOBJ_vGetBounds";
  case 0x01dd: return "PaintRgn";
  case 0x01de: return "PatBlt";
  case 0x01df: return "PathToRegion";
  case 0x01e0: return "Pie";
  case 0x01e1: return "PlayEnhMetaFile";
  case 0x01e2: return "PlayEnhMetaFileRecord";
  case 0x01e3: return "PlayMetaFile";
  case 0x01e4: return "PlayMetaFileRecord";
  case 0x01e5: return "PlgBlt";
  case 0x01e6: return "PolyBezier";
  case 0x01e7: return "PolyBezierTo";
  case 0x01e8: return "PolyDraw";
  case 0x01e9: return "PolyPatBlt";
  case 0x01ea: return "PolyPolygon";
  case 0x01eb: return "PolyPolyline";
  case 0x01ec: return "PolyTextOutA";
  case 0x01ed: return "PolyTextOutW";
  case 0x01ee: return "Polygon";
  case 0x01ef: return "Polyline";
  case 0x01f0: return "PolylineTo";
  case 0x01f1: return "PtInRegion";
  case 0x01f2: return "PtVisible";
  case 0x01f3: return "QueryFontAssocStatus";
  case 0x01f4: return "RealizePalette";
  case 0x01f5: return "RectInRegion";
  case 0x01f6: return "RectVisible";
  case 0x01f7: return "Rectangle";
  case 0x01f8: return "RemoveFontMemResourceEx";
  case 0x01f9: return "RemoveFontResourceA";
  case 0x01fa: return "RemoveFontResourceExA";
  case 0x01fb: return "RemoveFontResourceExW";
  case 0x01fc: return "RemoveFontResourceTracking";
  case 0x01fd: return "RemoveFontResourceW";
  case 0x01fe: return "ResetDCA";
  case 0x01ff: return "ResetDCW";
  case 0x0200: return "ResizePalette";
  case 0x0201: return "RestoreDC";
  case 0x0202: return "RoundRect";
  case 0x0203: return "STROBJ_bEnum";
  case 0x0204: return "STROBJ_bEnumPositionsOnly";
  case 0x0205: return "STROBJ_bGetAdvanceWidths";
  case 0x0206: return "STROBJ_dwGetCodePage";
  case 0x0207: return "STROBJ_vEnumStart";
  case 0x0208: return "SaveDC";
  case 0x0209: return "ScaleViewportExtEx";
  case 0x020a: return "ScaleWindowExtEx";
  case 0x020b: return "SelectBrushLocal";
  case 0x020c: return "SelectClipPath";
  case 0x020d: return "SelectClipRgn";
  case 0x020e: return "SelectFontLocal";
  case 0x020f: return "SelectObject";
  case 0x0210: return "SelectPalette";
  case 0x0211: return "SetAbortProc";
  case 0x0212: return "SetArcDirection";
  case 0x0213: return "SetBitmapAttributes";
  case 0x0214: return "SetBitmapBits";
  case 0x0215: return "SetBitmapDimensionEx";
  case 0x0216: return "SetBkColor";
  case 0x0217: return "SetBkMode";
  case 0x0218: return "SetBoundsRect";
  case 0x0219: return "SetBrushAttributes";
  case 0x021a: return "SetBrushOrgEx";
  case 0x021b: return "SetColorAdjustment";
  case 0x021c: return "SetColorSpace";
  case 0x021d: return "SetDCBrushColor";
  case 0x021e: return "SetDCPenColor";
  case 0x021f: return "SetDIBColorTable";
  case 0x0220: return "SetDIBits";
  case 0x0221: return "SetDIBitsToDevice";
  case 0x0222: return "SetDeviceGammaRamp";
  case 0x0223: return "SetEnhMetaFileBits";
  case 0x0224: return "SetFontEnumeration";
  case 0x0225: return "SetGraphicsMode";
  case 0x0226: return "SetICMMode";
  case 0x0227: return "SetICMProfileA";
  case 0x0228: return "SetICMProfileW";
  case 0x0229: return "SetLayout";
  case 0x022a: return "SetLayoutWidth";
  case 0x022b: return "SetMagicColors";
  case 0x022c: return "SetMapMode";
  case 0x022d: return "SetMapperFlags";
  case 0x022e: return "SetMetaFileBitsEx";
  case 0x022f: return "SetMetaRgn";
  case 0x0230: return "SetMiterLimit";
  case 0x0231: return "SetPaletteEntries";
  case 0x0232: return "SetPixel";
  case 0x0233: return "SetPixelFormat";
  case 0x0234: return "SetPixelV";
  case 0x0235: return "SetPolyFillMode";
  case 0x0236: return "SetROP2";
  case 0x0237: return "SetRectRgn";
  case 0x0238: return "SetRelAbs";
  case 0x0239: return "SetStretchBltMode";
  case 0x023a: return "SetSystemPaletteUse";
  case 0x023b: return "SetTextAlign";
  case 0x023c: return "SetTextCharacterExtra";
  case 0x023d: return "SetTextColor";
  case 0x023e: return "SetTextJustification";
  case 0x023f: return "SetViewportExtEx";
  case 0x0240: return "SetViewportOrgEx";
  case 0x0241: return "SetVirtualResolution";
  case 0x0242: return "SetWinMetaFileBits";
  case 0x0243: return "SetWindowExtEx";
  case 0x0244: return "SetWindowOrgEx";
  case 0x0245: return "SetWorldTransform";
  case 0x0246: return "StartDocA";
  case 0x0247: return "StartDocW";
  case 0x0248: return "StartFormPage";
  case 0x0249: return "StartPage";
  case 0x024a: return "StretchBlt";
  case 0x024b: return "StretchDIBits";
  case 0x024c: return "StrokeAndFillPath";
  case 0x024d: return "StrokePath";
  case 0x024e: return "SwapBuffers";
  case 0x024f: return "TextOutA";
  case 0x0250: return "TextOutW";
  case 0x0251: return "TranslateCharsetInfo";
  case 0x0252: return "UnloadNetworkFonts";
  case 0x0253: return "UnrealizeObject";
  case 0x0254: return "UpdateColors";
  case 0x0255: return "UpdateICMRegKeyA";
  case 0x0256: return "UpdateICMRegKeyW";
  case 0x0257: return "WidenPath";
  case 0x0258: return "XFORMOBJ_bApplyXform";
  case 0x0259: return "XFORMOBJ_iGetXform";
  case 0x025a: return "XLATEOBJ_cGetPalette";
  case 0x025b: return "XLATEOBJ_hGetColorTransform";
  case 0x025c: return "XLATEOBJ_iXlate";
  case 0x025d: return "XLATEOBJ_piVector";
  case 0x025e: return "bInitSystemAndFontsDirectoriesW";
  case 0x025f: return "bMakePathNameW";
  case 0x0260: return "cGetTTFFromFOT";
  case 0x0261: return "gdiPlaySpoolStream";
  }
  return nullptr;
}


}
}

#endif

