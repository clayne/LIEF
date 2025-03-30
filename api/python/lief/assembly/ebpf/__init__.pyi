import enum
from typing import Iterator, Optional, Union

import lief


class Instruction(lief.assembly.Instruction):
    @property
    def opcode(self) -> OPCODE: ...

class OPCODE(enum.Enum):
    PHI = 0

    INLINEASM = 1

    INLINEASM_BR = 2

    CFI_INSTRUCTION = 3

    EH_LABEL = 4

    GC_LABEL = 5

    ANNOTATION_LABEL = 6

    KILL = 7

    EXTRACT_SUBREG = 8

    INSERT_SUBREG = 9

    IMPLICIT_DEF = 10

    INIT_UNDEF = 11

    SUBREG_TO_REG = 12

    COPY_TO_REGCLASS = 13

    DBG_VALUE = 14

    DBG_VALUE_LIST = 15

    DBG_INSTR_REF = 16

    DBG_PHI = 17

    DBG_LABEL = 18

    REG_SEQUENCE = 19

    COPY = 20

    BUNDLE = 21

    LIFETIME_START = 22

    LIFETIME_END = 23

    PSEUDO_PROBE = 24

    ARITH_FENCE = 25

    STACKMAP = 26

    FENTRY_CALL = 27

    PATCHPOINT = 28

    LOAD_STACK_GUARD = 29

    PREALLOCATED_SETUP = 30

    PREALLOCATED_ARG = 31

    STATEPOINT = 32

    LOCAL_ESCAPE = 33

    FAULTING_OP = 34

    PATCHABLE_OP = 35

    PATCHABLE_FUNCTION_ENTER = 36

    PATCHABLE_RET = 37

    PATCHABLE_FUNCTION_EXIT = 38

    PATCHABLE_TAIL_CALL = 39

    PATCHABLE_EVENT_CALL = 40

    PATCHABLE_TYPED_EVENT_CALL = 41

    ICALL_BRANCH_FUNNEL = 42

    FAKE_USE = 43

    MEMBARRIER = 44

    JUMP_TABLE_DEBUG_INFO = 45

    CONVERGENCECTRL_ENTRY = 46

    CONVERGENCECTRL_ANCHOR = 47

    CONVERGENCECTRL_LOOP = 48

    CONVERGENCECTRL_GLUE = 49

    G_ASSERT_SEXT = 50

    G_ASSERT_ZEXT = 51

    G_ASSERT_ALIGN = 52

    G_ADD = 53

    G_SUB = 54

    G_MUL = 55

    G_SDIV = 56

    G_UDIV = 57

    G_SREM = 58

    G_UREM = 59

    G_SDIVREM = 60

    G_UDIVREM = 61

    G_AND = 62

    G_OR = 63

    G_XOR = 64

    G_ABDS = 65

    G_ABDU = 66

    G_IMPLICIT_DEF = 67

    G_PHI = 68

    G_FRAME_INDEX = 69

    G_GLOBAL_VALUE = 70

    G_PTRAUTH_GLOBAL_VALUE = 71

    G_CONSTANT_POOL = 72

    G_EXTRACT = 73

    G_UNMERGE_VALUES = 74

    G_INSERT = 75

    G_MERGE_VALUES = 76

    G_BUILD_VECTOR = 77

    G_BUILD_VECTOR_TRUNC = 78

    G_CONCAT_VECTORS = 79

    G_PTRTOINT = 80

    G_INTTOPTR = 81

    G_BITCAST = 82

    G_FREEZE = 83

    G_CONSTANT_FOLD_BARRIER = 84

    G_INTRINSIC_FPTRUNC_ROUND = 85

    G_INTRINSIC_TRUNC = 86

    G_INTRINSIC_ROUND = 87

    G_INTRINSIC_LRINT = 88

    G_INTRINSIC_LLRINT = 89

    G_INTRINSIC_ROUNDEVEN = 90

    G_READCYCLECOUNTER = 91

    G_READSTEADYCOUNTER = 92

    G_LOAD = 93

    G_SEXTLOAD = 94

    G_ZEXTLOAD = 95

    G_INDEXED_LOAD = 96

    G_INDEXED_SEXTLOAD = 97

    G_INDEXED_ZEXTLOAD = 98

    G_STORE = 99

    G_INDEXED_STORE = 100

    G_ATOMIC_CMPXCHG_WITH_SUCCESS = 101

    G_ATOMIC_CMPXCHG = 102

    G_ATOMICRMW_XCHG = 103

    G_ATOMICRMW_ADD = 104

    G_ATOMICRMW_SUB = 105

    G_ATOMICRMW_AND = 106

    G_ATOMICRMW_NAND = 107

    G_ATOMICRMW_OR = 108

    G_ATOMICRMW_XOR = 109

    G_ATOMICRMW_MAX = 110

    G_ATOMICRMW_MIN = 111

    G_ATOMICRMW_UMAX = 112

    G_ATOMICRMW_UMIN = 113

    G_ATOMICRMW_FADD = 114

    G_ATOMICRMW_FSUB = 115

    G_ATOMICRMW_FMAX = 116

    G_ATOMICRMW_FMIN = 117

    G_ATOMICRMW_UINC_WRAP = 118

    G_ATOMICRMW_UDEC_WRAP = 119

    G_ATOMICRMW_USUB_COND = 120

    G_ATOMICRMW_USUB_SAT = 121

    G_FENCE = 122

    G_PREFETCH = 123

    G_BRCOND = 124

    G_BRINDIRECT = 125

    G_INVOKE_REGION_START = 126

    G_INTRINSIC = 127

    G_INTRINSIC_W_SIDE_EFFECTS = 128

    G_INTRINSIC_CONVERGENT = 129

    G_INTRINSIC_CONVERGENT_W_SIDE_EFFECTS = 130

    G_ANYEXT = 131

    G_TRUNC = 132

    G_CONSTANT = 133

    G_FCONSTANT = 134

    G_VASTART = 135

    G_VAARG = 136

    G_SEXT = 137

    G_SEXT_INREG = 138

    G_ZEXT = 139

    G_SHL = 140

    G_LSHR = 141

    G_ASHR = 142

    G_FSHL = 143

    G_FSHR = 144

    G_ROTR = 145

    G_ROTL = 146

    G_ICMP = 147

    G_FCMP = 148

    G_SCMP = 149

    G_UCMP = 150

    G_SELECT = 151

    G_UADDO = 152

    G_UADDE = 153

    G_USUBO = 154

    G_USUBE = 155

    G_SADDO = 156

    G_SADDE = 157

    G_SSUBO = 158

    G_SSUBE = 159

    G_UMULO = 160

    G_SMULO = 161

    G_UMULH = 162

    G_SMULH = 163

    G_UADDSAT = 164

    G_SADDSAT = 165

    G_USUBSAT = 166

    G_SSUBSAT = 167

    G_USHLSAT = 168

    G_SSHLSAT = 169

    G_SMULFIX = 170

    G_UMULFIX = 171

    G_SMULFIXSAT = 172

    G_UMULFIXSAT = 173

    G_SDIVFIX = 174

    G_UDIVFIX = 175

    G_SDIVFIXSAT = 176

    G_UDIVFIXSAT = 177

    G_FADD = 178

    G_FSUB = 179

    G_FMUL = 180

    G_FMA = 181

    G_FMAD = 182

    G_FDIV = 183

    G_FREM = 184

    G_FPOW = 185

    G_FPOWI = 186

    G_FEXP = 187

    G_FEXP2 = 188

    G_FEXP10 = 189

    G_FLOG = 190

    G_FLOG2 = 191

    G_FLOG10 = 192

    G_FLDEXP = 193

    G_FFREXP = 194

    G_FNEG = 195

    G_FPEXT = 196

    G_FPTRUNC = 197

    G_FPTOSI = 198

    G_FPTOUI = 199

    G_SITOFP = 200

    G_UITOFP = 201

    G_FPTOSI_SAT = 202

    G_FPTOUI_SAT = 203

    G_FABS = 204

    G_FCOPYSIGN = 205

    G_IS_FPCLASS = 206

    G_FCANONICALIZE = 207

    G_FMINNUM = 208

    G_FMAXNUM = 209

    G_FMINNUM_IEEE = 210

    G_FMAXNUM_IEEE = 211

    G_FMINIMUM = 212

    G_FMAXIMUM = 213

    G_GET_FPENV = 214

    G_SET_FPENV = 215

    G_RESET_FPENV = 216

    G_GET_FPMODE = 217

    G_SET_FPMODE = 218

    G_RESET_FPMODE = 219

    G_PTR_ADD = 220

    G_PTRMASK = 221

    G_SMIN = 222

    G_SMAX = 223

    G_UMIN = 224

    G_UMAX = 225

    G_ABS = 226

    G_LROUND = 227

    G_LLROUND = 228

    G_BR = 229

    G_BRJT = 230

    G_VSCALE = 231

    G_INSERT_SUBVECTOR = 232

    G_EXTRACT_SUBVECTOR = 233

    G_INSERT_VECTOR_ELT = 234

    G_EXTRACT_VECTOR_ELT = 235

    G_SHUFFLE_VECTOR = 236

    G_SPLAT_VECTOR = 237

    G_STEP_VECTOR = 238

    G_VECTOR_COMPRESS = 239

    G_CTTZ = 240

    G_CTTZ_ZERO_UNDEF = 241

    G_CTLZ = 242

    G_CTLZ_ZERO_UNDEF = 243

    G_CTPOP = 244

    G_BSWAP = 245

    G_BITREVERSE = 246

    G_FCEIL = 247

    G_FCOS = 248

    G_FSIN = 249

    G_FSINCOS = 250

    G_FTAN = 251

    G_FACOS = 252

    G_FASIN = 253

    G_FATAN = 254

    G_FATAN2 = 255

    G_FCOSH = 256

    G_FSINH = 257

    G_FTANH = 258

    G_FSQRT = 259

    G_FFLOOR = 260

    G_FRINT = 261

    G_FNEARBYINT = 262

    G_ADDRSPACE_CAST = 263

    G_BLOCK_ADDR = 264

    G_JUMP_TABLE = 265

    G_DYN_STACKALLOC = 266

    G_STACKSAVE = 267

    G_STACKRESTORE = 268

    G_STRICT_FADD = 269

    G_STRICT_FSUB = 270

    G_STRICT_FMUL = 271

    G_STRICT_FDIV = 272

    G_STRICT_FREM = 273

    G_STRICT_FMA = 274

    G_STRICT_FSQRT = 275

    G_STRICT_FLDEXP = 276

    G_READ_REGISTER = 277

    G_WRITE_REGISTER = 278

    G_MEMCPY = 279

    G_MEMCPY_INLINE = 280

    G_MEMMOVE = 281

    G_MEMSET = 282

    G_BZERO = 283

    G_TRAP = 284

    G_DEBUGTRAP = 285

    G_UBSANTRAP = 286

    G_VECREDUCE_SEQ_FADD = 287

    G_VECREDUCE_SEQ_FMUL = 288

    G_VECREDUCE_FADD = 289

    G_VECREDUCE_FMUL = 290

    G_VECREDUCE_FMAX = 291

    G_VECREDUCE_FMIN = 292

    G_VECREDUCE_FMAXIMUM = 293

    G_VECREDUCE_FMINIMUM = 294

    G_VECREDUCE_ADD = 295

    G_VECREDUCE_MUL = 296

    G_VECREDUCE_AND = 297

    G_VECREDUCE_OR = 298

    G_VECREDUCE_XOR = 299

    G_VECREDUCE_SMAX = 300

    G_VECREDUCE_SMIN = 301

    G_VECREDUCE_UMAX = 302

    G_VECREDUCE_UMIN = 303

    G_SBFX = 304

    G_UBFX = 305

    ADJCALLSTACKDOWN = 306

    ADJCALLSTACKUP = 307

    FI_ri = 308

    MEMCPY = 309

    Select = 310

    Select_32 = 311

    Select_32_64 = 312

    Select_64_32 = 313

    Select_Ri = 314

    Select_Ri_32 = 315

    Select_Ri_32_64 = 316

    Select_Ri_64_32 = 317

    ADDR_SPACE_CAST = 318

    ADD_ri = 319

    ADD_ri_32 = 320

    ADD_rr = 321

    ADD_rr_32 = 322

    AND_ri = 323

    AND_ri_32 = 324

    AND_rr = 325

    AND_rr_32 = 326

    BE16 = 327

    BE32 = 328

    BE64 = 329

    BSWAP16 = 330

    BSWAP32 = 331

    BSWAP64 = 332

    CMPXCHGD = 333

    CMPXCHGW32 = 334

    CORE_LD32 = 335

    CORE_LD64 = 336

    CORE_SHIFT = 337

    CORE_ST = 338

    DIV_ri = 339

    DIV_ri_32 = 340

    DIV_rr = 341

    DIV_rr_32 = 342

    JAL = 343

    JALX = 344

    JCOND = 345

    JEQ_ri = 346

    JEQ_ri_32 = 347

    JEQ_rr = 348

    JEQ_rr_32 = 349

    JMP = 350

    JMPL = 351

    JNE_ri = 352

    JNE_ri_32 = 353

    JNE_rr = 354

    JNE_rr_32 = 355

    JSET_ri = 356

    JSET_ri_32 = 357

    JSET_rr = 358

    JSET_rr_32 = 359

    JSGE_ri = 360

    JSGE_ri_32 = 361

    JSGE_rr = 362

    JSGE_rr_32 = 363

    JSGT_ri = 364

    JSGT_ri_32 = 365

    JSGT_rr = 366

    JSGT_rr_32 = 367

    JSLE_ri = 368

    JSLE_ri_32 = 369

    JSLE_rr = 370

    JSLE_rr_32 = 371

    JSLT_ri = 372

    JSLT_ri_32 = 373

    JSLT_rr = 374

    JSLT_rr_32 = 375

    JUGE_ri = 376

    JUGE_ri_32 = 377

    JUGE_rr = 378

    JUGE_rr_32 = 379

    JUGT_ri = 380

    JUGT_ri_32 = 381

    JUGT_rr = 382

    JUGT_rr_32 = 383

    JULE_ri = 384

    JULE_ri_32 = 385

    JULE_rr = 386

    JULE_rr_32 = 387

    JULT_ri = 388

    JULT_ri_32 = 389

    JULT_rr = 390

    JULT_rr_32 = 391

    LDB = 392

    LDB32 = 393

    LDBSX = 394

    LDD = 395

    LDH = 396

    LDH32 = 397

    LDHSX = 398

    LDW = 399

    LDW32 = 400

    LDWSX = 401

    LD_ABS_B = 402

    LD_ABS_H = 403

    LD_ABS_W = 404

    LD_IND_B = 405

    LD_IND_H = 406

    LD_IND_W = 407

    LD_imm64 = 408

    LD_pseudo = 409

    LE16 = 410

    LE32 = 411

    LE64 = 412

    MOD_ri = 413

    MOD_ri_32 = 414

    MOD_rr = 415

    MOD_rr_32 = 416

    MOVSX_rr_16 = 417

    MOVSX_rr_32 = 418

    MOVSX_rr_32_16 = 419

    MOVSX_rr_32_8 = 420

    MOVSX_rr_8 = 421

    MOV_32_64 = 422

    MOV_ri = 423

    MOV_ri_32 = 424

    MOV_rr = 425

    MOV_rr_32 = 426

    MUL_ri = 427

    MUL_ri_32 = 428

    MUL_rr = 429

    MUL_rr_32 = 430

    NEG_32 = 431

    NEG_64 = 432

    NOP = 433

    OR_ri = 434

    OR_ri_32 = 435

    OR_rr = 436

    OR_rr_32 = 437

    RET = 438

    SDIV_ri = 439

    SDIV_ri_32 = 440

    SDIV_rr = 441

    SDIV_rr_32 = 442

    SLL_ri = 443

    SLL_ri_32 = 444

    SLL_rr = 445

    SLL_rr_32 = 446

    SMOD_ri = 447

    SMOD_ri_32 = 448

    SMOD_rr = 449

    SMOD_rr_32 = 450

    SRA_ri = 451

    SRA_ri_32 = 452

    SRA_rr = 453

    SRA_rr_32 = 454

    SRL_ri = 455

    SRL_ri_32 = 456

    SRL_rr = 457

    SRL_rr_32 = 458

    STB = 459

    STB32 = 460

    STB_imm = 461

    STD = 462

    STD_imm = 463

    STH = 464

    STH32 = 465

    STH_imm = 466

    STW = 467

    STW32 = 468

    STW_imm = 469

    SUB_ri = 470

    SUB_ri_32 = 471

    SUB_rr = 472

    SUB_rr_32 = 473

    XADDD = 474

    XADDW = 475

    XADDW32 = 476

    XANDD = 477

    XANDW32 = 478

    XCHGD = 479

    XCHGW32 = 480

    XFADDD = 481

    XFADDW32 = 482

    XFANDD = 483

    XFANDW32 = 484

    XFORD = 485

    XFORW32 = 486

    XFXORD = 487

    XFXORW32 = 488

    XORD = 489

    XORW32 = 490

    XOR_ri = 491

    XOR_ri_32 = 492

    XOR_rr = 493

    XOR_rr_32 = 494

    XXORD = 495

    XXORW32 = 496

    INSTRUCTION_LIST_END = 497
