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
#include "pyPE.hpp"
#define LIEF_PE_FORCE_UNDEF
#include "LIEF/PE/undef.h"
#include "LIEF/PE/enums.hpp"
#include "LIEF/PE/EnumToString.hpp"
#include "enums_wrapper.hpp"

#define PY_ENUM(x) to_string(x), x

namespace LIEF::PE::py {
void init_enums(nb::module_& m) {

  enum_<PE_TYPE>(m, "PE_TYPE")
    .value(PY_ENUM(PE_TYPE::PE32))
    .value(PY_ENUM(PE_TYPE::PE32_PLUS));

  enum_<PE_SECTION_TYPES>(m, "SECTION_TYPES")
    .value(PY_ENUM(PE_SECTION_TYPES::TEXT))
    .value(PY_ENUM(PE_SECTION_TYPES::TLS))
    .value(PY_ENUM(PE_SECTION_TYPES::IMPORT))
    .value(PY_ENUM(PE_SECTION_TYPES::DATA))
    .value(PY_ENUM(PE_SECTION_TYPES::BSS))
    .value(PY_ENUM(PE_SECTION_TYPES::RESOURCE))
    .value(PY_ENUM(PE_SECTION_TYPES::RELOCATION))
    .value(PY_ENUM(PE_SECTION_TYPES::EXPORT))
    .value(PY_ENUM(PE_SECTION_TYPES::UNKNOWN));


  enum_<SYMBOL_BASE_TYPES>(m, "SYMBOL_BASE_TYPES")
    .value(PY_ENUM(SYMBOL_BASE_TYPES::IMAGE_SYM_TYPE_NULL))
    .value(PY_ENUM(SYMBOL_BASE_TYPES::IMAGE_SYM_TYPE_VOID))
    .value(PY_ENUM(SYMBOL_BASE_TYPES::IMAGE_SYM_TYPE_CHAR))
    .value(PY_ENUM(SYMBOL_BASE_TYPES::IMAGE_SYM_TYPE_SHORT))
    .value(PY_ENUM(SYMBOL_BASE_TYPES::IMAGE_SYM_TYPE_INT))
    .value(PY_ENUM(SYMBOL_BASE_TYPES::IMAGE_SYM_TYPE_LONG))
    .value(PY_ENUM(SYMBOL_BASE_TYPES::IMAGE_SYM_TYPE_FLOAT))
    .value(PY_ENUM(SYMBOL_BASE_TYPES::IMAGE_SYM_TYPE_DOUBLE))
    .value(PY_ENUM(SYMBOL_BASE_TYPES::IMAGE_SYM_TYPE_STRUCT))
    .value(PY_ENUM(SYMBOL_BASE_TYPES::IMAGE_SYM_TYPE_UNION))
    .value(PY_ENUM(SYMBOL_BASE_TYPES::IMAGE_SYM_TYPE_ENUM))
    .value(PY_ENUM(SYMBOL_BASE_TYPES::IMAGE_SYM_TYPE_MOE))
    .value(PY_ENUM(SYMBOL_BASE_TYPES::IMAGE_SYM_TYPE_BYTE))
    .value(PY_ENUM(SYMBOL_BASE_TYPES::IMAGE_SYM_TYPE_WORD))
    .value(PY_ENUM(SYMBOL_BASE_TYPES::IMAGE_SYM_TYPE_UINT))
    .value(PY_ENUM(SYMBOL_BASE_TYPES::IMAGE_SYM_TYPE_DWORD));


  enum_<SYMBOL_COMPLEX_TYPES>(m, "SYMBOL_COMPLEX_TYPES")
    .value(PY_ENUM(SYMBOL_COMPLEX_TYPES::IMAGE_SYM_DTYPE_NULL))
    .value(PY_ENUM(SYMBOL_COMPLEX_TYPES::IMAGE_SYM_DTYPE_POINTER))
    .value(PY_ENUM(SYMBOL_COMPLEX_TYPES::IMAGE_SYM_DTYPE_FUNCTION))
    .value(PY_ENUM(SYMBOL_COMPLEX_TYPES::IMAGE_SYM_DTYPE_ARRAY))
    .value(PY_ENUM(SYMBOL_COMPLEX_TYPES::SCT_COMPLEX_TYPE_SHIFT));


  enum_<SYMBOL_SECTION_NUMBER>(m, "SYMBOL_SECTION_NUMBER")
    .value(PY_ENUM(SYMBOL_SECTION_NUMBER::IMAGE_SYM_DEBUG))
    .value(PY_ENUM(SYMBOL_SECTION_NUMBER::IMAGE_SYM_ABSOLUTE))
    .value(PY_ENUM(SYMBOL_SECTION_NUMBER::IMAGE_SYM_UNDEFINED));


  enum_<SYMBOL_STORAGE_CLASS>(m, "SYMBOL_STORAGE_CLASS")
    .value(PY_ENUM(SYMBOL_STORAGE_CLASS::IMAGE_SYM_CLASS_END_OF_FUNCTION))
    .value(PY_ENUM(SYMBOL_STORAGE_CLASS::IMAGE_SYM_CLASS_NULL))
    .value(PY_ENUM(SYMBOL_STORAGE_CLASS::IMAGE_SYM_CLASS_AUTOMATIC))
    .value(PY_ENUM(SYMBOL_STORAGE_CLASS::IMAGE_SYM_CLASS_EXTERNAL))
    .value(PY_ENUM(SYMBOL_STORAGE_CLASS::IMAGE_SYM_CLASS_STATIC))
    .value(PY_ENUM(SYMBOL_STORAGE_CLASS::IMAGE_SYM_CLASS_REGISTER))
    .value(PY_ENUM(SYMBOL_STORAGE_CLASS::IMAGE_SYM_CLASS_EXTERNAL_DEF))
    .value(PY_ENUM(SYMBOL_STORAGE_CLASS::IMAGE_SYM_CLASS_LABEL))
    .value(PY_ENUM(SYMBOL_STORAGE_CLASS::IMAGE_SYM_CLASS_UNDEFINED_LABEL))
    .value(PY_ENUM(SYMBOL_STORAGE_CLASS::IMAGE_SYM_CLASS_MEMBER_OF_STRUCT))
    .value(PY_ENUM(SYMBOL_STORAGE_CLASS::IMAGE_SYM_CLASS_UNION_TAG))
    .value(PY_ENUM(SYMBOL_STORAGE_CLASS::IMAGE_SYM_CLASS_TYPE_DEFINITION))
    .value(PY_ENUM(SYMBOL_STORAGE_CLASS::IMAGE_SYM_CLASS_UNDEFINED_STATIC))
    .value(PY_ENUM(SYMBOL_STORAGE_CLASS::IMAGE_SYM_CLASS_ENUM_TAG))
    .value(PY_ENUM(SYMBOL_STORAGE_CLASS::IMAGE_SYM_CLASS_MEMBER_OF_ENUM))
    .value(PY_ENUM(SYMBOL_STORAGE_CLASS::IMAGE_SYM_CLASS_REGISTER_PARAM))
    .value(PY_ENUM(SYMBOL_STORAGE_CLASS::IMAGE_SYM_CLASS_BIT_FIELD))
    .value(PY_ENUM(SYMBOL_STORAGE_CLASS::IMAGE_SYM_CLASS_BLOCK))
    .value(PY_ENUM(SYMBOL_STORAGE_CLASS::IMAGE_SYM_CLASS_FUNCTION))
    .value(PY_ENUM(SYMBOL_STORAGE_CLASS::IMAGE_SYM_CLASS_END_OF_STRUCT))
    .value(PY_ENUM(SYMBOL_STORAGE_CLASS::IMAGE_SYM_CLASS_FILE))
    .value(PY_ENUM(SYMBOL_STORAGE_CLASS::IMAGE_SYM_CLASS_SECTION))
    .value(PY_ENUM(SYMBOL_STORAGE_CLASS::IMAGE_SYM_CLASS_WEAK_EXTERNAL))
    .value(PY_ENUM(SYMBOL_STORAGE_CLASS::IMAGE_SYM_CLASS_CLR_TOKEN));

  enum_<EXTENDED_WINDOW_STYLES>(m, "EXTENDED_WINDOW_STYLES")
    .value(PY_ENUM(EXTENDED_WINDOW_STYLES::WS_EX_DLGMODALFRAME))
    .value(PY_ENUM(EXTENDED_WINDOW_STYLES::WS_EX_NOPARENTNOTIFY))
    .value(PY_ENUM(EXTENDED_WINDOW_STYLES::WS_EX_TOPMOST))
    .value(PY_ENUM(EXTENDED_WINDOW_STYLES::WS_EX_ACCEPTFILES))
    .value(PY_ENUM(EXTENDED_WINDOW_STYLES::WS_EX_TRANSPARENT))
    .value(PY_ENUM(EXTENDED_WINDOW_STYLES::WS_EX_MDICHILD))
    .value(PY_ENUM(EXTENDED_WINDOW_STYLES::WS_EX_TOOLWINDOW))
    .value(PY_ENUM(EXTENDED_WINDOW_STYLES::WS_EX_WINDOWEDGE))
    .value(PY_ENUM(EXTENDED_WINDOW_STYLES::WS_EX_CLIENTEDGE))
    .value(PY_ENUM(EXTENDED_WINDOW_STYLES::WS_EX_CONTEXTHELP))
    .value(PY_ENUM(EXTENDED_WINDOW_STYLES::WS_EX_RIGHT))
    .value(PY_ENUM(EXTENDED_WINDOW_STYLES::WS_EX_LEFT))
    .value(PY_ENUM(EXTENDED_WINDOW_STYLES::WS_EX_RTLREADING))
    .value("LTRREADING", EXTENDED_WINDOW_STYLES::WS_EX_LTRREADING)
    .value(PY_ENUM(EXTENDED_WINDOW_STYLES::WS_EX_LEFTSCROLLBAR))
    .value("RIGHTSCROLLBAR", EXTENDED_WINDOW_STYLES::WS_EX_RIGHTSCROLLBAR)
    .value(PY_ENUM(EXTENDED_WINDOW_STYLES::WS_EX_CONTROLPARENT))
    .value(PY_ENUM(EXTENDED_WINDOW_STYLES::WS_EX_STATICEDGE))
    .value(PY_ENUM(EXTENDED_WINDOW_STYLES::WS_EX_APPWINDOW));

  enum_<WINDOW_STYLES>(m, "WINDOW_STYLES")
    .value(PY_ENUM(WINDOW_STYLES::WS_OVERLAPPED))
    .value(PY_ENUM(WINDOW_STYLES::WS_POPUP))
    .value(PY_ENUM(WINDOW_STYLES::WS_CHILD))
    .value(PY_ENUM(WINDOW_STYLES::WS_MINIMIZE))
    .value(PY_ENUM(WINDOW_STYLES::WS_VISIBLE))
    .value(PY_ENUM(WINDOW_STYLES::WS_DISABLED))
    .value(PY_ENUM(WINDOW_STYLES::WS_CLIPSIBLINGS))
    .value(PY_ENUM(WINDOW_STYLES::WS_CLIPCHILDREN))
    .value(PY_ENUM(WINDOW_STYLES::WS_MAXIMIZE))
    .value(PY_ENUM(WINDOW_STYLES::WS_CAPTION))
    .value(PY_ENUM(WINDOW_STYLES::WS_BORDER))
    .value(PY_ENUM(WINDOW_STYLES::WS_DLGFRAME))
    .value(PY_ENUM(WINDOW_STYLES::WS_VSCROLL))
    .value(PY_ENUM(WINDOW_STYLES::WS_HSCROLL))
    .value(PY_ENUM(WINDOW_STYLES::WS_SYSMENU))
    .value(PY_ENUM(WINDOW_STYLES::WS_THICKFRAME))
    .value("GROUP", WINDOW_STYLES::WS_GROUP)
    .value("TABSTOP", WINDOW_STYLES::WS_TABSTOP)
    .value(PY_ENUM(WINDOW_STYLES::WS_MINIMIZEBOX))
    .value(PY_ENUM(WINDOW_STYLES::WS_MAXIMIZEBOX));


  enum_<DIALOG_BOX_STYLES>(m, "DIALOG_BOX_STYLES")
    .value(PY_ENUM(DIALOG_BOX_STYLES::DS_ABSALIGN))
    .value(PY_ENUM(DIALOG_BOX_STYLES::DS_SYSMODAL))
    .value(PY_ENUM(DIALOG_BOX_STYLES::DS_LOCALEDIT))
    .value(PY_ENUM(DIALOG_BOX_STYLES::DS_SETFONT))
    .value(PY_ENUM(DIALOG_BOX_STYLES::DS_MODALFRAME))
    .value(PY_ENUM(DIALOG_BOX_STYLES::DS_NOIDLEMSG))
    .value(PY_ENUM(DIALOG_BOX_STYLES::DS_SETFOREGROUND))
    .value(PY_ENUM(DIALOG_BOX_STYLES::DS_3DLOOK))
    .value(PY_ENUM(DIALOG_BOX_STYLES::DS_FIXEDSYS))
    .value(PY_ENUM(DIALOG_BOX_STYLES::DS_NOFAILCREATE))
    .value(PY_ENUM(DIALOG_BOX_STYLES::DS_CONTROL))
    .value(PY_ENUM(DIALOG_BOX_STYLES::DS_CENTER))
    .value(PY_ENUM(DIALOG_BOX_STYLES::DS_CENTERMOUSE))
    .value(PY_ENUM(DIALOG_BOX_STYLES::DS_CONTEXTHELP))
    .value(PY_ENUM(DIALOG_BOX_STYLES::DS_SHELLFONT));


  enum_<FIXED_VERSION_OS>(m, "FIXED_VERSION_OS")
    .value(PY_ENUM(FIXED_VERSION_OS::VOS_UNKNOWN))
    .value(PY_ENUM(FIXED_VERSION_OS::VOS_DOS))
    .value(PY_ENUM(FIXED_VERSION_OS::VOS_NT))
    .value(PY_ENUM(FIXED_VERSION_OS::VOS__WINDOWS16))
    .value(PY_ENUM(FIXED_VERSION_OS::VOS__WINDOWS32))
    .value(PY_ENUM(FIXED_VERSION_OS::VOS_OS216))
    .value(PY_ENUM(FIXED_VERSION_OS::VOS_OS232))
    .value(PY_ENUM(FIXED_VERSION_OS::VOS__PM16))
    .value(PY_ENUM(FIXED_VERSION_OS::VOS__PM32))
    .value(PY_ENUM(FIXED_VERSION_OS::VOS_DOS_WINDOWS16))
    .value(PY_ENUM(FIXED_VERSION_OS::VOS_DOS_WINDOWS32))
    .value(PY_ENUM(FIXED_VERSION_OS::VOS_NT_WINDOWS32))
    .value(PY_ENUM(FIXED_VERSION_OS::VOS_OS216_PM16))
    .value(PY_ENUM(FIXED_VERSION_OS::VOS_OS232_PM32));

  enum_<FIXED_VERSION_FILE_FLAGS>(m, "FIXED_VERSION_FILE_FLAGS")
    .value(PY_ENUM(FIXED_VERSION_FILE_FLAGS::VS_FF_DEBUG))
    .value(PY_ENUM(FIXED_VERSION_FILE_FLAGS::VS_FF_INFOINFERRED))
    .value(PY_ENUM(FIXED_VERSION_FILE_FLAGS::VS_FF_PATCHED))
    .value(PY_ENUM(FIXED_VERSION_FILE_FLAGS::VS_FF_PRERELEASE))
    .value(PY_ENUM(FIXED_VERSION_FILE_FLAGS::VS_FF_PRIVATEBUILD))
    .value(PY_ENUM(FIXED_VERSION_FILE_FLAGS::VS_FF_SPECIALBUILD));


  enum_<FIXED_VERSION_FILE_TYPES>(m, "FIXED_VERSION_FILE_TYPES")
    .value(PY_ENUM(FIXED_VERSION_FILE_TYPES::VFT_APP))
    .value(PY_ENUM(FIXED_VERSION_FILE_TYPES::VFT_DLL))
    .value(PY_ENUM(FIXED_VERSION_FILE_TYPES::VFT_DRV))
    .value(PY_ENUM(FIXED_VERSION_FILE_TYPES::VFT_FONT))
    .value(PY_ENUM(FIXED_VERSION_FILE_TYPES::VFT_STATIC_LIB))
    .value(PY_ENUM(FIXED_VERSION_FILE_TYPES::VFT_UNKNOWN))
    .value(PY_ENUM(FIXED_VERSION_FILE_TYPES::VFT_VXD));


  enum_<FIXED_VERSION_FILE_SUB_TYPES>(m, "FIXED_VERSION_FILE_SUB_TYPES")
    .value(PY_ENUM(FIXED_VERSION_FILE_SUB_TYPES::VFT2_DRV_COMM))
    .value(PY_ENUM(FIXED_VERSION_FILE_SUB_TYPES::VFT2_DRV_DISPLAY))
    .value(PY_ENUM(FIXED_VERSION_FILE_SUB_TYPES::VFT2_DRV_INSTALLABLE))
    .value(PY_ENUM(FIXED_VERSION_FILE_SUB_TYPES::VFT2_DRV_KEYBOARD))
    .value(PY_ENUM(FIXED_VERSION_FILE_SUB_TYPES::VFT2_DRV_LANGUAGE))
    .value(PY_ENUM(FIXED_VERSION_FILE_SUB_TYPES::VFT2_DRV_MOUSE))
    .value(PY_ENUM(FIXED_VERSION_FILE_SUB_TYPES::VFT2_DRV_NETWORK))
    .value(PY_ENUM(FIXED_VERSION_FILE_SUB_TYPES::VFT2_DRV_PRINTER))
    .value(PY_ENUM(FIXED_VERSION_FILE_SUB_TYPES::VFT2_DRV_SOUND))
    .value(PY_ENUM(FIXED_VERSION_FILE_SUB_TYPES::VFT2_DRV_SYSTEM))
    .value(PY_ENUM(FIXED_VERSION_FILE_SUB_TYPES::VFT2_DRV_VERSIONED_PRINTER))
    .value("FONT_RASTER", FIXED_VERSION_FILE_SUB_TYPES::VFT2_FONT_RASTER)
    .value("FONT_TRUETYPE", FIXED_VERSION_FILE_SUB_TYPES::VFT2_FONT_TRUETYPE)
    .value("FONT_VECTOR", FIXED_VERSION_FILE_SUB_TYPES::VFT2_FONT_VECTOR)
    .value(PY_ENUM(FIXED_VERSION_FILE_SUB_TYPES::VFT2_UNKNOWN));

  enum_<CODE_PAGES>(m, "CODE_PAGES")
    .value(PY_ENUM(CODE_PAGES::CP_IBM037))
    .value(PY_ENUM(CODE_PAGES::CP_IBM437))
    .value(PY_ENUM(CODE_PAGES::CP_IBM500))
    .value(PY_ENUM(CODE_PAGES::CP_ASMO_708))
    .value(PY_ENUM(CODE_PAGES::CP_DOS_720))
    .value(PY_ENUM(CODE_PAGES::CP_IBM737))
    .value(PY_ENUM(CODE_PAGES::CP_IBM775))
    .value(PY_ENUM(CODE_PAGES::CP_IBM850))
    .value(PY_ENUM(CODE_PAGES::CP_IBM852))
    .value(PY_ENUM(CODE_PAGES::CP_IBM855))
    .value(PY_ENUM(CODE_PAGES::CP_IBM857))
    .value(PY_ENUM(CODE_PAGES::CP_IBM00858))
    .value(PY_ENUM(CODE_PAGES::CP_IBM860))
    .value(PY_ENUM(CODE_PAGES::CP_IBM861))
    .value(PY_ENUM(CODE_PAGES::CP_DOS_862))
    .value(PY_ENUM(CODE_PAGES::CP_IBM863))
    .value(PY_ENUM(CODE_PAGES::CP_IBM864))
    .value(PY_ENUM(CODE_PAGES::CP_IBM865))
    .value(PY_ENUM(CODE_PAGES::CP_CP866))
    .value(PY_ENUM(CODE_PAGES::CP_IBM869))
    .value(PY_ENUM(CODE_PAGES::CP_IBM870))
    .value(PY_ENUM(CODE_PAGES::CP_WINDOWS_874))
    .value(PY_ENUM(CODE_PAGES::CP_CP875))
    .value(PY_ENUM(CODE_PAGES::CP_SHIFT_JIS))
    .value(PY_ENUM(CODE_PAGES::CP_GB2312))
    .value(PY_ENUM(CODE_PAGES::CP_KS_C_5601_1987))
    .value(PY_ENUM(CODE_PAGES::CP_BIG5))
    .value(PY_ENUM(CODE_PAGES::CP_IBM1026))
    .value(PY_ENUM(CODE_PAGES::CP_IBM01047))
    .value(PY_ENUM(CODE_PAGES::CP_IBM01140))
    .value(PY_ENUM(CODE_PAGES::CP_IBM01141))
    .value(PY_ENUM(CODE_PAGES::CP_IBM01142))
    .value(PY_ENUM(CODE_PAGES::CP_IBM01143))
    .value(PY_ENUM(CODE_PAGES::CP_IBM01144))
    .value(PY_ENUM(CODE_PAGES::CP_IBM01145))
    .value(PY_ENUM(CODE_PAGES::CP_IBM01146))
    .value(PY_ENUM(CODE_PAGES::CP_IBM01147))
    .value(PY_ENUM(CODE_PAGES::CP_IBM01148))
    .value(PY_ENUM(CODE_PAGES::CP_IBM01149))
    .value(PY_ENUM(CODE_PAGES::CP_UTF_16))
    .value(PY_ENUM(CODE_PAGES::CP_UNICODEFFFE))
    .value(PY_ENUM(CODE_PAGES::CP_WINDOWS_1250))
    .value(PY_ENUM(CODE_PAGES::CP_WINDOWS_1251))
    .value(PY_ENUM(CODE_PAGES::CP_WINDOWS_1252))
    .value(PY_ENUM(CODE_PAGES::CP_WINDOWS_1253))
    .value(PY_ENUM(CODE_PAGES::CP_WINDOWS_1254))
    .value(PY_ENUM(CODE_PAGES::CP_WINDOWS_1255))
    .value(PY_ENUM(CODE_PAGES::CP_WINDOWS_1256))
    .value(PY_ENUM(CODE_PAGES::CP_WINDOWS_1257))
    .value(PY_ENUM(CODE_PAGES::CP_WINDOWS_1258))
    .value(PY_ENUM(CODE_PAGES::CP_JOHAB))
    .value(PY_ENUM(CODE_PAGES::CP_MACINTOSH))
    .value(PY_ENUM(CODE_PAGES::CP_X_MAC_JAPANESE))
    .value(PY_ENUM(CODE_PAGES::CP_X_MAC_CHINESETRAD))
    .value(PY_ENUM(CODE_PAGES::CP_X_MAC_KOREAN))
    .value(PY_ENUM(CODE_PAGES::CP_X_MAC_ARABIC))
    .value(PY_ENUM(CODE_PAGES::CP_X_MAC_HEBREW))
    .value(PY_ENUM(CODE_PAGES::CP_X_MAC_GREEK))
    .value(PY_ENUM(CODE_PAGES::CP_X_MAC_CYRILLIC))
    .value(PY_ENUM(CODE_PAGES::CP_X_MAC_CHINESESIMP))
    .value(PY_ENUM(CODE_PAGES::CP_X_MAC_ROMANIAN))
    .value(PY_ENUM(CODE_PAGES::CP_X_MAC_UKRAINIAN))
    .value(PY_ENUM(CODE_PAGES::CP_X_MAC_THAI))
    .value(PY_ENUM(CODE_PAGES::CP_X_MAC_CE))
    .value(PY_ENUM(CODE_PAGES::CP_X_MAC_ICELANDIC))
    .value(PY_ENUM(CODE_PAGES::CP_X_MAC_TURKISH))
    .value(PY_ENUM(CODE_PAGES::CP_X_MAC_CROATIAN))
    .value(PY_ENUM(CODE_PAGES::CP_UTF_32))
    .value(PY_ENUM(CODE_PAGES::CP_UTF_32BE))
    .value(PY_ENUM(CODE_PAGES::CP_X_CHINESE_CNS))
    .value(PY_ENUM(CODE_PAGES::CP_X_CP20001))
    .value(PY_ENUM(CODE_PAGES::CP_X_CHINESE_ETEN))
    .value(PY_ENUM(CODE_PAGES::CP_X_CP20003))
    .value(PY_ENUM(CODE_PAGES::CP_X_CP20004))
    .value(PY_ENUM(CODE_PAGES::CP_X_CP20005))
    .value(PY_ENUM(CODE_PAGES::CP_X_IA5))
    .value(PY_ENUM(CODE_PAGES::CP_X_IA5_GERMAN))
    .value(PY_ENUM(CODE_PAGES::CP_X_IA5_SWEDISH))
    .value(PY_ENUM(CODE_PAGES::CP_X_IA5_NORWEGIAN))
    .value(PY_ENUM(CODE_PAGES::CP_US_ASCII))
    .value(PY_ENUM(CODE_PAGES::CP_X_CP20261))
    .value(PY_ENUM(CODE_PAGES::CP_X_CP20269))
    .value(PY_ENUM(CODE_PAGES::CP_IBM273))
    .value(PY_ENUM(CODE_PAGES::CP_IBM277))
    .value(PY_ENUM(CODE_PAGES::CP_IBM278))
    .value(PY_ENUM(CODE_PAGES::CP_IBM280))
    .value(PY_ENUM(CODE_PAGES::CP_IBM284))
    .value(PY_ENUM(CODE_PAGES::CP_IBM285))
    .value(PY_ENUM(CODE_PAGES::CP_IBM290))
    .value(PY_ENUM(CODE_PAGES::CP_IBM297))
    .value(PY_ENUM(CODE_PAGES::CP_IBM420))
    .value(PY_ENUM(CODE_PAGES::CP_IBM423))
    .value(PY_ENUM(CODE_PAGES::CP_IBM424))
    .value(PY_ENUM(CODE_PAGES::CP_X_EBCDIC_KOREANEXTENDED))
    .value(PY_ENUM(CODE_PAGES::CP_IBM_THAI))
    .value(PY_ENUM(CODE_PAGES::CP_KOI8_R))
    .value(PY_ENUM(CODE_PAGES::CP_IBM871))
    .value(PY_ENUM(CODE_PAGES::CP_IBM880))
    .value(PY_ENUM(CODE_PAGES::CP_IBM905))
    .value(PY_ENUM(CODE_PAGES::CP_IBM00924))
    .value(PY_ENUM(CODE_PAGES::CP_EUC_JP_JIS))
    .value(PY_ENUM(CODE_PAGES::CP_X_CP20936))
    .value(PY_ENUM(CODE_PAGES::CP_X_CP20949))
    .value(PY_ENUM(CODE_PAGES::CP_CP1025))
    .value(PY_ENUM(CODE_PAGES::CP_KOI8_U))
    .value(PY_ENUM(CODE_PAGES::CP_ISO_8859_1))
    .value(PY_ENUM(CODE_PAGES::CP_ISO_8859_2))
    .value(PY_ENUM(CODE_PAGES::CP_ISO_8859_3))
    .value(PY_ENUM(CODE_PAGES::CP_ISO_8859_4))
    .value(PY_ENUM(CODE_PAGES::CP_ISO_8859_5))
    .value(PY_ENUM(CODE_PAGES::CP_ISO_8859_6))
    .value(PY_ENUM(CODE_PAGES::CP_ISO_8859_7))
    .value(PY_ENUM(CODE_PAGES::CP_ISO_8859_8))
    .value(PY_ENUM(CODE_PAGES::CP_ISO_8859_9))
    .value(PY_ENUM(CODE_PAGES::CP_ISO_8859_13))
    .value(PY_ENUM(CODE_PAGES::CP_ISO_8859_15))
    .value(PY_ENUM(CODE_PAGES::CP_X_EUROPA))
    .value(PY_ENUM(CODE_PAGES::CP_ISO_8859_8_I))
    .value(PY_ENUM(CODE_PAGES::CP_ISO_2022_JP))
    .value(PY_ENUM(CODE_PAGES::CP_CSISO2022JP))
    .value(PY_ENUM(CODE_PAGES::CP_ISO_2022_JP_JIS))
    .value(PY_ENUM(CODE_PAGES::CP_ISO_2022_KR))
    .value(PY_ENUM(CODE_PAGES::CP_X_CP50227))
    .value(PY_ENUM(CODE_PAGES::CP_EUC_JP))
    .value(PY_ENUM(CODE_PAGES::CP_EUC_CN))
    .value(PY_ENUM(CODE_PAGES::CP_EUC_KR))
    .value(PY_ENUM(CODE_PAGES::CP_HZ_GB_2312))
    .value(PY_ENUM(CODE_PAGES::CP_GB18030))
    .value(PY_ENUM(CODE_PAGES::CP_X_ISCII_DE))
    .value(PY_ENUM(CODE_PAGES::CP_X_ISCII_BE))
    .value(PY_ENUM(CODE_PAGES::CP_X_ISCII_TA))
    .value(PY_ENUM(CODE_PAGES::CP_X_ISCII_TE))
    .value(PY_ENUM(CODE_PAGES::CP_X_ISCII_AS))
    .value(PY_ENUM(CODE_PAGES::CP_X_ISCII_OR))
    .value(PY_ENUM(CODE_PAGES::CP_X_ISCII_KA))
    .value(PY_ENUM(CODE_PAGES::CP_X_ISCII_MA))
    .value(PY_ENUM(CODE_PAGES::CP_X_ISCII_GU))
    .value(PY_ENUM(CODE_PAGES::CP_X_ISCII_PA))
    .value(PY_ENUM(CODE_PAGES::CP_UTF_7))
    .value(PY_ENUM(CODE_PAGES::CP_UTF_8));

  enum_<ACCELERATOR_FLAGS>(m, "ACCELERATOR_FLAGS", nb::is_flag())
    .value(PY_ENUM(ACCELERATOR_FLAGS::FVIRTKEY))
    .value(PY_ENUM(ACCELERATOR_FLAGS::FNOINVERT))
    .value(PY_ENUM(ACCELERATOR_FLAGS::FSHIFT))
    .value(PY_ENUM(ACCELERATOR_FLAGS::FCONTROL))
    .value(PY_ENUM(ACCELERATOR_FLAGS::FALT))
    .value(PY_ENUM(ACCELERATOR_FLAGS::END));

  enum_<ACCELERATOR_VK_CODES>(m, "ACCELERATOR_VK_CODES")
    .value("VK_LBUTTON"             , ACCELERATOR_VK_CODES::VK_LBUTTON)
    .value("VK_RBUTTON"             , ACCELERATOR_VK_CODES::VK_RBUTTON)
    .value("VK_CANCEL"              , ACCELERATOR_VK_CODES::VK_CANCEL)
    .value("VK_MBUTTON"             , ACCELERATOR_VK_CODES::VK_MBUTTON)
    .value("VK_XBUTTON1"            , ACCELERATOR_VK_CODES::VK_XBUTTON1)
    .value("VK_XBUTTON2"            , ACCELERATOR_VK_CODES::VK_XBUTTON2)
    .value("VK_BACK"                , ACCELERATOR_VK_CODES::VK_BACK)
    .value("VK_TAB"                 , ACCELERATOR_VK_CODES::VK_TAB)
    .value("VK_CLEAR"               , ACCELERATOR_VK_CODES::VK_CLEAR)
    .value("VK_RETURN"              , ACCELERATOR_VK_CODES::VK_RETURN)
    .value("VK_SHIFT"               , ACCELERATOR_VK_CODES::VK_SHIFT)
    .value("VK_CONTROL"             , ACCELERATOR_VK_CODES::VK_CONTROL)
    .value("VK_MENU"                , ACCELERATOR_VK_CODES::VK_MENU)
    .value("VK_PAUSE"               , ACCELERATOR_VK_CODES::VK_PAUSE)
    .value("VK_CAPITAL"             , ACCELERATOR_VK_CODES::VK_CAPITAL)
    .value("VK_KANA"                , ACCELERATOR_VK_CODES::VK_KANA)
    .value("VK_HANGUEL"             , ACCELERATOR_VK_CODES::VK_HANGUEL)
    .value("VK_HANGUL"              , ACCELERATOR_VK_CODES::VK_HANGUL)
    .value("VK_IME_ON"              , ACCELERATOR_VK_CODES::VK_IME_ON)
    .value("VK_JUNJA"               , ACCELERATOR_VK_CODES::VK_JUNJA)
    .value("VK_FINAL"               , ACCELERATOR_VK_CODES::VK_FINAL)
    .value("VK_HANJA"               , ACCELERATOR_VK_CODES::VK_HANJA)
    .value("VK_KANJI"               , ACCELERATOR_VK_CODES::VK_KANJI)
    .value("VK_IME_OFF"             , ACCELERATOR_VK_CODES::VK_IME_OFF)
    .value("VK_ESCAPE"              , ACCELERATOR_VK_CODES::VK_ESCAPE)
    .value("VK_CONVERT"             , ACCELERATOR_VK_CODES::VK_CONVERT)
    .value("VK_NONCONVERT"          , ACCELERATOR_VK_CODES::VK_NONCONVERT)
    .value("VK_ACCEPT"              , ACCELERATOR_VK_CODES::VK_ACCEPT)
    .value("VK_MODECHANGE"          , ACCELERATOR_VK_CODES::VK_MODECHANGE)
    .value("VK_SPACE"               , ACCELERATOR_VK_CODES::VK_SPACE)
    .value("VK_PRIOR"               , ACCELERATOR_VK_CODES::VK_PRIOR)
    .value("VK_NEXT"                , ACCELERATOR_VK_CODES::VK_NEXT)
    .value("VK_END"                 , ACCELERATOR_VK_CODES::VK_END)
    .value("VK_HOME"                , ACCELERATOR_VK_CODES::VK_HOME)
    .value("VK_LEFT"                , ACCELERATOR_VK_CODES::VK_LEFT)
    .value("VK_UP"                  , ACCELERATOR_VK_CODES::VK_UP)
    .value("VK_RIGHT"               , ACCELERATOR_VK_CODES::VK_RIGHT)
    .value("VK_DOWN"                , ACCELERATOR_VK_CODES::VK_DOWN)
    .value("VK_SELECT"              , ACCELERATOR_VK_CODES::VK_SELECT)
    .value("VK_PRINT"               , ACCELERATOR_VK_CODES::VK_PRINT)
    .value("VK_EXECUTE"             , ACCELERATOR_VK_CODES::VK_EXECUTE)
    .value("VK_SNAPSHOT"            , ACCELERATOR_VK_CODES::VK_SNAPSHOT)
    .value("VK_INSERT"              , ACCELERATOR_VK_CODES::VK_INSERT)
    .value("VK_DELETE"              , ACCELERATOR_VK_CODES::VK_DELETE)
    .value("VK_HELP"                , ACCELERATOR_VK_CODES::VK_HELP)
    .value("VK_0"                   , ACCELERATOR_VK_CODES::VK_0)
    .value("VK_1"                   , ACCELERATOR_VK_CODES::VK_1)
    .value("VK_2"                   , ACCELERATOR_VK_CODES::VK_2)
    .value("VK_3"                   , ACCELERATOR_VK_CODES::VK_3)
    .value("VK_4"                   , ACCELERATOR_VK_CODES::VK_4)
    .value("VK_5"                   , ACCELERATOR_VK_CODES::VK_5)
    .value("VK_6"                   , ACCELERATOR_VK_CODES::VK_6)
    .value("VK_7"                   , ACCELERATOR_VK_CODES::VK_7)
    .value("VK_8"                   , ACCELERATOR_VK_CODES::VK_8)
    .value("VK_9"                   , ACCELERATOR_VK_CODES::VK_9)
    .value("VK_A"                   , ACCELERATOR_VK_CODES::VK_A)
    .value("VK_B"                   , ACCELERATOR_VK_CODES::VK_B)
    .value("VK_C"                   , ACCELERATOR_VK_CODES::VK_C)
    .value("VK_D"                   , ACCELERATOR_VK_CODES::VK_D)
    .value("VK_E"                   , ACCELERATOR_VK_CODES::VK_E)
    .value("VK_F"                   , ACCELERATOR_VK_CODES::VK_F)
    .value("VK_G"                   , ACCELERATOR_VK_CODES::VK_G)
    .value("VK_H"                   , ACCELERATOR_VK_CODES::VK_H)
    .value("VK_I"                   , ACCELERATOR_VK_CODES::VK_I)
    .value("VK_J"                   , ACCELERATOR_VK_CODES::VK_J)
    .value("VK_K"                   , ACCELERATOR_VK_CODES::VK_K)
    .value("VK_L"                   , ACCELERATOR_VK_CODES::VK_L)
    .value("VK_M"                   , ACCELERATOR_VK_CODES::VK_M)
    .value("VK_N"                   , ACCELERATOR_VK_CODES::VK_N)
    .value("VK_O"                   , ACCELERATOR_VK_CODES::VK_O)
    .value("VK_P"                   , ACCELERATOR_VK_CODES::VK_P)
    .value("VK_Q"                   , ACCELERATOR_VK_CODES::VK_Q)
    .value("VK_R"                   , ACCELERATOR_VK_CODES::VK_R)
    .value("VK_S"                   , ACCELERATOR_VK_CODES::VK_S)
    .value("VK_T"                   , ACCELERATOR_VK_CODES::VK_T)
    .value("VK_U"                   , ACCELERATOR_VK_CODES::VK_U)
    .value("VK_V"                   , ACCELERATOR_VK_CODES::VK_V)
    .value("VK_W"                   , ACCELERATOR_VK_CODES::VK_W)
    .value("VK_X"                   , ACCELERATOR_VK_CODES::VK_X)
    .value("VK_Y"                   , ACCELERATOR_VK_CODES::VK_Y)
    .value("VK_Z"                   , ACCELERATOR_VK_CODES::VK_Z)
    .value("VK_LWIN"                , ACCELERATOR_VK_CODES::VK_LWIN)
    .value("VK_RWIN"                , ACCELERATOR_VK_CODES::VK_RWIN)
    .value("VK_APPS"                , ACCELERATOR_VK_CODES::VK_APPS)
    .value("VK_SLEEP"               , ACCELERATOR_VK_CODES::VK_SLEEP)
    .value("VK_NUMPAD0"             , ACCELERATOR_VK_CODES::VK_NUMPAD0)
    .value("VK_NUMPAD1"             , ACCELERATOR_VK_CODES::VK_NUMPAD1)
    .value("VK_NUMPAD2"             , ACCELERATOR_VK_CODES::VK_NUMPAD2)
    .value("VK_NUMPAD3"             , ACCELERATOR_VK_CODES::VK_NUMPAD3)
    .value("VK_NUMPAD4"             , ACCELERATOR_VK_CODES::VK_NUMPAD4)
    .value("VK_NUMPAD5"             , ACCELERATOR_VK_CODES::VK_NUMPAD5)
    .value("VK_NUMPAD6"             , ACCELERATOR_VK_CODES::VK_NUMPAD6)
    .value("VK_NUMPAD7"             , ACCELERATOR_VK_CODES::VK_NUMPAD7)
    .value("VK_NUMPAD8"             , ACCELERATOR_VK_CODES::VK_NUMPAD8)
    .value("VK_NUMPAD9"             , ACCELERATOR_VK_CODES::VK_NUMPAD9)
    .value("VK_MULTIPLY"            , ACCELERATOR_VK_CODES::VK_MULTIPLY)
    .value("VK_ADD"                 , ACCELERATOR_VK_CODES::VK_ADD)
    .value("VK_SEPARATOR"           , ACCELERATOR_VK_CODES::VK_SEPARATOR)
    .value("VK_SUBTRACT"            , ACCELERATOR_VK_CODES::VK_SUBTRACT)
    .value("VK_DECIMAL"             , ACCELERATOR_VK_CODES::VK_DECIMAL)
    .value("VK_DIVIDE"              , ACCELERATOR_VK_CODES::VK_DIVIDE)
    .value("VK_F1"                  , ACCELERATOR_VK_CODES::VK_F1)
    .value("VK_F2"                  , ACCELERATOR_VK_CODES::VK_F2)
    .value("VK_F3"                  , ACCELERATOR_VK_CODES::VK_F3)
    .value("VK_F4"                  , ACCELERATOR_VK_CODES::VK_F4)
    .value("VK_F5"                  , ACCELERATOR_VK_CODES::VK_F5)
    .value("VK_F6"                  , ACCELERATOR_VK_CODES::VK_F6)
    .value("VK_F7"                  , ACCELERATOR_VK_CODES::VK_F7)
    .value("VK_F8"                  , ACCELERATOR_VK_CODES::VK_F8)
    .value("VK_F9"                  , ACCELERATOR_VK_CODES::VK_F9)
    .value("VK_F10"                 , ACCELERATOR_VK_CODES::VK_F10)
    .value("VK_F11"                 , ACCELERATOR_VK_CODES::VK_F11)
    .value("VK_F12"                 , ACCELERATOR_VK_CODES::VK_F12)
    .value("VK_F13"                 , ACCELERATOR_VK_CODES::VK_F13)
    .value("VK_F14"                 , ACCELERATOR_VK_CODES::VK_F14)
    .value("VK_F15"                 , ACCELERATOR_VK_CODES::VK_F15)
    .value("VK_F16"                 , ACCELERATOR_VK_CODES::VK_F16)
    .value("VK_F17"                 , ACCELERATOR_VK_CODES::VK_F17)
    .value("VK_F18"                 , ACCELERATOR_VK_CODES::VK_F18)
    .value("VK_F19"                 , ACCELERATOR_VK_CODES::VK_F19)
    .value("VK_F20"                 , ACCELERATOR_VK_CODES::VK_F20)
    .value("VK_F21"                 , ACCELERATOR_VK_CODES::VK_F21)
    .value("VK_F22"                 , ACCELERATOR_VK_CODES::VK_F22)
    .value("VK_F23"                 , ACCELERATOR_VK_CODES::VK_F23)
    .value("VK_F24"                 , ACCELERATOR_VK_CODES::VK_F24)
    .value("VK_NUMLOCK"             , ACCELERATOR_VK_CODES::VK_NUMLOCK)
    .value("VK_SCROLL"              , ACCELERATOR_VK_CODES::VK_SCROLL)
    .value("VK_LSHIFT"              , ACCELERATOR_VK_CODES::VK_LSHIFT)
    .value("VK_RSHIFT"              , ACCELERATOR_VK_CODES::VK_RSHIFT)
    .value("VK_LCONTROL"            , ACCELERATOR_VK_CODES::VK_LCONTROL)
    .value("VK_RCONTROL"            , ACCELERATOR_VK_CODES::VK_RCONTROL)
    .value("VK_LMENU"               , ACCELERATOR_VK_CODES::VK_LMENU)
    .value("VK_RMENU"               , ACCELERATOR_VK_CODES::VK_RMENU)
    .value("VK_BROWSER_BACK"        , ACCELERATOR_VK_CODES::VK_BROWSER_BACK)
    .value("VK_BROWSER_FORWARD"     , ACCELERATOR_VK_CODES::VK_BROWSER_FORWARD)
    .value("VK_BROWSER_REFRESH"     , ACCELERATOR_VK_CODES::VK_BROWSER_REFRESH)
    .value("VK_BROWSER_STOP"        , ACCELERATOR_VK_CODES::VK_BROWSER_STOP)
    .value("VK_BROWSER_SEARCH"      , ACCELERATOR_VK_CODES::VK_BROWSER_SEARCH)
    .value("VK_BROWSER_FAVORITES"   , ACCELERATOR_VK_CODES::VK_BROWSER_FAVORITES)
    .value("VK_BROWSER_HOME"        , ACCELERATOR_VK_CODES::VK_BROWSER_HOME)
    .value("VK_VOLUME_MUTE"         , ACCELERATOR_VK_CODES::VK_VOLUME_MUTE)
    .value("VK_VOLUME_DOWN"         , ACCELERATOR_VK_CODES::VK_VOLUME_DOWN)
    .value("VK_VOLUME_UP"           , ACCELERATOR_VK_CODES::VK_VOLUME_UP)
    .value("VK_MEDIA_NEXT_TRACK"    , ACCELERATOR_VK_CODES::VK_MEDIA_NEXT_TRACK)
    .value("VK_MEDIA_PREV_TRACK"    , ACCELERATOR_VK_CODES::VK_MEDIA_PREV_TRACK)
    .value("VK_MEDIA_STOP"          , ACCELERATOR_VK_CODES::VK_MEDIA_STOP)
    .value("VK_MEDIA_PLAY_PAUSE"    , ACCELERATOR_VK_CODES::VK_MEDIA_PLAY_PAUSE)
    .value("VK_LAUNCH_MAIL"         , ACCELERATOR_VK_CODES::VK_LAUNCH_MAIL)
    .value("VK_LAUNCH_MEDIA_SELECT" , ACCELERATOR_VK_CODES::VK_LAUNCH_MEDIA_SELECT)
    .value("VK_LAUNCH_APP1"         , ACCELERATOR_VK_CODES::VK_LAUNCH_APP1)
    .value("VK_LAUNCH_APP2"         , ACCELERATOR_VK_CODES::VK_LAUNCH_APP2)
    .value("VK_OEM_1"               , ACCELERATOR_VK_CODES::VK_OEM_1)
    .value("VK_OEM_PLUS"            , ACCELERATOR_VK_CODES::VK_OEM_PLUS)
    .value("VK_OEM_COMMA"           , ACCELERATOR_VK_CODES::VK_OEM_COMMA)
    .value("VK_OEM_MINUS"           , ACCELERATOR_VK_CODES::VK_OEM_MINUS)
    .value("VK_OEM_PERIOD"          , ACCELERATOR_VK_CODES::VK_OEM_PERIOD)
    .value("VK_OEM_2"               , ACCELERATOR_VK_CODES::VK_OEM_2)
    .value("VK_OEM_4"               , ACCELERATOR_VK_CODES::VK_OEM_4)
    .value("VK_OEM_5"               , ACCELERATOR_VK_CODES::VK_OEM_5)
    .value("VK_OEM_6"               , ACCELERATOR_VK_CODES::VK_OEM_6)
    .value("VK_OEM_7"               , ACCELERATOR_VK_CODES::VK_OEM_7)
    .value("VK_OEM_8"               , ACCELERATOR_VK_CODES::VK_OEM_8)
    .value("VK_OEM_102"             , ACCELERATOR_VK_CODES::VK_OEM_102)
    .value("VK_PROCESSKEY"          , ACCELERATOR_VK_CODES::VK_PROCESSKEY)
    .value("VK_PACKET"              , ACCELERATOR_VK_CODES::VK_PACKET)
    .value("VK_ATTN"                , ACCELERATOR_VK_CODES::VK_ATTN)
    .value("VK_CRSEL"               , ACCELERATOR_VK_CODES::VK_CRSEL)
    .value("VK_EXSEL"               , ACCELERATOR_VK_CODES::VK_EXSEL)
    .value("VK_EREOF"               , ACCELERATOR_VK_CODES::VK_EREOF)
    .value("VK_PLAY"                , ACCELERATOR_VK_CODES::VK_PLAY)
    .value("VK_ZOOM"                , ACCELERATOR_VK_CODES::VK_ZOOM)
    .value("VK_NONAME"              , ACCELERATOR_VK_CODES::VK_NONAME)
    .value("VK_PA1"                 , ACCELERATOR_VK_CODES::VK_PA1)
    .value("VK_OEM_CLEAR"           , ACCELERATOR_VK_CODES::VK_OEM_CLEAR);

  enum_<ALGORITHMS>(m, "ALGORITHMS")
    .value(PY_ENUM(ALGORITHMS::UNKNOWN))
    .value(PY_ENUM(ALGORITHMS::SHA_512))
    .value(PY_ENUM(ALGORITHMS::SHA_384))
    .value(PY_ENUM(ALGORITHMS::SHA_256))
    .value(PY_ENUM(ALGORITHMS::SHA_1))
    .value(PY_ENUM(ALGORITHMS::MD5))
    .value(PY_ENUM(ALGORITHMS::MD4))
    .value(PY_ENUM(ALGORITHMS::MD2))
    .value(PY_ENUM(ALGORITHMS::RSA))
    .value(PY_ENUM(ALGORITHMS::EC))

    .value(PY_ENUM(ALGORITHMS::MD5_RSA))
    .value(PY_ENUM(ALGORITHMS::SHA1_DSA))
    .value(PY_ENUM(ALGORITHMS::SHA1_RSA))

    .value(PY_ENUM(ALGORITHMS::SHA_256_RSA))
    .value(PY_ENUM(ALGORITHMS::SHA_384_RSA))
    .value(PY_ENUM(ALGORITHMS::SHA_512_RSA))

    .value(PY_ENUM(ALGORITHMS::SHA1_ECDSA))
    .value(PY_ENUM(ALGORITHMS::SHA_256_ECDSA))
    .value(PY_ENUM(ALGORITHMS::SHA_384_ECDSA))
    .value(PY_ENUM(ALGORITHMS::SHA_512_ECDSA));

}
}
