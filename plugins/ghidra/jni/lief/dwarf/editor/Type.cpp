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

#include "jni/lief/dwarf/editor/Type.hpp"
#include "jni/log.hpp"
#include "jni/jni_utils.hpp"

#include "jni/lief/dwarf/editor/PointerType.hpp"

namespace lief_jni::dwarf::editor {

jobject Type::jni_get_pointer_to(JNIEnv* env, jobject thiz) {
  return PointerType::create(
    from_jni(thiz)->impl().pointer_to()
  );
}

int Type::register_natives(JNIEnv* env) {
  static constexpr std::array NATIVE_METHODS {
    make(
      "getPointerTo",
      "()Llief/dwarf/editor/PointerType;",
      &jni_get_pointer_to
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

}
