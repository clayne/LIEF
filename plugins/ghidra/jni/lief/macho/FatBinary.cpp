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
#include <array>

#include "jni/lief/macho/FatBinary.hpp"
#include "jni/log.hpp"
#include "jni/jni_utils.hpp"

namespace lief_jni::macho {

int FatBinary::Iterator::register_natives(JNIEnv* env) {
  static constexpr std::array NATIVE_METHODS {
    make(
      "hasNext",
      "()Z",
      &jni_has_next
    ),
    make(
      "next",
      "()Llief/macho/Binary;",
      &jni_next
    ),
    make_destroy(
      &jni_destroy
    ),
  };

  env->RegisterNatives(
    jni::StaticRef<kClass>{}.GetJClass(),
    NATIVE_METHODS.data(), NATIVE_METHODS.size()
  );

  GHIDRA_DEBUG("'{}' registered", kClass.name_);

  return JNI_OK;
}


int FatBinary::register_natives(JNIEnv* env) {
  static constexpr std::array NATIVE_METHODS {
    make(
      "parse",
      "(Ljava/lang/String;)Llief/macho/FatBinary;",
      &jni_parse
    ),
    make(
      "iterator",
      "()Llief/macho/FatBinary$Iterator;",
      &jni_iterator
    ),
    make_destroy(
      &jni_destroy
    ),
  };

  env->RegisterNatives(
    jni::StaticRef<kClass>{}.GetJClass(),
    NATIVE_METHODS.data(), NATIVE_METHODS.size()
  );

  GHIDRA_DEBUG("'{}' registered", kClass.name_);

  Iterator::register_natives(env);

  return JNI_OK;
}

}
