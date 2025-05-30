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
#ifndef LIEF_ELF_SYMBOL_CPP_C_API_
#define LIEF_ELF_SYMBOL_CPP_C_API_

#include "LIEF/ELF/Binary.h"
#include "LIEF/ELF/Binary.hpp"

#include "LIEF/ELF/Symbol.h"
#include "LIEF/ELF/Symbol.hpp"

namespace LIEF {
namespace ELF {

void init_c_dynamic_symbols(Elf_Binary_t* c_binary, Binary* binary);
void init_c_symtab_symbols(Elf_Binary_t* c_binary, Binary* binary);

void destroy_dynamic_symbols(Elf_Binary_t* c_binary);
void destroy_symtab_symbols(Elf_Binary_t* c_binary);

}
}

#endif
