from typing import Any, ClassVar, Optional

from typing import overload
import collections.abc
import lief.MachO # type: ignore
import lief.dsc # type: ignore
import lief.dsc.DyldSharedCache # type: ignore
import lief.dsc.Dylib # type: ignore
import os

class DyldSharedCache:
    class ARCH:
        ARM64: ClassVar[DyldSharedCache.ARCH] = ...
        ARM64E: ClassVar[DyldSharedCache.ARCH] = ...
        ARMV5: ClassVar[DyldSharedCache.ARCH] = ...
        ARMV6: ClassVar[DyldSharedCache.ARCH] = ...
        ARMV7: ClassVar[DyldSharedCache.ARCH] = ...
        I386: ClassVar[DyldSharedCache.ARCH] = ...
        UNKNOWN: ClassVar[DyldSharedCache.ARCH] = ...
        X86_64: ClassVar[DyldSharedCache.ARCH] = ...
        X86_64H: ClassVar[DyldSharedCache.ARCH] = ...
        __name__: str
        def __init__(self, *args, **kwargs) -> None: ...
        def __ge__(self, other) -> bool: ...
        def __gt__(self, other) -> bool: ...
        def __hash__(self) -> int: ...
        def __index__(self) -> Any: ...
        def __int__(self) -> int: ...
        def __le__(self, other) -> bool: ...
        def __lt__(self, other) -> bool: ...

    class PLATFORM:
        ANY: ClassVar[DyldSharedCache.PLATFORM] = ...
        BRIDGEOS: ClassVar[DyldSharedCache.PLATFORM] = ...
        DRIVERKIT: ClassVar[DyldSharedCache.PLATFORM] = ...
        FIRMWARE: ClassVar[DyldSharedCache.PLATFORM] = ...
        IOS: ClassVar[DyldSharedCache.PLATFORM] = ...
        IOSMAC: ClassVar[DyldSharedCache.PLATFORM] = ...
        IOS_SIMULATOR: ClassVar[DyldSharedCache.PLATFORM] = ...
        MACOS: ClassVar[DyldSharedCache.PLATFORM] = ...
        SEPOS: ClassVar[DyldSharedCache.PLATFORM] = ...
        TVOS: ClassVar[DyldSharedCache.PLATFORM] = ...
        TVOS_SIMULATOR: ClassVar[DyldSharedCache.PLATFORM] = ...
        UNKNOWN: ClassVar[DyldSharedCache.PLATFORM] = ...
        VISIONOS: ClassVar[DyldSharedCache.PLATFORM] = ...
        VISIONOS_SIMULATOR: ClassVar[DyldSharedCache.PLATFORM] = ...
        WATCHOS: ClassVar[DyldSharedCache.PLATFORM] = ...
        WATCHOS_SIMULATOR: ClassVar[DyldSharedCache.PLATFORM] = ...
        __name__: str
        def __init__(self, *args, **kwargs) -> None: ...
        def __ge__(self, other) -> bool: ...
        def __gt__(self, other) -> bool: ...
        def __hash__(self) -> int: ...
        def __index__(self) -> Any: ...
        def __int__(self) -> int: ...
        def __le__(self, other) -> bool: ...
        def __lt__(self, other) -> bool: ...

    class VERSION:
        DYLD_1042_1: ClassVar[DyldSharedCache.VERSION] = ...
        DYLD_195_5: ClassVar[DyldSharedCache.VERSION] = ...
        DYLD_239_3: ClassVar[DyldSharedCache.VERSION] = ...
        DYLD_360_14: ClassVar[DyldSharedCache.VERSION] = ...
        DYLD_421_1: ClassVar[DyldSharedCache.VERSION] = ...
        DYLD_832_7_1: ClassVar[DyldSharedCache.VERSION] = ...
        DYLD_940: ClassVar[DyldSharedCache.VERSION] = ...
        DYLD_95_3: ClassVar[DyldSharedCache.VERSION] = ...
        UNKNOWN: ClassVar[DyldSharedCache.VERSION] = ...
        UNRELEASED: ClassVar[DyldSharedCache.VERSION] = ...
        __name__: str
        def __init__(self, *args, **kwargs) -> None: ...
        def __ge__(self, other) -> bool: ...
        def __gt__(self, other) -> bool: ...
        def __hash__(self) -> int: ...
        def __index__(self) -> Any: ...
        def __int__(self) -> int: ...
        def __le__(self, other) -> bool: ...
        def __lt__(self, other) -> bool: ...
    def __init__(self, *args, **kwargs) -> None: ...
    def enable_caching(self, target_dir: str) -> None: ...
    def find_lib_from_name(self, name: str) -> Optional[lief.dsc.Dylib]: ...
    def find_lib_from_path(self, path: str) -> Optional[lief.dsc.Dylib]: ...
    def find_lib_from_va(self, virtual_address: int) -> Optional[lief.dsc.Dylib]: ...
    def flush_cache(self) -> None: ...
    @staticmethod
    def from_files(files: list[str]) -> Optional[lief.dsc.DyldSharedCache]: ...
    @staticmethod
    def from_path(path: str, arch: str = ...) -> Optional[lief.dsc.DyldSharedCache]: ...
    @property
    def arch(self) -> lief.dsc.DyldSharedCache.ARCH: ...
    @property
    def arch_name(self) -> str: ...
    @property
    def filename(self) -> str: ...
    @property
    def filepath(self) -> str: ...
    @property
    def has_subcaches(self) -> bool: ...
    @property
    def libraries(self) -> collections.abc.Sequence[Optional[lief.dsc.Dylib]]: ...
    @property
    def load_address(self) -> int: ...
    @property
    def mapping_info(self) -> collections.abc.Sequence[Optional[lief.dsc.MappingInfo]]: ...
    @property
    def platform(self) -> lief.dsc.DyldSharedCache.PLATFORM: ...
    @property
    def subcaches(self) -> collections.abc.Sequence[Optional[lief.dsc.SubCache]]: ...
    @property
    def version(self) -> lief.dsc.DyldSharedCache.VERSION: ...

class Dylib:
    class extract_opt_t:
        create_dyld_chained_fixup_cmd: bool
        fix_branches: bool
        fix_memory: bool
        fix_objc: bool
        fix_relocations: bool
        pack: bool
        def __init__(self) -> None: ...
    def __init__(self, *args, **kwargs) -> None: ...
    def get(self, opt: lief.dsc.Dylib.extract_opt_t = ...) -> Optional[lief.MachO.Binary]: ...
    @property
    def address(self) -> int: ...
    @property
    def inode(self) -> int: ...
    @property
    def modtime(self) -> int: ...
    @property
    def padding(self) -> int: ...
    @property
    def path(self) -> str: ...

class MappingInfo:
    def __init__(self, *args, **kwargs) -> None: ...
    @property
    def address(self) -> int: ...
    @property
    def end_address(self) -> int: ...
    @property
    def file_offset(self) -> int: ...
    @property
    def init_prot(self) -> int: ...
    @property
    def max_prot(self) -> int: ...
    @property
    def size(self) -> int: ...

class SubCache:
    def __init__(self, *args, **kwargs) -> None: ...
    @property
    def cache(self) -> Optional[lief.dsc.DyldSharedCache]: ...
    @property
    def suffix(self) -> str: ...
    @property
    def uuid(self) -> list[int]: ...
    @property
    def vm_offset(self) -> int: ...

@overload
def enable_cache() -> bool: ...
@overload
def enable_cache(target_cache_dir: str) -> bool: ...
@overload
def load(files: list[str]) -> Optional[lief.dsc.DyldSharedCache]: ...
@overload
def load(path: os.PathLike, arch: str = ...) -> Optional[lief.dsc.DyldSharedCache]: ...
