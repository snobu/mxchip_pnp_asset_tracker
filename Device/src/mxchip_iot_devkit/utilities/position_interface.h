﻿/************************************************************************************************
 * This code was automatically generated by Digital Twin Code Generator tool 0.6.3.
 * Changes to this file may cause incorrect behavior and will be lost if the code is regenerated.
 *
 * Generated Date: Tuesday, October 22, 2019
 ***********************************************************************************************/

#ifndef POSITION_INTERFACE_H
#define POSITION_INTERFACE_H

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include "digitaltwin_interface_client.h"
#include "azure_c_shared_utility/xlogging.h"
#include "azure_c_shared_utility/threadapi.h"

#include "digitaltwin_client_helper.h"
#include "digitaltwin_serializer.h"
#include "parson.h"
#include "../mxchip_iot_devkit_impl.h"

#ifdef __cplusplus
extern "C"
{
#endif

typedef enum POSITION_TELEMETRY_TAG
{
    Position_LOCATION_TELEMETRY
} POSITION_TELEMETRY;

// DigitalTwin interface name from service perspective.
static const char PositionInterfaceId[] = "urn:contosoartshipping:position:1";
static const char PositionInterfaceInstanceName[] = "position";

// Telemetry names for this interface.

static const char PositionInterface_LocationTelemetry[] = "location";

// Property names for this interface.

// Command names for this interface

// Methods
DIGITALTWIN_INTERFACE_CLIENT_HANDLE PositionInterface_Create();

void PositionInterface_Close(DIGITALTWIN_INTERFACE_CLIENT_HANDLE digitalTwinInterfaceClientHandle);

DIGITALTWIN_CLIENT_RESULT PositionInterface_Telemetry_SendLocation();

DIGITALTWIN_CLIENT_RESULT PositionInterface_Telemetry_SendAll();

#ifdef __cplusplus
}
#endif

#endif  // POSITION_INTERFACE_H
