/*
 * FileName: string.h
 *
 * Written by tutomiko <https://www.github.com/tutomiko>
 *
 * Copyright (c) 2022, Tuomas Kontiainen
 *
 * This file is a part of Fireworks Framework <https://github.com/tutomiko/Fireworks-Framework>
 * Fireworks Framework is a free software: you can redistribute it
 * and/or modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation, either version 3 of
 * the License, or (at your option) any later versions.
 *
 * Fireworks Framework is distributed in the hope that it will be
 * useful, but WITHOUT ANY WARRANTY; without even the implied warranty
 * of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with Fireworks Framework. If not,
 * see <http://www.gnu.org/licenses/>.
 */
#
#pragma once
#
#pragma region <imports>
#pragma region "platform-dependent imports"

#pragma endregion
#
#pragma region "platform-independent imports"

#pragma endregion
#
#pragma region "3rd-party imports"

#pragma endregion
#
#pragma region "shared imports"

#pragma endregion
#
#pragma region "local imports"
#include <fwbase.h>
#include <fireworks/type/char.h>
#include <fireworks/type/wchar.h>
#pragma endregion
#pragma endregion
#
#
/// <summary>
/// Target charset -compatible char type.
/// </summary>
#if __CHARSET == CHARSET_UNICODE
#define tchar_t					wchar_t
#define tchar_isalphabet		wchar_isalphabet
#define tchar_isalphanumeric	wchar_isalphanumeric
#define tchar_islower			wchar_islower
#define tchar_isnumber			wchar_isnumber
#define tchar_isupper			wchar_isupper
#define tchar_tolower			wchar_tolower
#define tchar_toupper			wchar_toupper
#elif __CHARSET	== CHARSET_MULTIBYTE
#define tchar_t					char_t
#define tchar_isalphabet		char_isalphabet
#define tchar_isalphanumeric	char_isalphanumeric
#define tchar_islower			char_islower
#define tchar_isnumber			char_isnumber
#define tchar_isupper			char_isupper
#define tchar_tolower			char_tolower
#define tchar_toupper			char_toupper
#endif // __CHARSET

