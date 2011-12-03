/*
 * DIP plugin for Custom IOS.
 *
 * Copyright (C) 2008-2010 Waninkoko, WiiGator.
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program. If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef _DIP_CALLS_H_
#define _DIP_CALLS_H_

#include "types.h"

/* Prototypes */
s32   DI_ReadHash(void); 
void *DI_Alloc(u32 size, u32 align);
void  DI_Free(void *ptr);
void  DI_Printf(const char *fmt, ...);

/* DIP handlers */
s32 DI_HandleIoctl(void *buffer, u32 fd);
s32 DI_HandleCmd(void *inbuf, const void *outbuf, u32 size);

s32 DI_InitStage2(void); 

#endif
