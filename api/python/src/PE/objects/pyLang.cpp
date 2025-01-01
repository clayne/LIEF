/* Copyright 2017 - 2025 R. Thomas
 * Copyright 2017 - 2025 Quarkslab
 * Copyright 2017 - 2021 K. Nakagawa
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
#include "PE/pyPE.hpp"

#include "LIEF/PE/resources/langs.hpp"
#include "enums_wrapper.hpp"

namespace LIEF::PE::py {

template<>
void create<RESOURCE_LANGS>(nb::module_& m) {
  enum_<RESOURCE_LANGS>(m, "RESOURCE_LANGS")
    .value("NEUTRAL", RESOURCE_LANGS::NEUTRAL)
    .value("INVARIANT", RESOURCE_LANGS::INVARIANT)
    .value("AFRIKAANS", RESOURCE_LANGS::AFRIKAANS)
    .value("ALBANIAN", RESOURCE_LANGS::ALBANIAN)
    .value("ARABIC", RESOURCE_LANGS::ARABIC)
    .value("ARMENIAN", RESOURCE_LANGS::ARMENIAN)
    .value("ASSAMESE", RESOURCE_LANGS::ASSAMESE)
    .value("AZERI", RESOURCE_LANGS::AZERI)
    .value("BASQUE", RESOURCE_LANGS::BASQUE)
    .value("BELARUSIAN", RESOURCE_LANGS::BELARUSIAN)
    .value("BANGLA", RESOURCE_LANGS::BANGLA)
    .value("BULGARIAN", RESOURCE_LANGS::BULGARIAN)
    .value("CATALAN", RESOURCE_LANGS::CATALAN)
    .value("CHINESE", RESOURCE_LANGS::CHINESE)
    .value("CROATIAN", RESOURCE_LANGS::CROATIAN)
    .value("BOSNIAN", RESOURCE_LANGS::BOSNIAN)
    .value("CZECH", RESOURCE_LANGS::CZECH)
    .value("DANISH", RESOURCE_LANGS::DANISH)
    .value("DIVEHI", RESOURCE_LANGS::DIVEHI)
    .value("DUTCH", RESOURCE_LANGS::DUTCH)
    .value("ENGLISH", RESOURCE_LANGS::ENGLISH)
    .value("ESTONIAN", RESOURCE_LANGS::ESTONIAN)
    .value("FAEROESE", RESOURCE_LANGS::FAEROESE)
    .value("FARSI", RESOURCE_LANGS::FARSI)
    .value("FINNISH", RESOURCE_LANGS::FINNISH)
    .value("FRENCH", RESOURCE_LANGS::FRENCH)
    .value("GALICIAN", RESOURCE_LANGS::GALICIAN)
    .value("GEORGIAN", RESOURCE_LANGS::GEORGIAN)
    .value("GERMAN", RESOURCE_LANGS::GERMAN)
    .value("GREEK", RESOURCE_LANGS::GREEK)
    .value("GUJARATI", RESOURCE_LANGS::GUJARATI)
    .value("HEBREW", RESOURCE_LANGS::HEBREW)
    .value("HINDI", RESOURCE_LANGS::HINDI)
    .value("HUNGARIAN", RESOURCE_LANGS::HUNGARIAN)
    .value("ICELANDIC", RESOURCE_LANGS::ICELANDIC)
    .value("INDONESIAN", RESOURCE_LANGS::INDONESIAN)
    .value("ITALIAN", RESOURCE_LANGS::ITALIAN)
    .value("JAPANESE", RESOURCE_LANGS::JAPANESE)
    .value("KANNADA", RESOURCE_LANGS::KANNADA)
    .value("KASHMIRI", RESOURCE_LANGS::KASHMIRI)
    .value("KAZAK", RESOURCE_LANGS::KAZAK)
    .value("KONKANI", RESOURCE_LANGS::KONKANI)
    .value("KOREAN", RESOURCE_LANGS::KOREAN)
    .value("KYRGYZ", RESOURCE_LANGS::KYRGYZ)
    .value("LATVIAN", RESOURCE_LANGS::LATVIAN)
    .value("LITHUANIAN", RESOURCE_LANGS::LITHUANIAN)
    .value("MACEDONIAN", RESOURCE_LANGS::MACEDONIAN)
    .value("MALAY", RESOURCE_LANGS::MALAY)
    .value("MALAYALAM", RESOURCE_LANGS::MALAYALAM)
    .value("MANIPURI", RESOURCE_LANGS::MANIPURI)
    .value("MARATHI", RESOURCE_LANGS::MARATHI)
    .value("MONGOLIAN", RESOURCE_LANGS::MONGOLIAN)
    .value("NEPALI", RESOURCE_LANGS::NEPALI)
    .value("NORWEGIAN", RESOURCE_LANGS::NORWEGIAN)
    .value("ORIYA", RESOURCE_LANGS::ORIYA)
    .value("POLISH", RESOURCE_LANGS::POLISH)
    .value("PORTUGUESE", RESOURCE_LANGS::PORTUGUESE)
    .value("PUNJABI", RESOURCE_LANGS::PUNJABI)
    .value("ROMANIAN", RESOURCE_LANGS::ROMANIAN)
    .value("RUSSIAN", RESOURCE_LANGS::RUSSIAN)
    .value("SANSKRIT", RESOURCE_LANGS::SANSKRIT)
    .value("SERBIAN", RESOURCE_LANGS::SERBIAN)
    .value("SINDHI", RESOURCE_LANGS::SINDHI)
    .value("SLOVAK", RESOURCE_LANGS::SLOVAK)
    .value("SLOVENIAN", RESOURCE_LANGS::SLOVENIAN)
    .value("SPANISH", RESOURCE_LANGS::SPANISH)
    .value("SWAHILI", RESOURCE_LANGS::SWAHILI)
    .value("SWEDISH", RESOURCE_LANGS::SWEDISH)
    .value("SYRIAC", RESOURCE_LANGS::SYRIAC)
    .value("TAMIL", RESOURCE_LANGS::TAMIL)
    .value("TATAR", RESOURCE_LANGS::TATAR)
    .value("TELUGU", RESOURCE_LANGS::TELUGU)
    .value("THAI", RESOURCE_LANGS::THAI)
    .value("TURKISH", RESOURCE_LANGS::TURKISH)
    .value("UKRAINIAN", RESOURCE_LANGS::UKRAINIAN)
    .value("URDU", RESOURCE_LANGS::URDU)
    .value("UZBEK", RESOURCE_LANGS::UZBEK)
    .value("VIETNAMESE", RESOURCE_LANGS::VIETNAMESE)
    .value("GAELIC", RESOURCE_LANGS::GAELIC)
    .value("MALTESE", RESOURCE_LANGS::MALTESE)
    .value("MAORI", RESOURCE_LANGS::MAORI)
    .value("RHAETO_ROMANCE", RESOURCE_LANGS::RHAETO_ROMANCE)
    .value("SAMI", RESOURCE_LANGS::SAMI)
    .value("SORBIAN", RESOURCE_LANGS::SORBIAN)
    .value("SUTU", RESOURCE_LANGS::SUTU)
    .value("TSONGA", RESOURCE_LANGS::TSONGA)
    .value("TSWANA", RESOURCE_LANGS::TSWANA)
    .value("VENDA", RESOURCE_LANGS::VENDA)
    .value("XHOSA", RESOURCE_LANGS::XHOSA)
    .value("ZULU", RESOURCE_LANGS::ZULU)
    .value("ESPERANTO", RESOURCE_LANGS::ESPERANTO)
    .value("WALON", RESOURCE_LANGS::WALON)
    .value("CORNISH", RESOURCE_LANGS::CORNISH)
    .value("WELSH", RESOURCE_LANGS::WELSH)
    .value("BRETON", RESOURCE_LANGS::BRETON)
    .value("INUKTITUT", RESOURCE_LANGS::INUKTITUT)
    .value("IRISH", RESOURCE_LANGS::IRISH)
    .value("LOWER_SORBIAN", RESOURCE_LANGS::LOWER_SORBIAN)
    .value("PULAR", RESOURCE_LANGS::PULAR)
    .value("QUECHUA", RESOURCE_LANGS::QUECHUA)
    .value("TAMAZIGHT", RESOURCE_LANGS::TAMAZIGHT)
    .value("TIGRINYA", RESOURCE_LANGS::TIGRINYA)
    .value("VALENCIAN", RESOURCE_LANGS::VALENCIAN);

}

}
