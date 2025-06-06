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
#ifndef LIEF_PE_OID_TO_STRING_H
#define LIEF_PE_OID_TO_STRING_H
#include "LIEF/visibility.h"
#include "LIEF/PE/signature/types.hpp"

namespace LIEF {
namespace PE {

/// Convert an OID to a human-readable string
LIEF_API const char* oid_to_string(const oid_t& oid);

}
}

#endif
