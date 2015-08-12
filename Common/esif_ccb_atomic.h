/*******************************************************************************
** This file is provided under a dual BSD/GPLv2 license.  When using or
** redistributing this file, you may do so under either license.
**
** GPL LICENSE SUMMARY
**
** Copyright (c) 2013-2015 Intel Corporation All Rights Reserved
**
** This program is free software; you can redistribute it and/or modify it under
** the terms of version 2 of the GNU General Public License as published by the
** Free Software Foundation.
**
** This program is distributed in the hope that it will be useful, but WITHOUT
** ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
** FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more
** details.
**
** You should have received a copy of the GNU General Public License along with
** this program; if not, write to the Free Software  Foundation, Inc.,
** 51 Franklin St - Fifth Floor, Boston, MA 02110-1301 USA.
** The full GNU General Public License is included in this distribution in the
** file called LICENSE.GPL.
**
** BSD LICENSE
**
** Copyright (c) 2013-2015 Intel Corporation All Rights Reserved
**
** Redistribution and use in source and binary forms, with or without
** modification, are permitted provided that the following conditions are met:
**
** * Redistributions of source code must retain the above copyright notice, this
**   list of conditions and the following disclaimer.
** * Redistributions in binary form must reproduce the above copyright notice,
**   this list of conditions and the following disclaimer in the documentation
**   and/or other materials provided with the distribution.
** * Neither the name of Intel Corporation nor the names of its contributors may
**   be used to endorse or promote products derived from this software without
**   specific prior written permission.
**
** THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
** AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
** IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
** ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
** LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,  SPECIAL, EXEMPLARY, OR
** CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
** SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
** INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
** CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
** ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
** POSSIBILITY OF SUCH DAMAGE.
**
*******************************************************************************/

#pragma once

/*
 * C/C++ OS-Agnostic Universal Implementation of atomic integer operations.
 * Interface is based on native Linux atomic_t kernel type (atomic.h)
 * Note: atomic_t is 32 or 64 bit, depending on OS/Platform so treat as opaque
 */

#if defined(ESIF_ATTR_KERNEL)

#if defined(ESIF_ATTR_OS_WINDOWS)
#include "esif_ccb_atomic_win_kern.h"
#elif defined(ESIF_ATTR_OS_LINUX)
#include "esif_ccb_atomic_lin_kern.h"
#endif

#elif defined(ESIF_ATTR_USER)

#if defined(ESIF_ATTR_OS_WINDOWS)
#include "esif_ccb_atomic_win_user.h"
#elif defined(ESIF_ATTR_OS_LINUX)
#include "esif_ccb_atomic_lin_user.h"
#endif

/* Disable User-Mode Atomic operations. Use at your own risk */
#if defined(ATOMIC_LIB_DISABLE)
# define ATOMIC_INIT(i)		(i)
# define atomic_read(v)		(*(v))
# define atomic_set(v, i)	(*(v) = (i))
# define atomic_inc(v)		(++(*(v)))
# define atomic_dec(v)		(--(*(v)))
# define atomic_add(i, v)	(*(v) += (i))
# define atomic_sub(i, v)	(*(v) -= (i))
#endif

#endif /* USER */