#[allow(non_camel_case_types)]
#[derive(Debug, Clone, Copy, PartialEq, Eq, PartialOrd, Ord, Hash)]
pub enum Reg {
  NoRegister,
  FFLAGS,
  FRM,
  SF_VCIX_STATE,
  SSP,
  VL,
  VLENB,
  VTYPE,
  VXRM,
  VXSAT,
  DUMMY_REG_PAIR_WITH_X0,
  V0,
  V1,
  V2,
  V3,
  V4,
  V5,
  V6,
  V7,
  V8,
  V9,
  V10,
  V11,
  V12,
  V13,
  V14,
  V15,
  V16,
  V17,
  V18,
  V19,
  V20,
  V21,
  V22,
  V23,
  V24,
  V25,
  V26,
  V27,
  V28,
  V29,
  V30,
  V31,
  X0,
  X1,
  X2,
  X3,
  X4,
  X5,
  X6,
  X7,
  X8,
  X9,
  X10,
  X11,
  X12,
  X13,
  X14,
  X15,
  X16,
  X17,
  X18,
  X19,
  X20,
  X21,
  X22,
  X23,
  X24,
  X25,
  X26,
  X27,
  X28,
  X29,
  X30,
  X31,
  F0_D,
  F1_D,
  F2_D,
  F3_D,
  F4_D,
  F5_D,
  F6_D,
  F7_D,
  F8_D,
  F9_D,
  F10_D,
  F11_D,
  F12_D,
  F13_D,
  F14_D,
  F15_D,
  F16_D,
  F17_D,
  F18_D,
  F19_D,
  F20_D,
  F21_D,
  F22_D,
  F23_D,
  F24_D,
  F25_D,
  F26_D,
  F27_D,
  F28_D,
  F29_D,
  F30_D,
  F31_D,
  F0_F,
  F1_F,
  F2_F,
  F3_F,
  F4_F,
  F5_F,
  F6_F,
  F7_F,
  F8_F,
  F9_F,
  F10_F,
  F11_F,
  F12_F,
  F13_F,
  F14_F,
  F15_F,
  F16_F,
  F17_F,
  F18_F,
  F19_F,
  F20_F,
  F21_F,
  F22_F,
  F23_F,
  F24_F,
  F25_F,
  F26_F,
  F27_F,
  F28_F,
  F29_F,
  F30_F,
  F31_F,
  F0_H,
  F1_H,
  F2_H,
  F3_H,
  F4_H,
  F5_H,
  F6_H,
  F7_H,
  F8_H,
  F9_H,
  F10_H,
  F11_H,
  F12_H,
  F13_H,
  F14_H,
  F15_H,
  F16_H,
  F17_H,
  F18_H,
  F19_H,
  F20_H,
  F21_H,
  F22_H,
  F23_H,
  F24_H,
  F25_H,
  F26_H,
  F27_H,
  F28_H,
  F29_H,
  F30_H,
  F31_H,
  X0_H,
  X1_H,
  X2_H,
  X3_H,
  X4_H,
  X5_H,
  X6_H,
  X7_H,
  X8_H,
  X9_H,
  X10_H,
  X11_H,
  X12_H,
  X13_H,
  X14_H,
  X15_H,
  X16_H,
  X17_H,
  X18_H,
  X19_H,
  X20_H,
  X21_H,
  X22_H,
  X23_H,
  X24_H,
  X25_H,
  X26_H,
  X27_H,
  X28_H,
  X29_H,
  X30_H,
  X31_H,
  X0_Pair,
  X0_W,
  X1_W,
  X2_W,
  X3_W,
  X4_W,
  X5_W,
  X6_W,
  X7_W,
  X8_W,
  X9_W,
  X10_W,
  X11_W,
  X12_W,
  X13_W,
  X14_W,
  X15_W,
  X16_W,
  X17_W,
  X18_W,
  X19_W,
  X20_W,
  X21_W,
  X22_W,
  X23_W,
  X24_W,
  X25_W,
  X26_W,
  X27_W,
  X28_W,
  X29_W,
  X30_W,
  X31_W,
  V0M2,
  V0M4,
  V0M8,
  V2M2,
  V4M2,
  V4M4,
  V6M2,
  V8M2,
  V8M4,
  V8M8,
  V10M2,
  V12M2,
  V12M4,
  V14M2,
  V16M2,
  V16M4,
  V16M8,
  V18M2,
  V20M2,
  V20M4,
  V22M2,
  V24M2,
  V24M4,
  V24M8,
  V26M2,
  V28M2,
  V28M4,
  V30M2,
  X2_X3,
  X4_X5,
  X6_X7,
  X8_X9,
  X10_X11,
  X12_X13,
  X14_X15,
  X16_X17,
  X18_X19,
  X20_X21,
  X22_X23,
  X24_X25,
  X26_X27,
  X28_X29,
  X30_X31,
  V1_V2,
  V2_V3,
  V3_V4,
  V4_V5,
  V5_V6,
  V6_V7,
  V7_V8,
  V8_V9,
  V9_V10,
  V10_V11,
  V11_V12,
  V12_V13,
  V13_V14,
  V14_V15,
  V15_V16,
  V16_V17,
  V17_V18,
  V18_V19,
  V19_V20,
  V20_V21,
  V21_V22,
  V22_V23,
  V23_V24,
  V24_V25,
  V25_V26,
  V26_V27,
  V27_V28,
  V28_V29,
  V29_V30,
  V30_V31,
  V0_V1,
  V2M2_V4M2,
  V4M2_V6M2,
  V6M2_V8M2,
  V8M2_V10M2,
  V10M2_V12M2,
  V12M2_V14M2,
  V14M2_V16M2,
  V16M2_V18M2,
  V18M2_V20M2,
  V20M2_V22M2,
  V22M2_V24M2,
  V24M2_V26M2,
  V26M2_V28M2,
  V28M2_V30M2,
  V0M2_V2M2,
  V4M4_V8M4,
  V8M4_V12M4,
  V12M4_V16M4,
  V16M4_V20M4,
  V20M4_V24M4,
  V24M4_V28M4,
  V0M4_V4M4,
  V1_V2_V3,
  V2_V3_V4,
  V3_V4_V5,
  V4_V5_V6,
  V5_V6_V7,
  V6_V7_V8,
  V7_V8_V9,
  V8_V9_V10,
  V9_V10_V11,
  V10_V11_V12,
  V11_V12_V13,
  V12_V13_V14,
  V13_V14_V15,
  V14_V15_V16,
  V15_V16_V17,
  V16_V17_V18,
  V17_V18_V19,
  V18_V19_V20,
  V19_V20_V21,
  V20_V21_V22,
  V21_V22_V23,
  V22_V23_V24,
  V23_V24_V25,
  V24_V25_V26,
  V25_V26_V27,
  V26_V27_V28,
  V27_V28_V29,
  V28_V29_V30,
  V29_V30_V31,
  V0_V1_V2,
  V2M2_V4M2_V6M2,
  V4M2_V6M2_V8M2,
  V6M2_V8M2_V10M2,
  V8M2_V10M2_V12M2,
  V10M2_V12M2_V14M2,
  V12M2_V14M2_V16M2,
  V14M2_V16M2_V18M2,
  V16M2_V18M2_V20M2,
  V18M2_V20M2_V22M2,
  V20M2_V22M2_V24M2,
  V22M2_V24M2_V26M2,
  V24M2_V26M2_V28M2,
  V26M2_V28M2_V30M2,
  V0M2_V2M2_V4M2,
  V1_V2_V3_V4,
  V2_V3_V4_V5,
  V3_V4_V5_V6,
  V4_V5_V6_V7,
  V5_V6_V7_V8,
  V6_V7_V8_V9,
  V7_V8_V9_V10,
  V8_V9_V10_V11,
  V9_V10_V11_V12,
  V10_V11_V12_V13,
  V11_V12_V13_V14,
  V12_V13_V14_V15,
  V13_V14_V15_V16,
  V14_V15_V16_V17,
  V15_V16_V17_V18,
  V16_V17_V18_V19,
  V17_V18_V19_V20,
  V18_V19_V20_V21,
  V19_V20_V21_V22,
  V20_V21_V22_V23,
  V21_V22_V23_V24,
  V22_V23_V24_V25,
  V23_V24_V25_V26,
  V24_V25_V26_V27,
  V25_V26_V27_V28,
  V26_V27_V28_V29,
  V27_V28_V29_V30,
  V28_V29_V30_V31,
  V0_V1_V2_V3,
  V2M2_V4M2_V6M2_V8M2,
  V4M2_V6M2_V8M2_V10M2,
  V6M2_V8M2_V10M2_V12M2,
  V8M2_V10M2_V12M2_V14M2,
  V10M2_V12M2_V14M2_V16M2,
  V12M2_V14M2_V16M2_V18M2,
  V14M2_V16M2_V18M2_V20M2,
  V16M2_V18M2_V20M2_V22M2,
  V18M2_V20M2_V22M2_V24M2,
  V20M2_V22M2_V24M2_V26M2,
  V22M2_V24M2_V26M2_V28M2,
  V24M2_V26M2_V28M2_V30M2,
  V0M2_V2M2_V4M2_V6M2,
  V1_V2_V3_V4_V5,
  V2_V3_V4_V5_V6,
  V3_V4_V5_V6_V7,
  V4_V5_V6_V7_V8,
  V5_V6_V7_V8_V9,
  V6_V7_V8_V9_V10,
  V7_V8_V9_V10_V11,
  V8_V9_V10_V11_V12,
  V9_V10_V11_V12_V13,
  V10_V11_V12_V13_V14,
  V11_V12_V13_V14_V15,
  V12_V13_V14_V15_V16,
  V13_V14_V15_V16_V17,
  V14_V15_V16_V17_V18,
  V15_V16_V17_V18_V19,
  V16_V17_V18_V19_V20,
  V17_V18_V19_V20_V21,
  V18_V19_V20_V21_V22,
  V19_V20_V21_V22_V23,
  V20_V21_V22_V23_V24,
  V21_V22_V23_V24_V25,
  V22_V23_V24_V25_V26,
  V23_V24_V25_V26_V27,
  V24_V25_V26_V27_V28,
  V25_V26_V27_V28_V29,
  V26_V27_V28_V29_V30,
  V27_V28_V29_V30_V31,
  V0_V1_V2_V3_V4,
  V1_V2_V3_V4_V5_V6,
  V2_V3_V4_V5_V6_V7,
  V3_V4_V5_V6_V7_V8,
  V4_V5_V6_V7_V8_V9,
  V5_V6_V7_V8_V9_V10,
  V6_V7_V8_V9_V10_V11,
  V7_V8_V9_V10_V11_V12,
  V8_V9_V10_V11_V12_V13,
  V9_V10_V11_V12_V13_V14,
  V10_V11_V12_V13_V14_V15,
  V11_V12_V13_V14_V15_V16,
  V12_V13_V14_V15_V16_V17,
  V13_V14_V15_V16_V17_V18,
  V14_V15_V16_V17_V18_V19,
  V15_V16_V17_V18_V19_V20,
  V16_V17_V18_V19_V20_V21,
  V17_V18_V19_V20_V21_V22,
  V18_V19_V20_V21_V22_V23,
  V19_V20_V21_V22_V23_V24,
  V20_V21_V22_V23_V24_V25,
  V21_V22_V23_V24_V25_V26,
  V22_V23_V24_V25_V26_V27,
  V23_V24_V25_V26_V27_V28,
  V24_V25_V26_V27_V28_V29,
  V25_V26_V27_V28_V29_V30,
  V26_V27_V28_V29_V30_V31,
  V0_V1_V2_V3_V4_V5,
  V1_V2_V3_V4_V5_V6_V7,
  V2_V3_V4_V5_V6_V7_V8,
  V3_V4_V5_V6_V7_V8_V9,
  V4_V5_V6_V7_V8_V9_V10,
  V5_V6_V7_V8_V9_V10_V11,
  V6_V7_V8_V9_V10_V11_V12,
  V7_V8_V9_V10_V11_V12_V13,
  V8_V9_V10_V11_V12_V13_V14,
  V9_V10_V11_V12_V13_V14_V15,
  V10_V11_V12_V13_V14_V15_V16,
  V11_V12_V13_V14_V15_V16_V17,
  V12_V13_V14_V15_V16_V17_V18,
  V13_V14_V15_V16_V17_V18_V19,
  V14_V15_V16_V17_V18_V19_V20,
  V15_V16_V17_V18_V19_V20_V21,
  V16_V17_V18_V19_V20_V21_V22,
  V17_V18_V19_V20_V21_V22_V23,
  V18_V19_V20_V21_V22_V23_V24,
  V19_V20_V21_V22_V23_V24_V25,
  V20_V21_V22_V23_V24_V25_V26,
  V21_V22_V23_V24_V25_V26_V27,
  V22_V23_V24_V25_V26_V27_V28,
  V23_V24_V25_V26_V27_V28_V29,
  V24_V25_V26_V27_V28_V29_V30,
  V25_V26_V27_V28_V29_V30_V31,
  V0_V1_V2_V3_V4_V5_V6,
  V1_V2_V3_V4_V5_V6_V7_V8,
  V2_V3_V4_V5_V6_V7_V8_V9,
  V3_V4_V5_V6_V7_V8_V9_V10,
  V4_V5_V6_V7_V8_V9_V10_V11,
  V5_V6_V7_V8_V9_V10_V11_V12,
  V6_V7_V8_V9_V10_V11_V12_V13,
  V7_V8_V9_V10_V11_V12_V13_V14,
  V8_V9_V10_V11_V12_V13_V14_V15,
  V9_V10_V11_V12_V13_V14_V15_V16,
  V10_V11_V12_V13_V14_V15_V16_V17,
  V11_V12_V13_V14_V15_V16_V17_V18,
  V12_V13_V14_V15_V16_V17_V18_V19,
  V13_V14_V15_V16_V17_V18_V19_V20,
  V14_V15_V16_V17_V18_V19_V20_V21,
  V15_V16_V17_V18_V19_V20_V21_V22,
  V16_V17_V18_V19_V20_V21_V22_V23,
  V17_V18_V19_V20_V21_V22_V23_V24,
  V18_V19_V20_V21_V22_V23_V24_V25,
  V19_V20_V21_V22_V23_V24_V25_V26,
  V20_V21_V22_V23_V24_V25_V26_V27,
  V21_V22_V23_V24_V25_V26_V27_V28,
  V22_V23_V24_V25_V26_V27_V28_V29,
  V23_V24_V25_V26_V27_V28_V29_V30,
  V24_V25_V26_V27_V28_V29_V30_V31,
  V0_V1_V2_V3_V4_V5_V6_V7,
  NUM_TARGET_REGS,
  UNKNOWN(u64),
}

impl From<u64> for Reg {
    fn from(value: u64) -> Self {
        match value {
          0 => Reg::NoRegister,
          1 => Reg::FFLAGS,
          2 => Reg::FRM,
          3 => Reg::SF_VCIX_STATE,
          4 => Reg::SSP,
          5 => Reg::VL,
          6 => Reg::VLENB,
          7 => Reg::VTYPE,
          8 => Reg::VXRM,
          9 => Reg::VXSAT,
          10 => Reg::DUMMY_REG_PAIR_WITH_X0,
          11 => Reg::V0,
          12 => Reg::V1,
          13 => Reg::V2,
          14 => Reg::V3,
          15 => Reg::V4,
          16 => Reg::V5,
          17 => Reg::V6,
          18 => Reg::V7,
          19 => Reg::V8,
          20 => Reg::V9,
          21 => Reg::V10,
          22 => Reg::V11,
          23 => Reg::V12,
          24 => Reg::V13,
          25 => Reg::V14,
          26 => Reg::V15,
          27 => Reg::V16,
          28 => Reg::V17,
          29 => Reg::V18,
          30 => Reg::V19,
          31 => Reg::V20,
          32 => Reg::V21,
          33 => Reg::V22,
          34 => Reg::V23,
          35 => Reg::V24,
          36 => Reg::V25,
          37 => Reg::V26,
          38 => Reg::V27,
          39 => Reg::V28,
          40 => Reg::V29,
          41 => Reg::V30,
          42 => Reg::V31,
          43 => Reg::X0,
          44 => Reg::X1,
          45 => Reg::X2,
          46 => Reg::X3,
          47 => Reg::X4,
          48 => Reg::X5,
          49 => Reg::X6,
          50 => Reg::X7,
          51 => Reg::X8,
          52 => Reg::X9,
          53 => Reg::X10,
          54 => Reg::X11,
          55 => Reg::X12,
          56 => Reg::X13,
          57 => Reg::X14,
          58 => Reg::X15,
          59 => Reg::X16,
          60 => Reg::X17,
          61 => Reg::X18,
          62 => Reg::X19,
          63 => Reg::X20,
          64 => Reg::X21,
          65 => Reg::X22,
          66 => Reg::X23,
          67 => Reg::X24,
          68 => Reg::X25,
          69 => Reg::X26,
          70 => Reg::X27,
          71 => Reg::X28,
          72 => Reg::X29,
          73 => Reg::X30,
          74 => Reg::X31,
          75 => Reg::F0_D,
          76 => Reg::F1_D,
          77 => Reg::F2_D,
          78 => Reg::F3_D,
          79 => Reg::F4_D,
          80 => Reg::F5_D,
          81 => Reg::F6_D,
          82 => Reg::F7_D,
          83 => Reg::F8_D,
          84 => Reg::F9_D,
          85 => Reg::F10_D,
          86 => Reg::F11_D,
          87 => Reg::F12_D,
          88 => Reg::F13_D,
          89 => Reg::F14_D,
          90 => Reg::F15_D,
          91 => Reg::F16_D,
          92 => Reg::F17_D,
          93 => Reg::F18_D,
          94 => Reg::F19_D,
          95 => Reg::F20_D,
          96 => Reg::F21_D,
          97 => Reg::F22_D,
          98 => Reg::F23_D,
          99 => Reg::F24_D,
          100 => Reg::F25_D,
          101 => Reg::F26_D,
          102 => Reg::F27_D,
          103 => Reg::F28_D,
          104 => Reg::F29_D,
          105 => Reg::F30_D,
          106 => Reg::F31_D,
          107 => Reg::F0_F,
          108 => Reg::F1_F,
          109 => Reg::F2_F,
          110 => Reg::F3_F,
          111 => Reg::F4_F,
          112 => Reg::F5_F,
          113 => Reg::F6_F,
          114 => Reg::F7_F,
          115 => Reg::F8_F,
          116 => Reg::F9_F,
          117 => Reg::F10_F,
          118 => Reg::F11_F,
          119 => Reg::F12_F,
          120 => Reg::F13_F,
          121 => Reg::F14_F,
          122 => Reg::F15_F,
          123 => Reg::F16_F,
          124 => Reg::F17_F,
          125 => Reg::F18_F,
          126 => Reg::F19_F,
          127 => Reg::F20_F,
          128 => Reg::F21_F,
          129 => Reg::F22_F,
          130 => Reg::F23_F,
          131 => Reg::F24_F,
          132 => Reg::F25_F,
          133 => Reg::F26_F,
          134 => Reg::F27_F,
          135 => Reg::F28_F,
          136 => Reg::F29_F,
          137 => Reg::F30_F,
          138 => Reg::F31_F,
          139 => Reg::F0_H,
          140 => Reg::F1_H,
          141 => Reg::F2_H,
          142 => Reg::F3_H,
          143 => Reg::F4_H,
          144 => Reg::F5_H,
          145 => Reg::F6_H,
          146 => Reg::F7_H,
          147 => Reg::F8_H,
          148 => Reg::F9_H,
          149 => Reg::F10_H,
          150 => Reg::F11_H,
          151 => Reg::F12_H,
          152 => Reg::F13_H,
          153 => Reg::F14_H,
          154 => Reg::F15_H,
          155 => Reg::F16_H,
          156 => Reg::F17_H,
          157 => Reg::F18_H,
          158 => Reg::F19_H,
          159 => Reg::F20_H,
          160 => Reg::F21_H,
          161 => Reg::F22_H,
          162 => Reg::F23_H,
          163 => Reg::F24_H,
          164 => Reg::F25_H,
          165 => Reg::F26_H,
          166 => Reg::F27_H,
          167 => Reg::F28_H,
          168 => Reg::F29_H,
          169 => Reg::F30_H,
          170 => Reg::F31_H,
          171 => Reg::X0_H,
          172 => Reg::X1_H,
          173 => Reg::X2_H,
          174 => Reg::X3_H,
          175 => Reg::X4_H,
          176 => Reg::X5_H,
          177 => Reg::X6_H,
          178 => Reg::X7_H,
          179 => Reg::X8_H,
          180 => Reg::X9_H,
          181 => Reg::X10_H,
          182 => Reg::X11_H,
          183 => Reg::X12_H,
          184 => Reg::X13_H,
          185 => Reg::X14_H,
          186 => Reg::X15_H,
          187 => Reg::X16_H,
          188 => Reg::X17_H,
          189 => Reg::X18_H,
          190 => Reg::X19_H,
          191 => Reg::X20_H,
          192 => Reg::X21_H,
          193 => Reg::X22_H,
          194 => Reg::X23_H,
          195 => Reg::X24_H,
          196 => Reg::X25_H,
          197 => Reg::X26_H,
          198 => Reg::X27_H,
          199 => Reg::X28_H,
          200 => Reg::X29_H,
          201 => Reg::X30_H,
          202 => Reg::X31_H,
          203 => Reg::X0_Pair,
          204 => Reg::X0_W,
          205 => Reg::X1_W,
          206 => Reg::X2_W,
          207 => Reg::X3_W,
          208 => Reg::X4_W,
          209 => Reg::X5_W,
          210 => Reg::X6_W,
          211 => Reg::X7_W,
          212 => Reg::X8_W,
          213 => Reg::X9_W,
          214 => Reg::X10_W,
          215 => Reg::X11_W,
          216 => Reg::X12_W,
          217 => Reg::X13_W,
          218 => Reg::X14_W,
          219 => Reg::X15_W,
          220 => Reg::X16_W,
          221 => Reg::X17_W,
          222 => Reg::X18_W,
          223 => Reg::X19_W,
          224 => Reg::X20_W,
          225 => Reg::X21_W,
          226 => Reg::X22_W,
          227 => Reg::X23_W,
          228 => Reg::X24_W,
          229 => Reg::X25_W,
          230 => Reg::X26_W,
          231 => Reg::X27_W,
          232 => Reg::X28_W,
          233 => Reg::X29_W,
          234 => Reg::X30_W,
          235 => Reg::X31_W,
          236 => Reg::V0M2,
          237 => Reg::V0M4,
          238 => Reg::V0M8,
          239 => Reg::V2M2,
          240 => Reg::V4M2,
          241 => Reg::V4M4,
          242 => Reg::V6M2,
          243 => Reg::V8M2,
          244 => Reg::V8M4,
          245 => Reg::V8M8,
          246 => Reg::V10M2,
          247 => Reg::V12M2,
          248 => Reg::V12M4,
          249 => Reg::V14M2,
          250 => Reg::V16M2,
          251 => Reg::V16M4,
          252 => Reg::V16M8,
          253 => Reg::V18M2,
          254 => Reg::V20M2,
          255 => Reg::V20M4,
          256 => Reg::V22M2,
          257 => Reg::V24M2,
          258 => Reg::V24M4,
          259 => Reg::V24M8,
          260 => Reg::V26M2,
          261 => Reg::V28M2,
          262 => Reg::V28M4,
          263 => Reg::V30M2,
          264 => Reg::X2_X3,
          265 => Reg::X4_X5,
          266 => Reg::X6_X7,
          267 => Reg::X8_X9,
          268 => Reg::X10_X11,
          269 => Reg::X12_X13,
          270 => Reg::X14_X15,
          271 => Reg::X16_X17,
          272 => Reg::X18_X19,
          273 => Reg::X20_X21,
          274 => Reg::X22_X23,
          275 => Reg::X24_X25,
          276 => Reg::X26_X27,
          277 => Reg::X28_X29,
          278 => Reg::X30_X31,
          279 => Reg::V1_V2,
          280 => Reg::V2_V3,
          281 => Reg::V3_V4,
          282 => Reg::V4_V5,
          283 => Reg::V5_V6,
          284 => Reg::V6_V7,
          285 => Reg::V7_V8,
          286 => Reg::V8_V9,
          287 => Reg::V9_V10,
          288 => Reg::V10_V11,
          289 => Reg::V11_V12,
          290 => Reg::V12_V13,
          291 => Reg::V13_V14,
          292 => Reg::V14_V15,
          293 => Reg::V15_V16,
          294 => Reg::V16_V17,
          295 => Reg::V17_V18,
          296 => Reg::V18_V19,
          297 => Reg::V19_V20,
          298 => Reg::V20_V21,
          299 => Reg::V21_V22,
          300 => Reg::V22_V23,
          301 => Reg::V23_V24,
          302 => Reg::V24_V25,
          303 => Reg::V25_V26,
          304 => Reg::V26_V27,
          305 => Reg::V27_V28,
          306 => Reg::V28_V29,
          307 => Reg::V29_V30,
          308 => Reg::V30_V31,
          309 => Reg::V0_V1,
          310 => Reg::V2M2_V4M2,
          311 => Reg::V4M2_V6M2,
          312 => Reg::V6M2_V8M2,
          313 => Reg::V8M2_V10M2,
          314 => Reg::V10M2_V12M2,
          315 => Reg::V12M2_V14M2,
          316 => Reg::V14M2_V16M2,
          317 => Reg::V16M2_V18M2,
          318 => Reg::V18M2_V20M2,
          319 => Reg::V20M2_V22M2,
          320 => Reg::V22M2_V24M2,
          321 => Reg::V24M2_V26M2,
          322 => Reg::V26M2_V28M2,
          323 => Reg::V28M2_V30M2,
          324 => Reg::V0M2_V2M2,
          325 => Reg::V4M4_V8M4,
          326 => Reg::V8M4_V12M4,
          327 => Reg::V12M4_V16M4,
          328 => Reg::V16M4_V20M4,
          329 => Reg::V20M4_V24M4,
          330 => Reg::V24M4_V28M4,
          331 => Reg::V0M4_V4M4,
          332 => Reg::V1_V2_V3,
          333 => Reg::V2_V3_V4,
          334 => Reg::V3_V4_V5,
          335 => Reg::V4_V5_V6,
          336 => Reg::V5_V6_V7,
          337 => Reg::V6_V7_V8,
          338 => Reg::V7_V8_V9,
          339 => Reg::V8_V9_V10,
          340 => Reg::V9_V10_V11,
          341 => Reg::V10_V11_V12,
          342 => Reg::V11_V12_V13,
          343 => Reg::V12_V13_V14,
          344 => Reg::V13_V14_V15,
          345 => Reg::V14_V15_V16,
          346 => Reg::V15_V16_V17,
          347 => Reg::V16_V17_V18,
          348 => Reg::V17_V18_V19,
          349 => Reg::V18_V19_V20,
          350 => Reg::V19_V20_V21,
          351 => Reg::V20_V21_V22,
          352 => Reg::V21_V22_V23,
          353 => Reg::V22_V23_V24,
          354 => Reg::V23_V24_V25,
          355 => Reg::V24_V25_V26,
          356 => Reg::V25_V26_V27,
          357 => Reg::V26_V27_V28,
          358 => Reg::V27_V28_V29,
          359 => Reg::V28_V29_V30,
          360 => Reg::V29_V30_V31,
          361 => Reg::V0_V1_V2,
          362 => Reg::V2M2_V4M2_V6M2,
          363 => Reg::V4M2_V6M2_V8M2,
          364 => Reg::V6M2_V8M2_V10M2,
          365 => Reg::V8M2_V10M2_V12M2,
          366 => Reg::V10M2_V12M2_V14M2,
          367 => Reg::V12M2_V14M2_V16M2,
          368 => Reg::V14M2_V16M2_V18M2,
          369 => Reg::V16M2_V18M2_V20M2,
          370 => Reg::V18M2_V20M2_V22M2,
          371 => Reg::V20M2_V22M2_V24M2,
          372 => Reg::V22M2_V24M2_V26M2,
          373 => Reg::V24M2_V26M2_V28M2,
          374 => Reg::V26M2_V28M2_V30M2,
          375 => Reg::V0M2_V2M2_V4M2,
          376 => Reg::V1_V2_V3_V4,
          377 => Reg::V2_V3_V4_V5,
          378 => Reg::V3_V4_V5_V6,
          379 => Reg::V4_V5_V6_V7,
          380 => Reg::V5_V6_V7_V8,
          381 => Reg::V6_V7_V8_V9,
          382 => Reg::V7_V8_V9_V10,
          383 => Reg::V8_V9_V10_V11,
          384 => Reg::V9_V10_V11_V12,
          385 => Reg::V10_V11_V12_V13,
          386 => Reg::V11_V12_V13_V14,
          387 => Reg::V12_V13_V14_V15,
          388 => Reg::V13_V14_V15_V16,
          389 => Reg::V14_V15_V16_V17,
          390 => Reg::V15_V16_V17_V18,
          391 => Reg::V16_V17_V18_V19,
          392 => Reg::V17_V18_V19_V20,
          393 => Reg::V18_V19_V20_V21,
          394 => Reg::V19_V20_V21_V22,
          395 => Reg::V20_V21_V22_V23,
          396 => Reg::V21_V22_V23_V24,
          397 => Reg::V22_V23_V24_V25,
          398 => Reg::V23_V24_V25_V26,
          399 => Reg::V24_V25_V26_V27,
          400 => Reg::V25_V26_V27_V28,
          401 => Reg::V26_V27_V28_V29,
          402 => Reg::V27_V28_V29_V30,
          403 => Reg::V28_V29_V30_V31,
          404 => Reg::V0_V1_V2_V3,
          405 => Reg::V2M2_V4M2_V6M2_V8M2,
          406 => Reg::V4M2_V6M2_V8M2_V10M2,
          407 => Reg::V6M2_V8M2_V10M2_V12M2,
          408 => Reg::V8M2_V10M2_V12M2_V14M2,
          409 => Reg::V10M2_V12M2_V14M2_V16M2,
          410 => Reg::V12M2_V14M2_V16M2_V18M2,
          411 => Reg::V14M2_V16M2_V18M2_V20M2,
          412 => Reg::V16M2_V18M2_V20M2_V22M2,
          413 => Reg::V18M2_V20M2_V22M2_V24M2,
          414 => Reg::V20M2_V22M2_V24M2_V26M2,
          415 => Reg::V22M2_V24M2_V26M2_V28M2,
          416 => Reg::V24M2_V26M2_V28M2_V30M2,
          417 => Reg::V0M2_V2M2_V4M2_V6M2,
          418 => Reg::V1_V2_V3_V4_V5,
          419 => Reg::V2_V3_V4_V5_V6,
          420 => Reg::V3_V4_V5_V6_V7,
          421 => Reg::V4_V5_V6_V7_V8,
          422 => Reg::V5_V6_V7_V8_V9,
          423 => Reg::V6_V7_V8_V9_V10,
          424 => Reg::V7_V8_V9_V10_V11,
          425 => Reg::V8_V9_V10_V11_V12,
          426 => Reg::V9_V10_V11_V12_V13,
          427 => Reg::V10_V11_V12_V13_V14,
          428 => Reg::V11_V12_V13_V14_V15,
          429 => Reg::V12_V13_V14_V15_V16,
          430 => Reg::V13_V14_V15_V16_V17,
          431 => Reg::V14_V15_V16_V17_V18,
          432 => Reg::V15_V16_V17_V18_V19,
          433 => Reg::V16_V17_V18_V19_V20,
          434 => Reg::V17_V18_V19_V20_V21,
          435 => Reg::V18_V19_V20_V21_V22,
          436 => Reg::V19_V20_V21_V22_V23,
          437 => Reg::V20_V21_V22_V23_V24,
          438 => Reg::V21_V22_V23_V24_V25,
          439 => Reg::V22_V23_V24_V25_V26,
          440 => Reg::V23_V24_V25_V26_V27,
          441 => Reg::V24_V25_V26_V27_V28,
          442 => Reg::V25_V26_V27_V28_V29,
          443 => Reg::V26_V27_V28_V29_V30,
          444 => Reg::V27_V28_V29_V30_V31,
          445 => Reg::V0_V1_V2_V3_V4,
          446 => Reg::V1_V2_V3_V4_V5_V6,
          447 => Reg::V2_V3_V4_V5_V6_V7,
          448 => Reg::V3_V4_V5_V6_V7_V8,
          449 => Reg::V4_V5_V6_V7_V8_V9,
          450 => Reg::V5_V6_V7_V8_V9_V10,
          451 => Reg::V6_V7_V8_V9_V10_V11,
          452 => Reg::V7_V8_V9_V10_V11_V12,
          453 => Reg::V8_V9_V10_V11_V12_V13,
          454 => Reg::V9_V10_V11_V12_V13_V14,
          455 => Reg::V10_V11_V12_V13_V14_V15,
          456 => Reg::V11_V12_V13_V14_V15_V16,
          457 => Reg::V12_V13_V14_V15_V16_V17,
          458 => Reg::V13_V14_V15_V16_V17_V18,
          459 => Reg::V14_V15_V16_V17_V18_V19,
          460 => Reg::V15_V16_V17_V18_V19_V20,
          461 => Reg::V16_V17_V18_V19_V20_V21,
          462 => Reg::V17_V18_V19_V20_V21_V22,
          463 => Reg::V18_V19_V20_V21_V22_V23,
          464 => Reg::V19_V20_V21_V22_V23_V24,
          465 => Reg::V20_V21_V22_V23_V24_V25,
          466 => Reg::V21_V22_V23_V24_V25_V26,
          467 => Reg::V22_V23_V24_V25_V26_V27,
          468 => Reg::V23_V24_V25_V26_V27_V28,
          469 => Reg::V24_V25_V26_V27_V28_V29,
          470 => Reg::V25_V26_V27_V28_V29_V30,
          471 => Reg::V26_V27_V28_V29_V30_V31,
          472 => Reg::V0_V1_V2_V3_V4_V5,
          473 => Reg::V1_V2_V3_V4_V5_V6_V7,
          474 => Reg::V2_V3_V4_V5_V6_V7_V8,
          475 => Reg::V3_V4_V5_V6_V7_V8_V9,
          476 => Reg::V4_V5_V6_V7_V8_V9_V10,
          477 => Reg::V5_V6_V7_V8_V9_V10_V11,
          478 => Reg::V6_V7_V8_V9_V10_V11_V12,
          479 => Reg::V7_V8_V9_V10_V11_V12_V13,
          480 => Reg::V8_V9_V10_V11_V12_V13_V14,
          481 => Reg::V9_V10_V11_V12_V13_V14_V15,
          482 => Reg::V10_V11_V12_V13_V14_V15_V16,
          483 => Reg::V11_V12_V13_V14_V15_V16_V17,
          484 => Reg::V12_V13_V14_V15_V16_V17_V18,
          485 => Reg::V13_V14_V15_V16_V17_V18_V19,
          486 => Reg::V14_V15_V16_V17_V18_V19_V20,
          487 => Reg::V15_V16_V17_V18_V19_V20_V21,
          488 => Reg::V16_V17_V18_V19_V20_V21_V22,
          489 => Reg::V17_V18_V19_V20_V21_V22_V23,
          490 => Reg::V18_V19_V20_V21_V22_V23_V24,
          491 => Reg::V19_V20_V21_V22_V23_V24_V25,
          492 => Reg::V20_V21_V22_V23_V24_V25_V26,
          493 => Reg::V21_V22_V23_V24_V25_V26_V27,
          494 => Reg::V22_V23_V24_V25_V26_V27_V28,
          495 => Reg::V23_V24_V25_V26_V27_V28_V29,
          496 => Reg::V24_V25_V26_V27_V28_V29_V30,
          497 => Reg::V25_V26_V27_V28_V29_V30_V31,
          498 => Reg::V0_V1_V2_V3_V4_V5_V6,
          499 => Reg::V1_V2_V3_V4_V5_V6_V7_V8,
          500 => Reg::V2_V3_V4_V5_V6_V7_V8_V9,
          501 => Reg::V3_V4_V5_V6_V7_V8_V9_V10,
          502 => Reg::V4_V5_V6_V7_V8_V9_V10_V11,
          503 => Reg::V5_V6_V7_V8_V9_V10_V11_V12,
          504 => Reg::V6_V7_V8_V9_V10_V11_V12_V13,
          505 => Reg::V7_V8_V9_V10_V11_V12_V13_V14,
          506 => Reg::V8_V9_V10_V11_V12_V13_V14_V15,
          507 => Reg::V9_V10_V11_V12_V13_V14_V15_V16,
          508 => Reg::V10_V11_V12_V13_V14_V15_V16_V17,
          509 => Reg::V11_V12_V13_V14_V15_V16_V17_V18,
          510 => Reg::V12_V13_V14_V15_V16_V17_V18_V19,
          511 => Reg::V13_V14_V15_V16_V17_V18_V19_V20,
          512 => Reg::V14_V15_V16_V17_V18_V19_V20_V21,
          513 => Reg::V15_V16_V17_V18_V19_V20_V21_V22,
          514 => Reg::V16_V17_V18_V19_V20_V21_V22_V23,
          515 => Reg::V17_V18_V19_V20_V21_V22_V23_V24,
          516 => Reg::V18_V19_V20_V21_V22_V23_V24_V25,
          517 => Reg::V19_V20_V21_V22_V23_V24_V25_V26,
          518 => Reg::V20_V21_V22_V23_V24_V25_V26_V27,
          519 => Reg::V21_V22_V23_V24_V25_V26_V27_V28,
          520 => Reg::V22_V23_V24_V25_V26_V27_V28_V29,
          521 => Reg::V23_V24_V25_V26_V27_V28_V29_V30,
          522 => Reg::V24_V25_V26_V27_V28_V29_V30_V31,
          523 => Reg::V0_V1_V2_V3_V4_V5_V6_V7,
          524 => Reg::NUM_TARGET_REGS,
          _ => Reg::UNKNOWN(value),
        }
    }
}
