#ifndef BCT_CORE_MODULE_H
#define BCT_CORE_MODULE_H

#pragma once

#include <SDKDDKVer.h>

#define WIN32_LEAN_AND_MEAN

#ifdef BCT_CORE_EXPORT
#define BCT_CORE_API __declspec(dllexport)
#else
#define BCT_CORE_API __declspec(dllimport)
#endif

#include <stdlib.h>
#include <wchar.h>
#include <windows.h>

#endif //BCT_CORE_MODULE_H
