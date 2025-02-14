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
#ifndef LIEF_PE_RESOURCE_STRING_TABLE_H
#define LIEF_PE_RESOURCE_STRING_TABLE_H
#include <string>

#include "LIEF/visibility.h"
#include "LIEF/Object.hpp"

namespace LIEF {
namespace PE {
class ResourcesManager;

class LIEF_API ResourceStringTable : public Object {

  friend class ResourcesManager;
  public:
  ResourceStringTable() = default;

  ResourceStringTable(int16_t length, std::u16string name) :
    name_(std::move(name)),
    length_(length)
  {}

  ResourceStringTable(const ResourceStringTable&) = default;
  ResourceStringTable& operator=(const ResourceStringTable&) = default;

  ~ResourceStringTable() override = default;

  void accept(Visitor& visitor) const override;

  /// The size of the string, not including length field itself.
  int16_t length() const {
    return length_;
  }

  /// The variable-length Unicode string data, word-aligned.
  const std::u16string& name() const {
    return name_;
  }

  LIEF_API friend std::ostream& operator<<(std::ostream& os, const ResourceStringTable& string_table);

  private:
  std::u16string name_;
  int16_t length_ = 0;
};

}
}

#endif
