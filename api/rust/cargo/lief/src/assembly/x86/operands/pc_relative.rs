use lief_ffi as ffi;

use crate::common::FromFFI;

use super::Operand;

/// This structure represents a RIP/EIP-relative operand.
///
/// For instance:
///
/// ```text
/// jmp 67633;
///     |
///     +----------> PCRelative(67633)
/// ```
pub struct PCRelative {
    ptr: cxx::UniquePtr<ffi::asm_x86_operands_PCRelative>,
}

impl FromFFI<ffi::asm_x86_operands_PCRelative> for PCRelative {
    fn from_ffi(ptr: cxx::UniquePtr<ffi::asm_x86_operands_PCRelative>) -> Self {
        Self {
            ptr,
        }
    }
}

impl Operand for PCRelative {
    #[doc(hidden)]
    fn as_generic(&self) -> &ffi::asm_x86_Operand {
        self.ptr.as_ref().unwrap().as_ref()
    }
}

impl PCRelative {
    /// The effective value that is relative to the current `rip/eip` register
    pub fn value(&self) -> i64 {
        self.ptr.value()
    }
}
