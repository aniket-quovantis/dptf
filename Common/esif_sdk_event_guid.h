/*******************************************************************************
** This file is provided under a dual BSD/GPLv2 license.  When using or
** redistributing this file, you may do so under either license.
**
** GPL LICENSE SUMMARY
**
** Copyright (c) 2013-2019 Intel Corporation All Rights Reserved
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
** Copyright (c) 2013-2019 Intel Corporation All Rights Reserved
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
 * Event Name:  CONNECTED_STANDBY_ENTRY
 * Event GUID:  FD34F756-F7B6-47DD-B3D5-0011A34E4337
 * Event Desc:  Enter connected standby
 */
#define CONNECTED_STANDBY_ENTRY { \
	0xFD, 0x34, 0xF7, 0x56, 0xF7, 0xB6, 0x47, 0xDD, \
	0xB3, 0xD5, 0x00, 0x11, 0xA3, 0x4E, 0x43, 0x37 }

/*
 * Event Name:  CONNECTED_STANDBY_EXIT
 * Event GUID:  9604508D-F4AA-4716-83D9-6EE951EBBEA9
 * Event Desc:  Exit connected standby
 */
#define CONNECTED_STANDBY_EXIT { \
	0x96, 0x04, 0x50, 0x8D, 0xF4, 0xAA, 0x47, 0x16, \
	0x83, 0xD9, 0x6E, 0xE9, 0x51, 0xEB, 0xBE, 0xA9 }

/*
 * Event Name:  ACTIVE_RELATIONSHIP_CHANGED
 * Event GUID:  C7C5FC88-8AAC-42C2-8B51-21777033E75D
 * Event Desc:  Active relationship table changed
 */
#define ACTIVE_RELATIONSHIP_CHANGED { \
	0xC7, 0xC5, 0xFC, 0x88, 0x8A, 0xAC, 0x42, 0xC2, \
	0x8B, 0x51, 0x21, 0x77, 0x70, 0x33, 0xE7, 0x5D }

/*
 * Event Name:  THERMAL_RELATIONSHIP_CHANGED
 * Event GUID:  7E99E90E-0A22-4EEC-AD6C-908DEB21E9A9
 * Event Desc:  Thermal relationship table changed
 */
#define THERMAL_RELATIONSHIP_CHANGED { \
	0x7E, 0x99, 0xE9, 0x0E, 0x0A, 0x22, 0x4E, 0xEC, \
	0xAD, 0x6C, 0x90, 0x8D, 0xEB, 0x21, 0xE9, 0xA9 }

/*
 * Event Name:  FOREGROUND_CHANGED
 * Event GUID:  88E419E3-609B-4BDA-9A17-83DE899831FD
 * Event Desc:  Foreground application changed
 */
#define FOREGROUND_CHANGED { \
	0x88, 0xE4, 0x19, 0xE3, 0x60, 0x9B, 0x4B, 0xDA, \
	0x9A, 0x17, 0x83, 0xDE, 0x89, 0x98, 0x31, 0xFD }

/*
 * Event Name:  SUSPEND
 * Event GUID:  547F7465-D98A-40FD-AC12-E6D20F7B091B
 * Event Desc:  Suspend Upper Framework
 */
#define SUSPEND { \
	0x54, 0x7F, 0x74, 0x65, 0xD9, 0x8A, 0x40, 0xFD, \
	0xAC, 0x12, 0xE6, 0xD2, 0x0F, 0x7B, 0x09, 0x1B }

/*
 * Event Name:  RESUME
 * Event GUID:  AB3E045F-6B51-4EC5-9330-EAB70836F02F
 * Event Desc:  Resume Upper Framework
 */
#define RESUME { \
	0xAB, 0x3E, 0x04, 0x5F, 0x6B, 0x51, 0x4E, 0xC5, \
	0x93, 0x30, 0xEA, 0xB7, 0x08, 0x36, 0xF0, 0x2F }

/*
 * Event Name:  CTDP_CAPABILITY_CHANGED
 * Event GUID:  68D16E98-2C89-4A3D-95C7-5DEEAA4FD73F
 * Event Desc:  Config TDP Capability changed (Configurable TDP)
 */
#define CTDP_CAPABILITY_CHANGED { \
	0x68, 0xD1, 0x6E, 0x98, 0x2C, 0x89, 0x4A, 0x3D, \
	0x95, 0xC7, 0x5D, 0xEE, 0xAA, 0x4F, 0xD7, 0x3F }

/*
 * Event Name:  CORE_CAPABILITY_CHANGED
 * Event GUID:  8487D740-62F7-4030-BE1A-C201377E0C18
 * Event Desc:  For future use
 */
#define CORE_CAPABILITY_CHANGED { \
	0x84, 0x87, 0xD7, 0x40, 0x62, 0xF7, 0x40, 0x30, \
	0xBE, 0x1A, 0xC2, 0x01, 0x37, 0x7E, 0x0C, 0x18 }

/*
 * Event Name:  DISPLAY_CAPABILITY_CHANGED
 * Event GUID:  F1CDA338-0F3C-4F8D-A1D9-8033E672F672
 * Event Desc:  Display control upper/lower limits changed.
 */
#define DISPLAY_CAPABILITY_CHANGED { \
	0xF1, 0xCD, 0xA3, 0x38, 0x0F, 0x3C, 0x4F, 0x8D, \
	0xA1, 0xD9, 0x80, 0x33, 0xE6, 0x72, 0xF6, 0x72 }

/*
 * Event Name:  DISPLAY_STATUS_CHANGED
 * Event GUID:  BDB4F356-CF69-4152-99A9-1DCE4972AB9D
 * Event Desc:  Current Display brightness status changed due to user/override
 */
#define DISPLAY_STATUS_CHANGED { \
	0xBD, 0xB4, 0xF3, 0x56, 0xCF, 0x69, 0x41, 0x52, \
	0x99, 0xA9, 0x1D, 0xCE, 0x49, 0x72, 0xAB, 0x9D }

/*
 * Event Name:  PERF_CAPABILITY_CHANGED
 * Event GUID:  9091810C-F301-44D6-B2B5-B301812E4D08
 * Event Desc:  Performance Control Upper/Lower Limits Changed
 */
#define PERF_CAPABILITY_CHANGED { \
	0x90, 0x91, 0x81, 0x0C, 0xF3, 0x01, 0x44, 0xD6, \
	0xB2, 0xB5, 0xB3, 0x01, 0x81, 0x2E, 0x4D, 0x08 }

/*
 * Event Name:  PERF_CONTROL_CHANGED
 * Event GUID:  D8B5EA17-5486-40FC-A0C6-2AE92AEB3775
 * Event Desc:  For future use
 */
#define PERF_CONTROL_CHANGED { \
	0xD8, 0xB5, 0xEA, 0x17, 0x54, 0x86, 0x40, 0xFC, \
	0xA0, 0xC6, 0x2A, 0xE9, 0x2A, 0xEB, 0x37, 0x75 }

/*
 * Event Name:  POWER_CAPABILITY_CHANGED
 * Event GUID:  82C438DD-673B-46A6-995F-24CAF4644DCF
 * Event Desc:  Power Control Capability Changed
 */
#define POWER_CAPABILITY_CHANGED { \
	0x82, 0xC4, 0x38, 0xDD, 0x67, 0x3B, 0x46, 0xA6, \
	0x99, 0x5F, 0x24, 0xCA, 0xF4, 0x64, 0x4D, 0xCF }

/*
 * Event Name:  POWER_THRESHOLD_CROSSED
 * Event GUID:  68138891-C225-438A-8F43-04B071CBF4E3
 * Event Desc:  Programmable Threshold Power Event
 */
#define POWER_THRESHOLD_CROSSED { \
	0x68, 0x13, 0x88, 0x91, 0xC2, 0x25, 0x43, 0x8A, \
	0x8F, 0x43, 0x04, 0xB0, 0x71, 0xCB, 0xF4, 0xE3 }

/*
 * Event Name:  PRIORITY_CHANGED
 * Event GUID:  98077FF3-AD61-4E50-AFEE-51D0CE8DE396
 * Event Desc:  Domain priority has changed
 */
#define PRIORITY_CHANGED { \
	0x98, 0x07, 0x7F, 0xF3, 0xAD, 0x61, 0x4E, 0x50, \
	0xAF, 0xEE, 0x51, 0xD0, 0xCE, 0x8D, 0xE3, 0x96 }

/*
 * Event Name:  TEMP_THRESHOLD_CROSSED
 * Event GUID:  43CDD7D8-C96D-4EE7-9A4A-7EC5C2EE1B6E
 * Event Desc:  Temperature Threshold Changed
 */
#define TEMP_THRESHOLD_CROSSED { \
	0x43, 0xCD, 0xD7, 0xD8, 0xC9, 0x6D, 0x4E, 0xE7, \
	0x9A, 0x4A, 0x7E, 0xC5, 0xC2, 0xEE, 0x1B, 0x6E }

/*
 * Event Name:  SPEC_INFO_CHANGED
 * Event GUID:  75494A00-417C-4E51-9FAB-FBDD965577D4
 * Event Desc:  Participant Specific Information Changed
 */
#define SPEC_INFO_CHANGED { \
	0x75, 0x49, 0x4A, 0x00, 0x41, 0x7C, 0x4E, 0x51, \
	0x9F, 0xAB, 0xFB, 0xDD, 0x96, 0x55, 0x77, 0xD4 }

/*
 * Event Name:  CREATE
 * Event GUID:  F3B70F0B-79BC-4414-BCF7-6389658E9FAB
 * Event Desc:  Create Upper Framework Participant
 */
#define CREATE { \
	0xF3, 0xB7, 0x0F, 0x0B, 0x79, 0xBC, 0x44, 0x14, \
	0xBC, 0xF7, 0x63, 0x89, 0x65, 0x8E, 0x9F, 0xAB }

/*
 * Event Name:  UNREGISTER
 * Event GUID:  D58C6702-BB4E-4F82-87F9-E527FEBBBEE1
 * Event Desc:  Unregister Upper Framework Participant
 */
#define UNREGISTER { \
	0xD5, 0x8C, 0x67, 0x02, 0xBB, 0x4E, 0x4F, 0x82, \
	0x87, 0xF9, 0xE5, 0x27, 0xFE, 0xBB, 0xBE, 0xE1 }

/*
 * Event Name:  SHUTDOWN
 * Event GUID:  DE7CA990-66C6-4F0F-B78F-E2774E3CE790
 * Event Desc:  Shutdown Upper Framework Participant
 */
#define SHUTDOWN { \
	0xDE, 0x7C, 0xA9, 0x90, 0x66, 0xC6, 0x4F, 0x0F, \
	0xB7, 0x8F, 0xE2, 0x77, 0x4E, 0x3C, 0xE7, 0x90 }

/*
 * Event Name:  ACPI
 * Event GUID:  722610FF-EDA3-4FED-BEAE-B70290011287
 * Event Desc:  ACPI Notify To ESIF Event Translation
 */
#define ACPI { \
	0x72, 0x26, 0x10, 0xFF, 0xED, 0xA3, 0x4F, 0xED, \
	0xBE, 0xAE, 0xB7, 0x02, 0x90, 0x01, 0x12, 0x87 }

/*
 * Event Name:  PASSIVE_TABLE_CHANGED
 * Event GUID:  661C68E1-B73E-4D02-859B-F1C1505F90D1
 * Event Desc:  PSV Object Changed
 */
#define PASSIVE_TABLE_CHANGED { \
	0x66, 0x1C, 0x68, 0xE1, 0xB7, 0x3E, 0x4D, 0x02, \
	0x85, 0x9B, 0xF1, 0xC1, 0x50, 0x5F, 0x90, 0xD1 }

/*
 * Event Name:  DISPLAY_ORIENTATION_CHANGED
 * Event GUID:  019C3571-3560-4EC6-BDED-884F6125B5F9
 * Event Desc:  Display Orientation Changed
 */
#define DISPLAY_ORIENTATION_CHANGED { \
	0x01, 0x9C, 0x35, 0x71, 0x35, 0x60, 0x4E, 0xC6, \
	0xBD, 0xED, 0x88, 0x4F, 0x61, 0x25, 0xB5, 0xF9 }

/*
 * Event Name:  DEVICE_ORIENTATION_CHANGED
 * Event GUID:  164B8FD7-C165-4C86-8E9B-4464B6EEC015
 * Event Desc:  Device Orientation Changed
 */
#define DEVICE_ORIENTATION_CHANGED { \
	0x16, 0x4B, 0x8F, 0xD7, 0xC1, 0x65, 0x4C, 0x86, \
	0x8E, 0x9B, 0x44, 0x64, 0xB6, 0xEE, 0xC0, 0x15 }

/*
 * Event Name:  MOTION_CHANGED
 * Event GUID:  C7C83E34-519B-4650-A8B2-640E31F5BB0A
 * Event Desc:  Motion Changed
 */
#define MOTION_CHANGED { \
	0xC7, 0xC8, 0x3E, 0x34, 0x51, 0x9B, 0x46, 0x50, \
	0xA8, 0xB2, 0x64, 0x0E, 0x31, 0xF5, 0xBB, 0x0A }

/*
 * Event Name:  SYSTEM_COOLING_POLICY_CHANGED
 * Event GUID:  5C7D591E-2EA8-4DA1-85A4-476191404650
 * Event Desc:  System Cooling Policy
 */
#define SYSTEM_COOLING_POLICY_CHANGED { \
	0x5C, 0x7D, 0x59, 0x1E, 0x2E, 0xA8, 0x4D, 0xA1, \
	0x85, 0xA4, 0x47, 0x61, 0x91, 0x40, 0x46, 0x50 }

/*
 * Event Name:  OS_CTDP_CAPABILITY_CHANGED
 * Event GUID:  07029cd8-4664-4698-95d8-43b2e9666596
 * Event Desc:  OS CTDP Capability Changed
 */
#define OS_CTDP_CAPABILITY_CHANGED { \
	0x07, 0x02, 0x9c, 0xd8, 0x46, 0x64, 0x46, 0x98, \
	0x95, 0xd8, 0x43, 0xb2, 0xe9, 0x66, 0x65, 0x96 }

/*
 * Event Name:  RF_PROFILE_CHANGED
 * Event GUID:  C13C9EAF-9F51-4027-BFE2-E278152D238B
 * Event Desc:  RF Profile Changed
 */
#define RF_PROFILE_CHANGED { \
	0xC1, 0x3C, 0x9E, 0xAF, 0x9F, 0x51, 0x40, 0x27, \
	0xBF, 0xE2, 0xE2, 0x78, 0x15, 0x2D, 0x23, 0x8B }

/*
 * Event Name:  RF_CONNECTION_STATUS_CHANGED
 * Event GUID:  127FB178-2FF0-4286-8A3F-9161B6E87D57
 * Event Desc:  RF Connection Status Changed
 */
#define RF_CONNECTION_STATUS_CHANGED { \
	0x12, 0x7F, 0xB1, 0x78, 0x2F, 0xF0, 0x42, 0x86, \
	0x8A, 0x3F, 0x91, 0x61, 0xB6, 0xE8, 0x7D, 0x57 }

/*
 * Event Name:  LOG_VERBOSITY_CHANGED
 * Event GUID:  F77BD545-C448-4B5F-99C8-D0BA02968665
 * Event Desc:  Log Verbosity Changed
 */
#define LOG_VERBOSITY_CHANGED { \
	0xF7, 0x7B, 0xD5, 0x45, 0xC4, 0x48, 0x4B, 0x5F, \
	0x99, 0xC8, 0xD0, 0xBA, 0x02, 0x96, 0x86, 0x65 }

/*
 * Event Name:  POWER_SOURCE_CHANGED
 * Event GUID:  B84795D7-F7E2-4691-BD56-029C08E0DB31
 * Event Desc:  Power Source Changed
 */
#define POWER_SOURCE_CHANGED { \
	0xB8, 0x47, 0x95, 0xD7, 0xF7, 0xE2, 0x46, 0x91, \
	0xBD, 0x56, 0x02, 0x9C, 0x08, 0xE0, 0xDB, 0x31 }

/*
 * Event Name:  ADAPTIVE_PERFORMANCE_CONDITIONS_TABLE_CHANGED
 * Event GUID:  CE5CCB61-2928-4542-B6C1-98B3A19B0103
 * Event Desc:  Adaptive Performance Conditions Table Changed
 */
#define ADAPTIVE_PERFORMANCE_CONDITIONS_TABLE_CHANGED { \
	0xCE, 0x5C, 0xCB, 0x61, 0x29, 0x28, 0x45, 0x42, \
	0xB6, 0xC1, 0x98, 0xB3, 0xA1, 0x9B, 0x01, 0x03 }

/*
 * Event Name:  ADAPTIVE_PERFORMANCE_ACTIONS_TABLE_CHANGED
 * Event GUID:  A48EC3A1-11A7-40FE-8DE8-1226814A4E99
 * Event Desc:  Adaptive Performance Actions Table Changed
 */
#define ADAPTIVE_PERFORMANCE_ACTIONS_TABLE_CHANGED { \
	0xA4, 0x8E, 0xC3, 0xA1, 0x11, 0xA7, 0x40, 0xFE, \
	0x8D, 0xE8, 0x12, 0x26, 0x81, 0x4A, 0x4E, 0x99 }

/*
 * Event Name:  OS_POWER_SOURCE_CHANGED
 * Event GUID:  C7C6A3C3-EAC7-456E-BFEC-A656044640F3
 * Event Desc:  OS Power Source Changed
 */
#define OS_POWER_SOURCE_CHANGED { \
	0xC7, 0xC6, 0xA3, 0xC3, 0xEA, 0xC7, 0x45, 0x6E, \
	0xBF, 0xEC, 0xA6, 0x56, 0x04, 0x46, 0x40, 0xF3 }

/*
 * Event Name:  OS_LID_STATE_CHANGED
 * Event GUID:  62E797E9-D1AC-4C27-ABEE-1C624E87BD16
 * Event Desc:  OS Lid State Changed
 */
#define OS_LID_STATE_CHANGED { \
	0x62, 0xE7, 0x97, 0xE9, 0xD1, 0xAC, 0x4C, 0x27, \
	0xAB, 0xEE, 0x1C, 0x62, 0x4E, 0x87, 0xBD, 0x16 }

/*
 * Event Name:  OS_BATTERY_PERCENT_CHANGED
 * Event GUID:  D4FAB079-2B09-4635-91D0-03A5DCD8BB53
 * Event Desc:  OS Battery Percentage Changed
 */
#define OS_BATTERY_PERCENT_CHANGED { \
	0xD4, 0xFA, 0xB0, 0x79, 0x2B, 0x09, 0x46, 0x35, \
	0x91, 0xD0, 0x03, 0xA5, 0xDC, 0xD8, 0xBB, 0x53 }

/*
 * Event Name:  OS_PLATFORM_TYPE_CHANGED
 * Event GUID:  B248D2B4-7C97-4594-BB8E-4F137E6C809E
 * Event Desc:  OS Platform Type Changed
 */
#define OS_PLATFORM_TYPE_CHANGED { \
	0xB2, 0x48, 0xD2, 0xB4, 0x7C, 0x97, 0x45, 0x94, \
	0xBB, 0x8E, 0x4F, 0x13, 0x7E, 0x6C, 0x80, 0x9E }

/*
 * Event Name:  OS_DOCK_MODE_CHANGED
 * Event GUID:  E38D9422-6EC7-4A30-A56B-BE2DF6C61D31
 * Event Desc:  OS Dock Mode Changed
 */
#define OS_DOCK_MODE_CHANGED { \
	0xE3, 0x8D, 0x94, 0x22, 0x6E, 0xC7, 0x4A, 0x30, \
	0xA5, 0x6B, 0xBE, 0x2D, 0xF6, 0xC6, 0x1D, 0x31 }

/*
 * Event Name:  OEM_VARS_CHANGED
 * Event GUID:  E08841A6-3AB8-49E7-8731-AD559411C87C
 * Event Desc:  OEM Variables Changed
 */
#define OEM_VARS_CHANGED { \
	0xE0, 0x88, 0x41, 0xA6, 0x3A, 0xB8, 0x49, 0xE7, \
	0x87, 0x31, 0xAD, 0x55, 0x94, 0x11, 0xC8, 0x7C }

/*
 * Event Name:  VIRTUAL_SENSOR_CALIB_TABLE_CHANGED
 * Event GUID:  998493D3-960F-4241-A50F-77547E37AA29
 * Event Desc:  Virtual Sensor Calibration Table Changed
 */
#define VIRTUAL_SENSOR_CALIB_TABLE_CHANGED { \
	0x99, 0x84, 0x93, 0xD3, 0x96, 0x0F, 0x42, 0x41, \
	0xA5, 0x0F, 0x77, 0x54, 0x7E, 0x37, 0xAA, 0x29 }

/*
 * Event Name:  VIRTUAL_SENSOR_POLLING_TABLE_CHANGED
 * Event GUID:  B7971DBF-2167-4246-A33F-12C519EC9E0E
 * Event Desc:  Virtual Sensor Pollint Table Changed
 */
#define VIRTUAL_SENSOR_POLLING_TABLE_CHANGED { \
	0xB7, 0x97, 0x1D, 0xBF, 0x21, 0x67, 0x42, 0x46, \
	0xA3, 0x3F, 0x12, 0xC5, 0x19, 0xEC, 0x9E, 0x0E }

/*
 * Event Name:  VIRTUAL_SENSOR_RECALC_CHANGED
 * Event GUID:  7ECA5943-3A4E-47C1-AB57-6F0748288C62
 * Event Desc:  Virtual Sensor Recalc Changed
 */
#define VIRTUAL_SENSOR_RECALC_CHANGED { \
	0x7E, 0xCA, 0x59, 0x43, 0x3A, 0x4E, 0x47, 0xC1, \
	0xAB, 0x57, 0x6F, 0x07, 0x48, 0x28, 0x8C, 0x62 }

/*
 * Event Name:  BATTERY_STATUS_CHANGED
 * Event GUID:  D7649092-D185-466B-8B20-B98F6FFC80A9
 * Event Desc:  Battery Status Changed
 */
#define BATTERY_STATUS_CHANGED { \
	0xD7, 0x64, 0x90, 0x92, 0xD1, 0x85, 0x46, 0x6B, \
	0x8B, 0x20, 0xB9, 0x8F, 0x6F, 0xFC, 0x80, 0xA9 }

/*
 * Event Name:  BATTERY_INFORMATION_CHANGED
 * Event GUID:  277361E1-64F9-45E6-87A4-6E181B9D9349
 * Event Desc:  Battery Information Changed
 */
#define BATTERY_INFORMATION_CHANGED { \
	0x27, 0x73, 0x61, 0xE1, 0x64, 0xF9, 0x45, 0xE6, \
	0x87, 0xA4, 0x6E, 0x18, 0x1B, 0x9D, 0x93, 0x49 }

/*
 * Event Name:  PLATFORM_BATTERY_STEADY_STATE_CHANGED
 * Event GUID:  B345DE0C-2CDF-41FD-9B34-9B281869414E
 * Event Desc:  Platform Battery Steady State Changed
 */
#define PLATFORM_BATTERY_STEADY_STATE_CHANGED { \
	0xB3, 0x45, 0xDE, 0x0C, 0x2C, 0xDF, 0x41, 0xFD, \
	0x9B, 0x34, 0x9B, 0x28, 0x18, 0x69, 0x41, 0x4E }

/*
 * Event Name:  PLATFORM_POWER_SOURCE_CHANGED
 * Event GUID:  1C662050-FA0A-4799-BF56-3E091A007338
 * Event Desc:  Platform Power Source Changed
 */
#define PLATFORM_POWER_SOURCE_CHANGED { \
	0x1C, 0x66, 0x20, 0x50, 0xFA, 0x0A, 0x47, 0x99, \
	0xBF, 0x56, 0x3E, 0x09, 0x1A, 0x00, 0x73, 0x38 }

/*
 * Event Name:  CHARGER_TYPE_CHANGED
 * Event GUID:  9B790DE9-8BCF-480E-856B-A5F0F5844073
 * Event Desc:  Charger Type Changed
 */
#define CHARGER_TYPE_CHANGED { \
	0x9B, 0x79, 0x0D, 0xE9, 0x8B, 0xCF, 0x48, 0x0E, \
	0x85, 0x6B, 0xA5, 0xF0, 0xF5, 0x84, 0x40, 0x73 }

/*
 * Event Name:  PLATFORM_REST_OF_POWER_CHANGED
 * Event GUID:  6B175B92-105E-4398-98D2-6284421AD317
 * Event Desc:  Platform Rest of Power Changed
 */
#define PLATFORM_REST_OF_POWER_CHANGED { \
	0x6B, 0x17, 0x5B, 0x92, 0x10, 0x5E, 0x43, 0x98, \
	0x98, 0xD2, 0x62, 0x84, 0x42, 0x1A, 0xD3, 0x17 }

/*
 * Event Name:  POWER_BOSS_CONDITIONS_TABLE_CHANGED
 * Event GUID:  AD4693CF-17FB-435B-853A-76B5386A34DA
 * Event Desc:  Power Boss Conditions Table Changed
 */
#define POWER_BOSS_CONDITIONS_TABLE_CHANGED { \
	0xAD, 0x46, 0x93, 0xCF, 0x17, 0xFB, 0x43, 0x5B, \
	0x85, 0x3A, 0x76, 0xB5, 0x38, 0x6A, 0x34, 0xDA }

/*
 * Event Name:  POWER_BOSS_ACTIONS_TABLE_CHANGED
 * Event GUID:  595399CB-C327-4C7F-BA29-4A7CDED39986
 * Event Desc:  Power Boss Actions Table Changed
 */
#define POWER_BOSS_ACTIONS_TABLE_CHANGED { \
	0x59, 0x53, 0x99, 0xCB, 0xC3, 0x27, 0x4C, 0x7F, \
	0xBA, 0x29, 0x4A, 0x7C, 0xDE, 0xD3, 0x99, 0x86 }

/*
 * Event Name:  DPTF_POLICY_LOADED_UNLOADED
 * Event GUID:  94810472-74C2-464A-9EC0-8ADD72B50810
 * Event Desc:  DPTF Policy Loaded/Unloaded Event
 */
#define DPTF_POLICY_LOADED_UNLOADED { \
	0x94, 0x81, 0x04, 0x72, 0x74, 0xC2, 0x46, 0x4A, \
	0x9E, 0xC0, 0x8A, 0xDD, 0x72, 0xB5, 0x08, 0x10 }

/*
 * Event Name:  DPTF_POLICY_ACTIVITY_LOGGING_ENABLED
 * Event GUID:  D3CEE052-18E5-43CC-B65D-8E4E2730A80B
 * Event Desc:  DPTF Policy Log Enabled
 */
#define DPTF_POLICY_ACTIVITY_LOGGING_ENABLED { \
	0xD3, 0xCE, 0xE0, 0x52, 0x18, 0xE5, 0x43, 0xCC, \
	0xB6, 0x5D, 0x8E, 0x4E, 0x27, 0x30, 0xA8, 0x0B }

/*
 * Event Name:  DPTF_POLICY_ACTIVITY_LOGGING_DISABLED
 * Event GUID:  B033311C-E76D-408F-ACC1-65E87F348F83
 * Event Desc:  DPTF Policy Log Disabled
 */
#define DPTF_POLICY_ACTIVITY_LOGGING_DISABLED { \
	0xB0, 0x33, 0x31, 0x1C, 0xE7, 0x6D, 0x40, 0x8F, \
	0xAC, 0xC1, 0x65, 0xE8, 0x7F, 0x34, 0x8F, 0x83 }

/*
 * Event Name:  DPTF_PARTICIPANT_ACTIVITY_LOGGING_ENABLED
 * Event GUID:  14D7EBAF-29D4-4C7B-B8DB-182857A26EAB
 * Event Desc:  DPTF Participant Log Enabled
 */
#define DPTF_PARTICIPANT_ACTIVITY_LOGGING_ENABLED { \
	0x14, 0xD7, 0xEB, 0xAF, 0x29, 0xD4, 0x4C, 0x7B, \
	0xB8, 0xDB, 0x18, 0x28, 0x57, 0xA2, 0x6E, 0xAB }

/*
 * Event Name:  DPTF_PARTICIPANT_ACTIVITY_LOGGING_DISABLED
 * Event GUID:  53CA4B30-1E56-4748-B5AC-524ED59C4936
 * Event Desc:  DPTF Participant Log Disabled
 */
#define DPTF_PARTICIPANT_ACTIVITY_LOGGING_DISABLED { \
	0x53, 0xCA, 0x4B, 0x30, 0x1E, 0x56, 0x47, 0x48, \
	0xB5, 0xAC, 0x52, 0x4E, 0xD5, 0x9C, 0x49, 0x36 }

/*
 * Event Name:  DPTF_PARTICIPANT_CONTROL_ACTION
 * Event GUID:  A40AA4C8-685D-4B8E-A883-A657AA43F914
 * Event Desc:  DPTF Participant Control Action
 */
#define DPTF_PARTICIPANT_CONTROL_ACTION { \
	0xA4, 0x0A, 0xA4, 0xC8, 0x68, 0x5D, 0x4B, 0x8E, \
	0xA8, 0x83, 0xA6, 0x57, 0xAA, 0x43, 0xF9, 0x14 }

/*
 * Event Name:  MAX_BATTERY_POWER_CHANGED
 * Event GUID:  878E5AB7-70C0-4772-AB35-F0D2C6DE8EA4
 * Event Desc:  Max Battery Power Changed
 */
#define MAX_BATTERY_POWER_CHANGED { \
	0x87, 0x8E, 0x5A, 0xB7, 0x70, 0xC0, 0x47, 0x72, \
	0xAB, 0x35, 0xF0, 0xD2, 0xC6, 0xDE, 0x8E, 0xA4 }

/*
 * Event Name:  OS_POWERSCHEME_PERSONALITY_CHANGED
 * Event GUID:  D64BF1F6-5E26-409B-BAE4-A7C79550D7F1
 * Event Desc:  OS PowerScheme Pesonality Changed
 */
#define OS_POWERSCHEME_PERSONALITY_CHANGED { \
	0xD6, 0x4B, 0xF1, 0xF6, 0x5E, 0x26, 0x40, 0x9B, \
	0xBA, 0xE4, 0xA7, 0xC7, 0x95, 0x50, 0xD7, 0xF1 }

/*
 * Event Name:  OS_MOBILE_NOTIFICATION
 * Event GUID:  00FFBAD8-5CCD-49B9-A61D-E250C29D455A
 * Event Desc:  OS Mobile Notification
 */
#define OS_MOBILE_NOTIFICATION { \
	0x00, 0xFF, 0xBA, 0xD8, 0x5C, 0xCD, 0x49, 0xB9, \
	0xA6, 0x1D, 0xE2, 0x50, 0xC2, 0x9D, 0x45, 0x5A }

/*
 * Event Name:  EMERGENCY_CALL_MODE_TABLE_CHANGED
 * Event GUID:  634368F0-6881-47AF-849E-6A5ED4876826
 * Event Desc:  Emergency Call Mode Table Changed
 */
#define EMERGENCY_CALL_MODE_TABLE_CHANGED { \
	0x63, 0x43, 0x68, 0xF0, 0x68, 0x81, 0x47, 0xAF, \
	0x84, 0x9E, 0x6A, 0x5E, 0xD4, 0x87, 0x68, 0x26 }

/*
 * Event Name:  APP_LOADED
 * Event GUID:  F9E52DFF-7422-406D-BEAD-279F456C2540
 * Event Desc:  Application Loaded
 */
#define APP_LOADED { \
	0xF9, 0xE5, 0x2D, 0xFF, 0x74, 0x22, 0x40, 0x6D, \
	0xBE, 0xAD, 0x27, 0x9F, 0x45, 0x6C, 0x25, 0x40 }

/*
 * Event Name:  APP_UNLOADED
 * Event GUID:  33E765C9-6984-47A7-8AF6-D9C5ED81C45F
 * Event Desc:  Application Unloaded
 */
#define APP_UNLOADED { \
	0x33, 0xE7, 0x65, 0xC9, 0x69, 0x84, 0x47, 0xA7, \
	0x8A, 0xF6, 0xD9, 0xC5, 0xED, 0x81, 0xC4, 0x5F }

/*
 * Event Name:  ADAPTIVE_PERFORMANCE_PARTICIPANT_CONDITION_TABLE_CHANGED
 * Event GUID:  E74F5F38-0948-4F3B-B858-9D0378739CAB
 * Event Desc:  Adaptive Performance Participant Condition Table Changed
 */
#define ADAPTIVE_PERFORMANCE_PARTICIPANT_CONDITION_TABLE_CHANGED { \
	0xE7, 0x4F, 0x5F, 0x38, 0x09, 0x48, 0x4F, 0x3B, \
	0xB8, 0x58, 0x9D, 0x03, 0x78, 0x73, 0x9C, 0xAB }

/*
 * Event Name:  ACTION_LOADED
 * Event GUID:  3F878CC2-D264-47F9-AA82-8AF9FC9954F5
 * Event Desc:  Action Loaded
 */
#define ACTION_LOADED { \
	0x3F, 0x87, 0x8C, 0xC2, 0xD2, 0x64, 0x47, 0xF9, \
	0xAA, 0x82, 0x8A, 0xF9, 0xFC, 0x99, 0x54, 0xF5 }

/*
 * Event Name:  ACTION_UNLOADED
 * Event GUID:  8AA4D72B-9DC6-4859-9239-7E1862BB9686
 * Event Desc:  Action Unloaded
 */
#define ACTION_UNLOADED { \
	0x8A, 0xA4, 0xD7, 0x2B, 0x9D, 0xC6, 0x48, 0x59, \
	0x92, 0x39, 0x7E, 0x18, 0x62, 0xBB, 0x96, 0x86 }

/*
 * Event Name:  PID_ALGORITHM_TABLE_CHANGED
 * Event GUID:  93E57DB1-D160-4338-83B5-9340F8BA5DBE
 * Event Desc:  PID Algorithm Table Changed
 */
#define PID_ALGORITHM_TABLE_CHANGED { \
	0x93, 0xE5, 0x7D, 0xB1, 0xD1, 0x60, 0x43, 0x38, \
	0x83, 0xB5, 0x93, 0x40, 0xF8, 0xBA, 0x5D, 0xBE }

/*
 * Event Name:  POWER_BOSS_MATH_TABLE_CHANGED
 * Event GUID:  C5A70B06-37B1-4163-A929-97DAD12706D3
 * Event Desc:  Power Boss Math Table Changed
 */
#define POWER_BOSS_MATH_TABLE_CHANGED { \
	0xC5, 0xA7, 0x0B, 0x06, 0x37, 0xB1, 0x41, 0x63, \
	0xA9, 0x29, 0x97, 0xDA, 0xD1, 0x27, 0x06, 0xD3 }

/*
 * Event Name:  APP_UNLOADING
 * Event GUID:  5BC22527-DA6C-494B-9382-9F161188BFB7
 * Event Desc:  Application Unloading
 */
#define APP_UNLOADING { \
	0x5B, 0xC2, 0x25, 0x27, 0xDA, 0x6C, 0x49, 0x4B, \
	0x93, 0x82, 0x9F, 0x16, 0x11, 0x88, 0xBF, 0xB7 }

/*
 * Event Name:  ACTIVE_CONTROL_POINT_RELATIONSHIP_TABLE_CHANGED
 * Event GUID:  E3EEE6A5-36FD-4958-BA36-4CA11371339A
 * Event Desc:  Active Control Point Relationship Table Changed
 */
#define ACTIVE_CONTROL_POINT_RELATIONSHIP_TABLE_CHANGED { \
	0xE3, 0xEE, 0xE6, 0xA5, 0x36, 0xFD, 0x49, 0x58, \
	0xBA, 0x36, 0x4C, 0xA1, 0x13, 0x71, 0x33, 0x9A }

/*
 * Event Name:  UNREGISTER_COMPLETE
 * Event GUID:  24B5B670-DB60-4F5C-A982-0FD8D357F4CF
 * Event Desc:  Participant Unregistration Completed
 */
#define UNREGISTER_COMPLETE { \
	0x24, 0xB5, 0xB6, 0x70, 0xDB, 0x60, 0x4F, 0x5C, \
	0xA9, 0x82, 0x0F, 0xD8, 0xD3, 0x57, 0xF4, 0xCF }

/*
 * Event Name:  SUPPORTED_POLICIES_CHANGED
 * Event GUID:  03F14BB4-F921-455B-A8F4-E01E95A3A119
 * Event Desc:  DPTF Supported Policies (IDSP) Changed
 */
#define SUPPORTED_POLICIES_CHANGED { \
	0x03, 0xF1, 0x4B, 0xB4, 0xF9, 0x21, 0x45, 0x5B, \
	0xA8, 0xF4, 0xE0, 0x1E, 0x95, 0xA3, 0xA1, 0x19 }

/*
 * Event Name:  LF_UNLOADED
 * Event GUID:  041F514A-6A34-4ADC-8165-127E46D887E9
 * Event Desc:  Lower Framework Unloaded
 */
#define LF_UNLOADED { \
	0x04, 0x1F, 0x51, 0x4A, 0x6A, 0x34, 0x4A, 0xDC, \
	0x81, 0x65, 0x12, 0x7E, 0x46, 0xD8, 0x87, 0xE9 }

/*
 * Event Name:  ENERGY_THRESHOLD_CROSSED
 * Event GUID:  87235DE6-3A1C-4433-A6F5-B687EC3F572B
 * Event Desc:  Domain Energy Threshold Crossed
 */
#define ENERGY_THRESHOLD_CROSSED { \
	0x87, 0x23, 0x5D, 0xE6, 0x3A, 0x1C, 0x44, 0x33, \
	0xA6, 0xF5, 0xB6, 0x87, 0xEC, 0x3F, 0x57, 0x2B }

/*
 * Event Name:  POWER_SHARING_ALGORITHM_TABLE_CHANGED
 * Event GUID:  E030167D-5404-491D-BD88-DFD821FC7D38
 * Event Desc:  Power Sharing Algorithm Table Changed
 */
#define POWER_SHARING_ALGORITHM_TABLE_CHANGED { \
	0xE0, 0x30, 0x16, 0x7D, 0x54, 0x04, 0x49, 0x1D, \
	0xBD, 0x88, 0xDF, 0xD8, 0x21, 0xFC, 0x7D, 0x38 }

/*
 * Event Name:  WORKLOAD_HINT_CONFIGURATION_CHANGED
 * Event GUID:  48F9EFF7-000A-4256-8719-20AC705AC533
 * Event Desc:  Workload Hint Configuration Changed
 */
#define WORKLOAD_HINT_CONFIGURATION_CHANGED { \
	0x48, 0xF9, 0xEF, 0xF7, 0x00, 0x0A, 0x42, 0x56, \
	0x87, 0x19, 0x20, 0xAC, 0x70, 0x5A, 0xC5, 0x33 }

/*
 * Event Name:  PRIMARY_PARTICIPANT_ARRIVED
 * Event GUID:  D5B020CE-E89C-4449-90D9-0B6521ECE5A5
 * Event Desc:  Primary Participant Arrived
 */
#define PRIMARY_PARTICIPANT_ARRIVED { \
	0xD5, 0xB0, 0x20, 0xCE, 0xE8, 0x9C, 0x44, 0x49, \
	0x90, 0xD9, 0x0B, 0x65, 0x21, 0xEC, 0xE5, 0xA5 }

/*
 * Event Name:  FAN_CAPABILITIES_CHANGED
 * Event GUID:  A38DC228-A64D-40BF-ACB0-E339046B5C13
 * Event Desc:  Fan Capabilities Changed
 */
#define FAN_CAPABILITIES_CHANGED { \
	0xA3, 0x8D, 0xC2, 0x28, 0xA6, 0x4D, 0x40, 0xBF, \
	0xAC, 0xB0, 0xE3, 0x39, 0x04, 0x6B, 0x5C, 0x13 }

/*
 * Event Name:  ALIVE_REQUEST
 * Event GUID:  5D971796-47A7-4916-9216-7153E2473727
 * Event Desc:  Application Alive Request
 */
#define ALIVE_REQUEST { \
	0x5D, 0x97, 0x17, 0x96, 0x47, 0xA7, 0x49, 0x16, \
	0x92, 0x16, 0x71, 0x53, 0xE2, 0x47, 0x37, 0x27 }

/*
 * Event Name:  OS_MIXED_REALITY_MODE_CHANGED
 * Event GUID:  7AB94216-D5DA-40C5-9F8E-2B163E7031C0
 * Event Desc:  OS Mixed Reality Mode Changed
 */
#define OS_MIXED_REALITY_MODE_CHANGED { \
	0x7A, 0xB9, 0x42, 0x16, 0xD5, 0xDA, 0x40, 0xC5, \
	0x9F, 0x8E, 0x2B, 0x16, 0x3E, 0x70, 0x31, 0xC0 }

/*
 * Event Name:  BATTERY_COUNT_NOTIFICATION
 * Event GUID:  6C34D4AB-2713-445D-9550-1CF172422E70
 * Event Desc:  Battery Count Notification
 */
#define BATTERY_COUNT_NOTIFICATION { \
	0x6C, 0x34, 0xD4, 0xAB, 0x27, 0x13, 0x44, 0x5D, \
	0x95, 0x50, 0x1C, 0xF1, 0x72, 0x42, 0x2E, 0x70 }

/*
 * Event Name:  OS_SCREEN_STATE_CHANGED
 * Event GUID:  05DA8066-A6D5-45BF-8FB0-C644B01A0F1B
 * Event Desc:  OS Screen State Changed
 */
#define OS_SCREEN_STATE_CHANGED { \
	0x05, 0xDA, 0x80, 0x66, 0xA6, 0xD5, 0x45, 0xBF, \
	0x8F, 0xB0, 0xC6, 0x44, 0xB0, 0x1A, 0x0F, 0x1B }

/*
 * Event Name:  OS_USER_PRESENCE_CHANGED
 * Event GUID:  F04BD752-4CFD-4A3C-91CC-A5B59FDB27BB
 * Event Desc:  OS User Presence Changed
 */
#define OS_USER_PRESENCE_CHANGED { \
	0xF0, 0x4B, 0xD7, 0x52, 0x4C, 0xFD, 0x4A, 0x3C, \
	0x91, 0xCC, 0xA5, 0xB5, 0x9F, 0xDB, 0x27, 0xBB }

/*
 * Event Name:  BATTERY_HIGH_FREQUENCY_IMPEDANCE_CHANGED
 * Event GUID:  23B4590F-844C-482D-9E4D-6ABFAF20497A
 * Event Desc:  Battery High Frequency Impedance Changed
 */
#define BATTERY_HIGH_FREQUENCY_IMPEDANCE_CHANGED { \
	0x23, 0xB4, 0x59, 0x0F, 0x84, 0x4C, 0x48, 0x2D, \
	0x9E, 0x4D, 0x6A, 0xBF, 0xAF, 0x20, 0x49, 0x7A }

/*
 * Event Name:  BATTERY_NO_LOAD_VOLTAGE_CHANGED
 * Event GUID:  64C5A251-C79B-4362-88DC-17740B88ABD1
 * Event Desc:  Battery No Load Voltage Changed
 */
#define BATTERY_NO_LOAD_VOLTAGE_CHANGED { \
	0x64, 0xC5, 0xA2, 0x51, 0xC7, 0x9B, 0x43, 0x62, \
	0x88, 0xDC, 0x17, 0x74, 0x0B, 0x88, 0xAB, 0xD1 }

/*
 * Event Name:  BATTERY_STATE_OF_CHARGE_CHANGED
 * Event GUID:  972D727B-7411-4B54-BF4E-C80102DF3CD3
 * Event Desc:  Battery State Of Charge Changed
 */
#define BATTERY_STATE_OF_CHARGE_CHANGED { \
	0x97, 0x2D, 0x72, 0x7B, 0x74, 0x11, 0x4B, 0x54, \
	0xBF, 0x4E, 0xC8, 0x01, 0x02, 0xDF, 0x3C, 0xD3 }

/*
 * Event Name:  BATTERY_TEMPERATURE_CHANGED
 * Event GUID:  5DBE0B5D-ED67-47BA-ABB9-DD1FD62ABE49
 * Event Desc:  Battery Temperature Changed
 */
#define BATTERY_TEMPERATURE_CHANGED { \
	0x5D, 0xBE, 0x0B, 0x5D, 0xED, 0x67, 0x47, 0xBA, \
	0xAB, 0xB9, 0xDD, 0x1F, 0xD6, 0x2A, 0xBE, 0x49 }

/*
 * Event Name:  VOLTAGE_THRESHOLD_MATH_TABLE_CHANGED
 * Event GUID:  5AB41479-79DE-4F56-B7B5-3118CA8F2ACA
 * Event Desc:  Voltage Threshold Math Table Changed
 */
#define VOLTAGE_THRESHOLD_MATH_TABLE_CHANGED { \
	0x5A, 0xB4, 0x14, 0x79, 0x79, 0xDE, 0x4F, 0x56, \
	0xB7, 0xB5, 0x31, 0x18, 0xCA, 0x8F, 0x2A, 0xCA }

/*
 * Event Name:  OS_POWER_SLIDER_VALUE_CHANGED
 * Event GUID:  1CB98C3A-1492-46C0-A24C-766D09ADBED2
 * Event Desc:  OS Power Slider Value Changed
 */
#define OS_POWER_SLIDER_VALUE_CHANGED { \
	0x1C, 0xB9, 0x8C, 0x3A, 0x14, 0x92, 0x46, 0xC0, \
	0xA2, 0x4C, 0x76, 0x6D, 0x09, 0xAD, 0xBE, 0xD2 }

/*
 * Event Name:  WORKLOAD_CLASSIFICATION_CHANGED
 * Event GUID:  D5ADA6F4-161E-40D4-B337-F774AB89EA5A
 * Event Desc:  Workload Classification Changed
 */
#define WORKLOAD_CLASSIFICATION_CHANGED { \
	0xD5, 0xAD, 0xA6, 0xF4, 0x16, 0x1E, 0x40, 0xD4, \
	0xB3, 0x37, 0xF7, 0x74, 0xAB, 0x89, 0xEA, 0x5A }

/*
 * Event Name:  POWER_SHARING_ALGORITHM_TABLE_2_CHANGED
 * Event GUID:  E876FCDD-A646-4E65-9909-C18B48D721DD
 * Event Desc:  Power Sharing Algorithm Table 2 Changed
 */
#define POWER_SHARING_ALGORITHM_TABLE_2_CHANGED { \
	0xE8, 0x76, 0xFC, 0xDD, 0xA6, 0x46, 0x4E, 0x65, \
	0x99, 0x09, 0xC1, 0x8B, 0x48, 0xD7, 0x21, 0xDD }

/*
 * Event Name:  OS_GAME_MODE_CHANGED
 * Event GUID:  DEA0B036-6E21-433A-BF08-F639E722560C
 * Event Desc:  OS Game Mode Changed
 */
#define OS_GAME_MODE_CHANGED { \
	0xDE, 0xA0, 0xB0, 0x36, 0x6E, 0x21, 0x43, 0x3A, \
	0xBF, 0x08, 0xF6, 0x39, 0xE7, 0x22, 0x56, 0x0C }

/*
 * Event Name:  SESSION_STATE_CHANGED
 * Event GUID:  AD9D764C-E5A2-47F1-B350-940674FE8D72
 * Event Desc:  Session State Changed
 */
#define SESSION_STATE_CHANGED { \
	0xAD, 0x9D, 0x76, 0x4C, 0xE5, 0xA2, 0x47, 0xF1, \
	0xB3, 0x50, 0x94, 0x06, 0x74, 0xFE, 0x8D, 0x72 }

/*
 * Event Name:  SENSOR_USER_PRESENCE_CHANGED
 * Event GUID:  B8F69C7F-E086-45EE-9511-D12A684EA606
 * Event Desc:  Sensor User Presence Changed
 */
#define SENSOR_USER_PRESENCE_CHANGED { \
	0xB8, 0xF6, 0x9C, 0x7F, 0xE0, 0x86, 0x45, 0xEE, \
	0x95, 0x11, 0xD1, 0x2A, 0x68, 0x4E, 0xA6, 0x06 }

/*
 * Event Name:  ADAPTIVE_USER_PRESENCE_TABLE_CHANGED
 * Event GUID:  994B8030-C1CC-4C0E-8B54-1BFB40AD01BD
 * Event Desc:  Adaptive User Presence Table Changed
 */
#define ADAPTIVE_USER_PRESENCE_TABLE_CHANGED { \
	0x99, 0x4B, 0x80, 0x30, 0xC1, 0xCC, 0x4C, 0x0E, \
	0x8B, 0x54, 0x1B, 0xFB, 0x40, 0xAD, 0x01, 0xBD }

/*
 * Event Name:  ADAPTIVE_DIMMING_FEATURE_STATE_CHANGED
 * Event GUID:  17535021-1714-4838-A04A-93BC062F413F
 * Event Desc:  Adaptive Dimming Feature State Changed
 */
#define ADAPTIVE_DIMMING_FEATURE_STATE_CHANGED { \
	0x17, 0x53, 0x50, 0x21, 0x17, 0x14, 0x48, 0x38, \
	0xA0, 0x4A, 0x93, 0xBC, 0x06, 0x2F, 0x41, 0x3F }

/*
 * Event Name:  ADAPTIVE_DIMMING_EXTERNAL_MONITOR_FEATURE_STATE_CHANGED
 * Event GUID:  91CD8538-1A16-4107-80A4-2AEF2601EF50
 * Event Desc:  Adaptive Dimming With External Monitor Feature State Changed
 */
#define ADAPTIVE_DIMMING_EXTERNAL_MONITOR_FEATURE_STATE_CHANGED { \
	0x91, 0xCD, 0x85, 0x38, 0x1A, 0x16, 0x41, 0x07, \
	0x80, 0xA4, 0x2A, 0xEF, 0x26, 0x01, 0xEF, 0x50 }

/*
 * Event Name:  NO_LOCK_ON_PRESENCE_FEATURE_STATE_CHANGED
 * Event GUID:  BD97BA41-5288-482D-A52F-542A6DFC35DD
 * Event Desc:  No Lock On Presence Feature State Changed
 */
#define NO_LOCK_ON_PRESENCE_FEATURE_STATE_CHANGED { \
	0xBD, 0x97, 0xBA, 0x41, 0x52, 0x88, 0x48, 0x2D, \
	0xA5, 0x2F, 0x54, 0x2A, 0x6D, 0xFC, 0x35, 0xDD }

/*
 * Event Name:  WALK_AWAY_LOCK_FEATURE_STATE_CHANGED
 * Event GUID:  51DBAE9F-2276-4783-A56D-BA6D4667991D
 * Event Desc:  Walk Away Lock Feature State Changed
 */
#define WALK_AWAY_LOCK_FEATURE_STATE_CHANGED { \
	0x51, 0xDB, 0xAE, 0x9F, 0x22, 0x76, 0x47, 0x83, \
	0xA5, 0x6D, 0xBA, 0x6D, 0x46, 0x67, 0x99, 0x1D }

/*
 * Event Name:  WALK_AWAY_LOCK_EXTERNAL_MONITOR_FEATURE_STATE_CHANGED
 * Event GUID:  2EBA98A5-F5E8-4355-A2CC-6FC905A637CA
 * Event Desc:  Walk Away Lock With External Monitor Feature State Changed
 */
#define WALK_AWAY_LOCK_EXTERNAL_MONITOR_FEATURE_STATE_CHANGED { \
	0x2E, 0xBA, 0x98, 0xA5, 0xF5, 0xE8, 0x43, 0x55, \
	0xA2, 0xCC, 0x6F, 0xC9, 0x05, 0xA6, 0x37, 0xCA }

/*
 * Event Name:  WAKE_ON_APPROACH_FEATURE_STATE_CHANGED
 * Event GUID:  CF57DA84-3B58-4D06-82EA-071693CAAFDE
 * Event Desc:  Wake On Approach Feature State Changed
 */
#define WAKE_ON_APPROACH_FEATURE_STATE_CHANGED { \
	0xCF, 0x57, 0xDA, 0x84, 0x3B, 0x58, 0x4D, 0x06, \
	0x82, 0xEA, 0x07, 0x16, 0x93, 0xCA, 0xAF, 0xDE }

/*
 * Event Name:  WAKE_ON_APPROACH_EXTERNAL_MONITOR_FEATURE_STATE_CHANGED
 * Event GUID:  462AE37A-E63B-4030-9A6E-84432EEB580A
 * Event Desc:  Wake On Approach Feature State Changed
 */
#define WAKE_ON_APPROACH_EXTERNAL_MONITOR_FEATURE_STATE_CHANGED { \
	0x46, 0x2A, 0xE3, 0x7A, 0xE6, 0x3B, 0x40, 0x30, \
	0x9A, 0x6E, 0x84, 0x43, 0x2E, 0xEB, 0x58, 0x0A }

/*
 * Event Name:  SCREEN_LOCK_WAIT_TIME_CHANGED
 * Event GUID:  3721BB70-6AE5-4295-9081-A3FEFDF4AB1E
 * Event Desc:  Screen Lock Wait Time Changed
 */
#define SCREEN_LOCK_WAIT_TIME_CHANGED { \
	0x37, 0x21, 0xBB, 0x70, 0x6A, 0xE5, 0x42, 0x95, \
	0x90, 0x81, 0xA3, 0xFE, 0xFD, 0xF4, 0xAB, 0x1E }

/*
 * Event Name:  ADAPTIVE_DIMMING_PRESENTATION_MODE_FEATURE_STATE_CHANGED
 * Event GUID:  11064589-A349-4706-BFF8-33EB0E294019
 * Event Desc:  Adaptive Dimming Presentation Mode Feature State Changed
 */
#define ADAPTIVE_DIMMING_PRESENTATION_MODE_FEATURE_STATE_CHANGED { \
	0x11, 0x06, 0x45, 0x89, 0xA3, 0x49, 0x47, 0x06, \
	0xBF, 0xF8, 0x33, 0xEB, 0x0E, 0x29, 0x40, 0x19 }

/*
 * Event Name:  PLATFORM_USER_PRESENCE_CHANGED
 * Event GUID:  D98498F0-46DE-4506-AAEE-B426F9B0D5EE
 * Event Desc:  Platform User Presence Changed
 */
#define PLATFORM_USER_PRESENCE_CHANGED { \
	0xD9, 0x84, 0x98, 0xF0, 0x46, 0xDE, 0x45, 0x06, \
	0xAA, 0xEE, 0xB4, 0x26, 0xF9, 0xB0, 0xD5, 0xEE }

