/*  x360ce - XBOX360 Controler Emulator
 *  Copyright (C) 2002-2010 ToCA Edit
 *
 *  x360ce is free software: you can redistribute it and/or modify it under the terms
 *  of the GNU Lesser General Public License as published by the Free Software Found-
 *  ation, either version 3 of the License, or (at your option) any later version.
 *
 *  x360ce is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY;
 *  without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
 *  PURPOSE.  See the GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License along with x360ce.
 *  If not, see <http://www.gnu.org/licenses/>.
 */
 
#pragma once

#define UNICODE

#define _BIND_TO_CURRENT_CRT_VERSION 1
#define _BIND_TO_CURRENT_ATL_VERSION 1
#define _BIND_TO_CURRENT_MFC_VERSION 1
#define _BIND_TO_CURRENT_OPENMP_VERSION 1

#if defined(DEBUG) | defined(_DEBUG)
#include <crtdbg.h>
#endif

#ifndef _WIN32_WINNT
#define _WIN32_WINNT _WIN32_WINNT_WINXP
#endif

#ifndef NTDDI_VERSION
#define NTDDI_VERSION NTDDI_WINXPSP3
#endif

#define WIN32_LEAN_AND_MEAN

#define STRICT
#define DIRECTINPUT_VERSION 0x0800

// Windows Header Files:
#include <windows.h>
#include <tchar.h>
#include <math.h>
#include <time.h>
#include <fstream>

#include <xinput.h>


