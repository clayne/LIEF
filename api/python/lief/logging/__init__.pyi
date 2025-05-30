import enum
from typing import Iterator, Optional, Union


class LEVEL(enum.Enum):
    OFF = 0

    TRACE = 1

    DEBUG = 2

    CRITICAL = 6

    ERROR = 5

    WARN = 4

    INFO = 3

def disable() -> None: ...

def enable() -> None: ...

def set_level(level: LEVEL) -> None: ...

def get_level() -> LEVEL: ...

def set_path(path: str) -> None: ...

def log(level: LEVEL, msg: str) -> None: ...

def debug(msg: str) -> None: ...

def info(msg: str) -> None: ...

def warn(msg: str) -> None: ...

def err(msg: str) -> None: ...

def critical(msg: str) -> None: ...

def enable_debug() -> None: ...

def reset() -> None: ...
