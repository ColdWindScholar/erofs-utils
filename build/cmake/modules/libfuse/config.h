/*
 * Autogenerated by the Meson build system.
 * Do not edit, your changes will be lost.
 */

#pragma once

#include <iconv.h>
#include <sys/xattr.h>

#if defined(ANDROID) || defined(_ANDROID_)
#include "android_config.h"
#endif

#define HAVE_COPY_FILE_RANGE

#define HAVE_FALLOCATE

#define HAVE_FDATASYNC

#define HAVE_FORK

#define HAVE_FSTATAT

#define HAVE_ICONV

#define HAVE_OPENAT

#define HAVE_PIPE2

#define HAVE_POSIX_FALLOCATE

#define HAVE_READLINKAT

#define HAVE_SETXATTR

#define HAVE_SPLICE

#define HAVE_STRUCT_STAT_ST_ATIM

#undef HAVE_STRUCT_STAT_ST_ATIMESPEC

#define HAVE_UTIMENSAT

#define HAVE_VMSPLICE

#define PACKAGE_VERSION "3.12.0"
