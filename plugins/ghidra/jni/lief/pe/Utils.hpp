/* Copyright 2022 - 2025 R. Thomas
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
#include <jni_bind.h>

#include <LIEF/PE/utils.hpp>

namespace lief_jni::pe {
class Utils {
  public:
  static constexpr jni::Class kClass {
    "lief/pe/Utils",
  };

  static jboolean jni_is_pe(JNIEnv* /*env*/, jclass /*clazz*/,
                            jstring path)
  {
    jni::LocalString jpath(path);
    return LIEF::PE::is_pe(std::string(jpath.Pin().ToString()));
  }

  static int register_natives(JNIEnv* env);
};
}
