/******************************************************************************
** Copyright (c) 2013-2019 Intel Corporation All Rights Reserved
**
** Licensed under the Apache License, Version 2.0 (the "License"); you may not
** use this file except in compliance with the License.
**
** You may obtain a copy of the License at
**     http://www.apache.org/licenses/LICENSE-2.0
**
** Unless required by applicable law or agreed to in writing, software
** distributed under the License is distributed on an "AS IS" BASIS, WITHOUT
** WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
**
** See the License for the specific language governing permissions and
** limitations under the License.
**
******************************************************************************/
#pragma once

#include "esif.h"
#include "esif_participant.h"

#ifdef __cplusplus
extern "C" {
#endif

eEsifError EsifEventBroadcast_ControlActionEnableParticipant(EsifUpPtr upPtr);
void EsifEventBroadcast_PolicyLoggingEnable(Bool flag);
void EsifEventBroadcast_MotionSensorEnable(Bool flag);

#ifdef __cplusplus
}
#endif

/*****************************************************************************/
/*****************************************************************************/
/*****************************************************************************/
