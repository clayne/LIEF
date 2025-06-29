/* Copyright 2024 - 2025 R. Thomas
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
#pragma once
#include <cstdint>

#include "LIEF/COFF/Symbol.hpp"
#include "LIEF/rust/COFF/AuxiliarySymbol.hpp"
#include "LIEF/rust/helpers.hpp"
#include "LIEF/rust/Iterator.hpp"
#include "LIEF/rust/Abstract/Symbol.hpp"

class COFF_Section;

class COFF_Symbol : public AbstractSymbol {
  public:
  using lief_t = LIEF::COFF::Symbol;
  COFF_Symbol(const lief_t& obj) : AbstractSymbol(obj) {}

  class it_auxiliary_symbols :
      public Iterator<COFF_AuxiliarySymbol, LIEF::COFF::Symbol::it_const_auxiliary_symbols_t>
  {
    public:
    it_auxiliary_symbols(const COFF_Symbol::lief_t& src)
      : Iterator(std::move(src.auxiliary_symbols())) { } // NOLINT(performance-move-const-arg)
    auto next() { return Iterator::next(); }
    auto size() const { return Iterator::size(); }
  };

  auto storage_class() const {
    return to_int(impl().storage_class());
  }

  auto base_type() const {
    return to_int(impl().base_type());
  }

  auto complex_type() const {
    return to_int(impl().complex_type());
  }

  auto section_idx() const {
    return impl().section_idx();
  }

  auto section() const {
    return details::try_unique<COFF_Section>(impl().section());
  }

  auto is_external() const {
    return impl().is_external();
  }

  auto is_function() const {
    return impl().is_function();
  }

  auto is_absolute() const {
    return impl().is_absolute();
  }

  auto is_weak_external() const {
    return impl().is_weak_external();
  }

  auto is_undefined() const {
    return impl().is_undefined();
  }

  auto is_function_line_info() const {
    return impl().is_function_line_info();
  }

  auto is_file_record() const {
    return impl().is_file_record();
  }

  auto auxiliary_symbols() const {
    return std::make_unique<it_auxiliary_symbols>(impl());
  }

  auto demangled_name() const {
    return impl().demangled_name();
  }

  auto to_string() const {
    return impl().to_string();
  }

  private:
  const lief_t& impl() const { return as<lief_t>(this); }
};
