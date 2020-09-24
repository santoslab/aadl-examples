cmake_minimum_required(VERSION 3.6.2)

project(main)

set(CMAKE_C_STANDARD 99)

add_compile_options(-Werror)

add_compile_options("$<$<CONFIG:Release>:-O2>")

option(BOUND_CHECK
  "Build the program with sequence bound checking."
  OFF)

if(BOUND_CHECK)
  add_definitions(-DSIREUM_BOUND_CHECK)
endif(BOUND_CHECK)

option(RANGE_CHECK
  "Build the program with range checking."
  OFF)

if(RANGE_CHECK)
  add_definitions(-DSIREUM_RANGE_CHECK)
endif(RANGE_CHECK)

option(NO_PRINT
  "Build the program without console output."
  OFF)

if(NO_PRINT)
  add_definitions(-DSIREUM_NO_PRINT)
endif(NO_PRINT)

option(WITH_LOC
  "Build the program with Slang location info."
  OFF)

if(WITH_LOC)
  add_definitions(-DSIREUM_LOC)
endif(WITH_LOC)

add_library(main STATIC
        runtime/type.c
        runtime/misc.c
        runtime/misc.h
        runtime/type.h
        runtime/stackframe.h
        runtime/stackframe.c
        runtime/ztype.h
        runtime/type-composite.h
        runtime/types.h
        runtime/types.c
        runtime/all.h
        runtime/all.c
        library/art/type-art_ArchitectureDescription.h
        library/art/art_ArchitectureDescription.h
        library/art/art_ArchitectureDescription.c
        library/art/type-art_Art.h
        library/art/art_Art.h
        library/art/art_Art.c
        library/art/type-art_Bridge.h
        library/art/art_Bridge.h
        library/art/art_Bridge.c
        library/art/Bridge/type-art_Bridge_EntryPoints.h
        library/art/Bridge/art_Bridge_EntryPoints.h
        library/art/Bridge/art_Bridge_EntryPoints.c
        library/art/Bridge/type-art_Bridge_Ports.h
        library/art/Bridge/art_Bridge_Ports.h
        library/art/Bridge/art_Bridge_Ports.c
        library/art/type-art_Connection.h
        library/art/art_Connection.h
        library/art/art_Connection.c
        library/art/type-art_DataContent.h
        library/art/art_DataContent.h
        library/art/art_DataContent.c
        library/art/type-art_DispatchPropertyProtocol.h
        library/art/art_DispatchPropertyProtocol.h
        library/art/art_DispatchPropertyProtocol.c
        library/art/DispatchPropertyProtocol/type-art_DispatchPropertyProtocol_Periodic.h
        library/art/DispatchPropertyProtocol/art_DispatchPropertyProtocol_Periodic.h
        library/art/DispatchPropertyProtocol/art_DispatchPropertyProtocol_Periodic.c
        library/art/DispatchPropertyProtocol/type-art_DispatchPropertyProtocol_Sporadic.h
        library/art/DispatchPropertyProtocol/art_DispatchPropertyProtocol_Sporadic.h
        library/art/DispatchPropertyProtocol/art_DispatchPropertyProtocol_Sporadic.c
        library/art/type-art_Empty.h
        library/art/art_Empty.h
        library/art/art_Empty.c
        library/art/PortMode/type-art_PortMode_Type.h
        library/art/PortMode/art_PortMode_Type.h
        library/art/PortMode/art_PortMode_Type.c
        library/art/type-art_UConnection.h
        library/art/art_UConnection.h
        library/art/art_UConnection.c
        library/art/type-art_UPort.h
        library/art/art_UPort.h
        library/art/art_UPort.c
        library/art/type-art_art_Port_45E54D.h
        library/art/art_art_Port_45E54D.h
        library/art/art_art_Port_45E54D.c
        library/art/type-art_art_Port_9CBF18.h
        library/art/art_art_Port_9CBF18.h
        library/art/art_art_Port_9CBF18.c
        library/hamr/type-hamr_Arch.h
        library/hamr/hamr_Arch.h
        library/hamr/hamr_Arch.c
        library/hamr/type-hamr_ArtNix.h
        library/hamr/hamr_ArtNix.h
        library/hamr/hamr_ArtNix.c
        library/hamr/type-hamr_Base_Types.h
        library/hamr/hamr_Base_Types.h
        library/hamr/hamr_Base_Types.c
        library/hamr/Base_Types/type-hamr_Base_Types_Bits_Payload.h
        library/hamr/Base_Types/hamr_Base_Types_Bits_Payload.h
        library/hamr/Base_Types/hamr_Base_Types_Bits_Payload.c
        library/hamr/Drivers/type-hamr_Drivers_UARTDriver_Impl_Bridge.h
        library/hamr/Drivers/hamr_Drivers_UARTDriver_Impl_Bridge.h
        library/hamr/Drivers/hamr_Drivers_UARTDriver_Impl_Bridge.c
        library/hamr/Drivers/UARTDriver_Impl_Bridge/type-hamr_Drivers_UARTDriver_Impl_Bridge_Api.h
        library/hamr/Drivers/UARTDriver_Impl_Bridge/hamr_Drivers_UARTDriver_Impl_Bridge_Api.h
        library/hamr/Drivers/UARTDriver_Impl_Bridge/hamr_Drivers_UARTDriver_Impl_Bridge_Api.c
        library/hamr/Drivers/UARTDriver_Impl_Bridge/type-hamr_Drivers_UARTDriver_Impl_Bridge_EntryPoints.h
        library/hamr/Drivers/UARTDriver_Impl_Bridge/hamr_Drivers_UARTDriver_Impl_Bridge_EntryPoints.h
        library/hamr/Drivers/UARTDriver_Impl_Bridge/hamr_Drivers_UARTDriver_Impl_Bridge_EntryPoints.c
        library/hamr/Drivers/type-hamr_Drivers_UARTDriver_Impl_Impl.h
        library/hamr/Drivers/hamr_Drivers_UARTDriver_Impl_Impl.h
        library/hamr/Drivers/hamr_Drivers_UARTDriver_Impl_Impl.c
        library/hamr/type-hamr_IPCPorts.h
        library/hamr/hamr_IPCPorts.h
        library/hamr/hamr_IPCPorts.c
        library/hamr/type-hamr_Main.h
        library/hamr/hamr_Main.h
        library/hamr/hamr_Main.c
        library/hamr/type-hamr_PlatformNix.h
        library/hamr/hamr_PlatformNix.h
        library/hamr/hamr_PlatformNix.c
        library/hamr/type-hamr_Process.h
        library/hamr/hamr_Process.h
        library/hamr/SW/type-hamr_SW_CASE_AttestationGate_thr_Impl_Bridge.h
        library/hamr/SW/hamr_SW_CASE_AttestationGate_thr_Impl_Bridge.h
        library/hamr/SW/hamr_SW_CASE_AttestationGate_thr_Impl_Bridge.c
        library/hamr/SW/CASE_AttestationGate_thr_Impl_Bridge/type-hamr_SW_CASE_AttestationGate_thr_Impl_Bridge_Api.h
        library/hamr/SW/CASE_AttestationGate_thr_Impl_Bridge/hamr_SW_CASE_AttestationGate_thr_Impl_Bridge_Api.h
        library/hamr/SW/CASE_AttestationGate_thr_Impl_Bridge/hamr_SW_CASE_AttestationGate_thr_Impl_Bridge_Api.c
        library/hamr/SW/CASE_AttestationGate_thr_Impl_Bridge/type-hamr_SW_CASE_AttestationGate_thr_Impl_Bridge_EntryPoints.h
        library/hamr/SW/CASE_AttestationGate_thr_Impl_Bridge/hamr_SW_CASE_AttestationGate_thr_Impl_Bridge_EntryPoints.h
        library/hamr/SW/CASE_AttestationGate_thr_Impl_Bridge/hamr_SW_CASE_AttestationGate_thr_Impl_Bridge_EntryPoints.c
        library/hamr/SW/type-hamr_SW_CASE_AttestationGate_thr_Impl_Impl.h
        library/hamr/SW/hamr_SW_CASE_AttestationGate_thr_Impl_Impl.h
        library/hamr/SW/hamr_SW_CASE_AttestationGate_thr_Impl_Impl.c
        library/hamr/SW/type-hamr_SW_CASE_AttestationManager_thr_Impl_Bridge.h
        library/hamr/SW/hamr_SW_CASE_AttestationManager_thr_Impl_Bridge.h
        library/hamr/SW/hamr_SW_CASE_AttestationManager_thr_Impl_Bridge.c
        library/hamr/SW/CASE_AttestationManager_thr_Impl_Bridge/type-hamr_SW_CASE_AttestationManager_thr_Impl_Bridge_Api.h
        library/hamr/SW/CASE_AttestationManager_thr_Impl_Bridge/hamr_SW_CASE_AttestationManager_thr_Impl_Bridge_Api.h
        library/hamr/SW/CASE_AttestationManager_thr_Impl_Bridge/hamr_SW_CASE_AttestationManager_thr_Impl_Bridge_Api.c
        library/hamr/SW/CASE_AttestationManager_thr_Impl_Bridge/type-hamr_SW_CASE_AttestationManager_thr_Impl_Bridge_EntryPoints.h
        library/hamr/SW/CASE_AttestationManager_thr_Impl_Bridge/hamr_SW_CASE_AttestationManager_thr_Impl_Bridge_EntryPoints.h
        library/hamr/SW/CASE_AttestationManager_thr_Impl_Bridge/hamr_SW_CASE_AttestationManager_thr_Impl_Bridge_EntryPoints.c
        library/hamr/SW/type-hamr_SW_CASE_AttestationManager_thr_Impl_Impl.h
        library/hamr/SW/hamr_SW_CASE_AttestationManager_thr_Impl_Impl.h
        library/hamr/SW/hamr_SW_CASE_AttestationManager_thr_Impl_Impl.c
        library/hamr/SW/type-hamr_SW_CASE_Filter_AReq_thr_Impl_Bridge.h
        library/hamr/SW/hamr_SW_CASE_Filter_AReq_thr_Impl_Bridge.h
        library/hamr/SW/hamr_SW_CASE_Filter_AReq_thr_Impl_Bridge.c
        library/hamr/SW/CASE_Filter_AReq_thr_Impl_Bridge/type-hamr_SW_CASE_Filter_AReq_thr_Impl_Bridge_Api.h
        library/hamr/SW/CASE_Filter_AReq_thr_Impl_Bridge/hamr_SW_CASE_Filter_AReq_thr_Impl_Bridge_Api.h
        library/hamr/SW/CASE_Filter_AReq_thr_Impl_Bridge/hamr_SW_CASE_Filter_AReq_thr_Impl_Bridge_Api.c
        library/hamr/SW/CASE_Filter_AReq_thr_Impl_Bridge/type-hamr_SW_CASE_Filter_AReq_thr_Impl_Bridge_EntryPoints.h
        library/hamr/SW/CASE_Filter_AReq_thr_Impl_Bridge/hamr_SW_CASE_Filter_AReq_thr_Impl_Bridge_EntryPoints.h
        library/hamr/SW/CASE_Filter_AReq_thr_Impl_Bridge/hamr_SW_CASE_Filter_AReq_thr_Impl_Bridge_EntryPoints.c
        library/hamr/SW/type-hamr_SW_CASE_Filter_AReq_thr_Impl_Impl.h
        library/hamr/SW/hamr_SW_CASE_Filter_AReq_thr_Impl_Impl.h
        library/hamr/SW/hamr_SW_CASE_Filter_AReq_thr_Impl_Impl.c
        library/hamr/SW/type-hamr_SW_CASE_Filter_ARes_thr_Impl_Bridge.h
        library/hamr/SW/hamr_SW_CASE_Filter_ARes_thr_Impl_Bridge.h
        library/hamr/SW/hamr_SW_CASE_Filter_ARes_thr_Impl_Bridge.c
        library/hamr/SW/CASE_Filter_ARes_thr_Impl_Bridge/type-hamr_SW_CASE_Filter_ARes_thr_Impl_Bridge_Api.h
        library/hamr/SW/CASE_Filter_ARes_thr_Impl_Bridge/hamr_SW_CASE_Filter_ARes_thr_Impl_Bridge_Api.h
        library/hamr/SW/CASE_Filter_ARes_thr_Impl_Bridge/hamr_SW_CASE_Filter_ARes_thr_Impl_Bridge_Api.c
        library/hamr/SW/CASE_Filter_ARes_thr_Impl_Bridge/type-hamr_SW_CASE_Filter_ARes_thr_Impl_Bridge_EntryPoints.h
        library/hamr/SW/CASE_Filter_ARes_thr_Impl_Bridge/hamr_SW_CASE_Filter_ARes_thr_Impl_Bridge_EntryPoints.h
        library/hamr/SW/CASE_Filter_ARes_thr_Impl_Bridge/hamr_SW_CASE_Filter_ARes_thr_Impl_Bridge_EntryPoints.c
        library/hamr/SW/type-hamr_SW_CASE_Filter_ARes_thr_Impl_Impl.h
        library/hamr/SW/hamr_SW_CASE_Filter_ARes_thr_Impl_Impl.h
        library/hamr/SW/hamr_SW_CASE_Filter_ARes_thr_Impl_Impl.c
        library/hamr/SW/type-hamr_SW_CASE_Filter_LST_thr_Impl_Bridge.h
        library/hamr/SW/hamr_SW_CASE_Filter_LST_thr_Impl_Bridge.h
        library/hamr/SW/hamr_SW_CASE_Filter_LST_thr_Impl_Bridge.c
        library/hamr/SW/CASE_Filter_LST_thr_Impl_Bridge/type-hamr_SW_CASE_Filter_LST_thr_Impl_Bridge_Api.h
        library/hamr/SW/CASE_Filter_LST_thr_Impl_Bridge/hamr_SW_CASE_Filter_LST_thr_Impl_Bridge_Api.h
        library/hamr/SW/CASE_Filter_LST_thr_Impl_Bridge/hamr_SW_CASE_Filter_LST_thr_Impl_Bridge_Api.c
        library/hamr/SW/CASE_Filter_LST_thr_Impl_Bridge/type-hamr_SW_CASE_Filter_LST_thr_Impl_Bridge_EntryPoints.h
        library/hamr/SW/CASE_Filter_LST_thr_Impl_Bridge/hamr_SW_CASE_Filter_LST_thr_Impl_Bridge_EntryPoints.h
        library/hamr/SW/CASE_Filter_LST_thr_Impl_Bridge/hamr_SW_CASE_Filter_LST_thr_Impl_Bridge_EntryPoints.c
        library/hamr/SW/type-hamr_SW_CASE_Filter_LST_thr_Impl_Impl.h
        library/hamr/SW/hamr_SW_CASE_Filter_LST_thr_Impl_Impl.h
        library/hamr/SW/hamr_SW_CASE_Filter_LST_thr_Impl_Impl.c
        library/hamr/SW/type-hamr_SW_CASE_Filter_OR_thr_Impl_Bridge.h
        library/hamr/SW/hamr_SW_CASE_Filter_OR_thr_Impl_Bridge.h
        library/hamr/SW/hamr_SW_CASE_Filter_OR_thr_Impl_Bridge.c
        library/hamr/SW/CASE_Filter_OR_thr_Impl_Bridge/type-hamr_SW_CASE_Filter_OR_thr_Impl_Bridge_Api.h
        library/hamr/SW/CASE_Filter_OR_thr_Impl_Bridge/hamr_SW_CASE_Filter_OR_thr_Impl_Bridge_Api.h
        library/hamr/SW/CASE_Filter_OR_thr_Impl_Bridge/hamr_SW_CASE_Filter_OR_thr_Impl_Bridge_Api.c
        library/hamr/SW/CASE_Filter_OR_thr_Impl_Bridge/type-hamr_SW_CASE_Filter_OR_thr_Impl_Bridge_EntryPoints.h
        library/hamr/SW/CASE_Filter_OR_thr_Impl_Bridge/hamr_SW_CASE_Filter_OR_thr_Impl_Bridge_EntryPoints.h
        library/hamr/SW/CASE_Filter_OR_thr_Impl_Bridge/hamr_SW_CASE_Filter_OR_thr_Impl_Bridge_EntryPoints.c
        library/hamr/SW/type-hamr_SW_CASE_Filter_OR_thr_Impl_Impl.h
        library/hamr/SW/hamr_SW_CASE_Filter_OR_thr_Impl_Impl.h
        library/hamr/SW/hamr_SW_CASE_Filter_OR_thr_Impl_Impl.c
        library/hamr/SW/type-hamr_SW_CASE_Monitor_Geo_thr_Impl_Bridge.h
        library/hamr/SW/hamr_SW_CASE_Monitor_Geo_thr_Impl_Bridge.h
        library/hamr/SW/hamr_SW_CASE_Monitor_Geo_thr_Impl_Bridge.c
        library/hamr/SW/CASE_Monitor_Geo_thr_Impl_Bridge/type-hamr_SW_CASE_Monitor_Geo_thr_Impl_Bridge_Api.h
        library/hamr/SW/CASE_Monitor_Geo_thr_Impl_Bridge/hamr_SW_CASE_Monitor_Geo_thr_Impl_Bridge_Api.h
        library/hamr/SW/CASE_Monitor_Geo_thr_Impl_Bridge/hamr_SW_CASE_Monitor_Geo_thr_Impl_Bridge_Api.c
        library/hamr/SW/CASE_Monitor_Geo_thr_Impl_Bridge/type-hamr_SW_CASE_Monitor_Geo_thr_Impl_Bridge_EntryPoints.h
        library/hamr/SW/CASE_Monitor_Geo_thr_Impl_Bridge/hamr_SW_CASE_Monitor_Geo_thr_Impl_Bridge_EntryPoints.h
        library/hamr/SW/CASE_Monitor_Geo_thr_Impl_Bridge/hamr_SW_CASE_Monitor_Geo_thr_Impl_Bridge_EntryPoints.c
        library/hamr/SW/type-hamr_SW_CASE_Monitor_Geo_thr_Impl_Impl.h
        library/hamr/SW/hamr_SW_CASE_Monitor_Geo_thr_Impl_Impl.h
        library/hamr/SW/hamr_SW_CASE_Monitor_Geo_thr_Impl_Impl.c
        library/hamr/SW/type-hamr_SW_CASE_Monitor_Req_thr_Impl_Bridge.h
        library/hamr/SW/hamr_SW_CASE_Monitor_Req_thr_Impl_Bridge.h
        library/hamr/SW/hamr_SW_CASE_Monitor_Req_thr_Impl_Bridge.c
        library/hamr/SW/CASE_Monitor_Req_thr_Impl_Bridge/type-hamr_SW_CASE_Monitor_Req_thr_Impl_Bridge_Api.h
        library/hamr/SW/CASE_Monitor_Req_thr_Impl_Bridge/hamr_SW_CASE_Monitor_Req_thr_Impl_Bridge_Api.h
        library/hamr/SW/CASE_Monitor_Req_thr_Impl_Bridge/hamr_SW_CASE_Monitor_Req_thr_Impl_Bridge_Api.c
        library/hamr/SW/CASE_Monitor_Req_thr_Impl_Bridge/type-hamr_SW_CASE_Monitor_Req_thr_Impl_Bridge_EntryPoints.h
        library/hamr/SW/CASE_Monitor_Req_thr_Impl_Bridge/hamr_SW_CASE_Monitor_Req_thr_Impl_Bridge_EntryPoints.h
        library/hamr/SW/CASE_Monitor_Req_thr_Impl_Bridge/hamr_SW_CASE_Monitor_Req_thr_Impl_Bridge_EntryPoints.c
        library/hamr/SW/type-hamr_SW_CASE_Monitor_Req_thr_Impl_Impl.h
        library/hamr/SW/hamr_SW_CASE_Monitor_Req_thr_Impl_Impl.h
        library/hamr/SW/hamr_SW_CASE_Monitor_Req_thr_Impl_Impl.c
        library/hamr/SW/type-hamr_SW_FlyZonesDatabase_thr_Impl_Bridge.h
        library/hamr/SW/hamr_SW_FlyZonesDatabase_thr_Impl_Bridge.h
        library/hamr/SW/hamr_SW_FlyZonesDatabase_thr_Impl_Bridge.c
        library/hamr/SW/FlyZonesDatabase_thr_Impl_Bridge/type-hamr_SW_FlyZonesDatabase_thr_Impl_Bridge_Api.h
        library/hamr/SW/FlyZonesDatabase_thr_Impl_Bridge/hamr_SW_FlyZonesDatabase_thr_Impl_Bridge_Api.h
        library/hamr/SW/FlyZonesDatabase_thr_Impl_Bridge/hamr_SW_FlyZonesDatabase_thr_Impl_Bridge_Api.c
        library/hamr/SW/FlyZonesDatabase_thr_Impl_Bridge/type-hamr_SW_FlyZonesDatabase_thr_Impl_Bridge_EntryPoints.h
        library/hamr/SW/FlyZonesDatabase_thr_Impl_Bridge/hamr_SW_FlyZonesDatabase_thr_Impl_Bridge_EntryPoints.h
        library/hamr/SW/FlyZonesDatabase_thr_Impl_Bridge/hamr_SW_FlyZonesDatabase_thr_Impl_Bridge_EntryPoints.c
        library/hamr/SW/type-hamr_SW_FlyZonesDatabase_thr_Impl_Impl.h
        library/hamr/SW/hamr_SW_FlyZonesDatabase_thr_Impl_Impl.h
        library/hamr/SW/hamr_SW_FlyZonesDatabase_thr_Impl_Impl.c
        library/hamr/SW/type-hamr_SW_RadioDriver_Attestation_thr_Impl_Bridge.h
        library/hamr/SW/hamr_SW_RadioDriver_Attestation_thr_Impl_Bridge.h
        library/hamr/SW/hamr_SW_RadioDriver_Attestation_thr_Impl_Bridge.c
        library/hamr/SW/RadioDriver_Attestation_thr_Impl_Bridge/type-hamr_SW_RadioDriver_Attestation_thr_Impl_Bridge_Api.h
        library/hamr/SW/RadioDriver_Attestation_thr_Impl_Bridge/hamr_SW_RadioDriver_Attestation_thr_Impl_Bridge_Api.h
        library/hamr/SW/RadioDriver_Attestation_thr_Impl_Bridge/hamr_SW_RadioDriver_Attestation_thr_Impl_Bridge_Api.c
        library/hamr/SW/RadioDriver_Attestation_thr_Impl_Bridge/type-hamr_SW_RadioDriver_Attestation_thr_Impl_Bridge_EntryPoints.h
        library/hamr/SW/RadioDriver_Attestation_thr_Impl_Bridge/hamr_SW_RadioDriver_Attestation_thr_Impl_Bridge_EntryPoints.h
        library/hamr/SW/RadioDriver_Attestation_thr_Impl_Bridge/hamr_SW_RadioDriver_Attestation_thr_Impl_Bridge_EntryPoints.c
        library/hamr/SW/type-hamr_SW_RadioDriver_Attestation_thr_Impl_Impl.h
        library/hamr/SW/hamr_SW_RadioDriver_Attestation_thr_Impl_Impl.h
        library/hamr/SW/hamr_SW_RadioDriver_Attestation_thr_Impl_Impl.c
        library/hamr/SW/type-hamr_SW_UxAS_thr_Impl_Bridge.h
        library/hamr/SW/hamr_SW_UxAS_thr_Impl_Bridge.h
        library/hamr/SW/hamr_SW_UxAS_thr_Impl_Bridge.c
        library/hamr/SW/UxAS_thr_Impl_Bridge/type-hamr_SW_UxAS_thr_Impl_Bridge_Api.h
        library/hamr/SW/UxAS_thr_Impl_Bridge/hamr_SW_UxAS_thr_Impl_Bridge_Api.h
        library/hamr/SW/UxAS_thr_Impl_Bridge/hamr_SW_UxAS_thr_Impl_Bridge_Api.c
        library/hamr/SW/UxAS_thr_Impl_Bridge/type-hamr_SW_UxAS_thr_Impl_Bridge_EntryPoints.h
        library/hamr/SW/UxAS_thr_Impl_Bridge/hamr_SW_UxAS_thr_Impl_Bridge_EntryPoints.h
        library/hamr/SW/UxAS_thr_Impl_Bridge/hamr_SW_UxAS_thr_Impl_Bridge_EntryPoints.c
        library/hamr/SW/type-hamr_SW_UxAS_thr_Impl_Impl.h
        library/hamr/SW/hamr_SW_UxAS_thr_Impl_Impl.h
        library/hamr/SW/hamr_SW_UxAS_thr_Impl_Impl.c
        library/hamr/SW/type-hamr_SW_WaypointPlanManagerService_thr_Impl_Bridge.h
        library/hamr/SW/hamr_SW_WaypointPlanManagerService_thr_Impl_Bridge.h
        library/hamr/SW/hamr_SW_WaypointPlanManagerService_thr_Impl_Bridge.c
        library/hamr/SW/WaypointPlanManagerService_thr_Impl_Bridge/type-hamr_SW_WaypointPlanManagerService_thr_Impl_Bridge_Api.h
        library/hamr/SW/WaypointPlanManagerService_thr_Impl_Bridge/hamr_SW_WaypointPlanManagerService_thr_Impl_Bridge_Api.h
        library/hamr/SW/WaypointPlanManagerService_thr_Impl_Bridge/hamr_SW_WaypointPlanManagerService_thr_Impl_Bridge_Api.c
        library/hamr/SW/WaypointPlanManagerService_thr_Impl_Bridge/type-hamr_SW_WaypointPlanManagerService_thr_Impl_Bridge_EntryPoints.h
        library/hamr/SW/WaypointPlanManagerService_thr_Impl_Bridge/hamr_SW_WaypointPlanManagerService_thr_Impl_Bridge_EntryPoints.h
        library/hamr/SW/WaypointPlanManagerService_thr_Impl_Bridge/hamr_SW_WaypointPlanManagerService_thr_Impl_Bridge_EntryPoints.c
        library/hamr/SW/type-hamr_SW_WaypointPlanManagerService_thr_Impl_Impl.h
        library/hamr/SW/hamr_SW_WaypointPlanManagerService_thr_Impl_Impl.h
        library/hamr/SW/hamr_SW_WaypointPlanManagerService_thr_Impl_Impl.c
        library/hamr/type-hamr_SW_Impl_Instance_AM_CASE_AttestationManager_App.h
        library/hamr/hamr_SW_Impl_Instance_AM_CASE_AttestationManager_App.h
        library/hamr/hamr_SW_Impl_Instance_AM_CASE_AttestationManager_App.c
        library/hamr/type-hamr_SW_Impl_Instance_AM_Gate_CASE_AttestationGate_App.h
        library/hamr/hamr_SW_Impl_Instance_AM_Gate_CASE_AttestationGate_App.h
        library/hamr/hamr_SW_Impl_Instance_AM_Gate_CASE_AttestationGate_App.c
        library/hamr/type-hamr_SW_Impl_Instance_FC_UART_UARTDriver_App.h
        library/hamr/hamr_SW_Impl_Instance_FC_UART_UARTDriver_App.h
        library/hamr/hamr_SW_Impl_Instance_FC_UART_UARTDriver_App.c
        library/hamr/type-hamr_SW_Impl_Instance_FLT_AReq_CASE_Filter_AReq_App.h
        library/hamr/hamr_SW_Impl_Instance_FLT_AReq_CASE_Filter_AReq_App.h
        library/hamr/hamr_SW_Impl_Instance_FLT_AReq_CASE_Filter_AReq_App.c
        library/hamr/type-hamr_SW_Impl_Instance_FLT_ARes_CASE_Filter_ARes_App.h
        library/hamr/hamr_SW_Impl_Instance_FLT_ARes_CASE_Filter_ARes_App.h
        library/hamr/hamr_SW_Impl_Instance_FLT_ARes_CASE_Filter_ARes_App.c
        library/hamr/type-hamr_SW_Impl_Instance_FLT_LST_CASE_Filter_LST_App.h
        library/hamr/hamr_SW_Impl_Instance_FLT_LST_CASE_Filter_LST_App.h
        library/hamr/hamr_SW_Impl_Instance_FLT_LST_CASE_Filter_LST_App.c
        library/hamr/type-hamr_SW_Impl_Instance_FLT_OR_CASE_Filter_OR_App.h
        library/hamr/hamr_SW_Impl_Instance_FLT_OR_CASE_Filter_OR_App.h
        library/hamr/hamr_SW_Impl_Instance_FLT_OR_CASE_Filter_OR_App.c
        library/hamr/type-hamr_SW_Impl_Instance_FlyZones_FlyZonesDatabase_App.h
        library/hamr/hamr_SW_Impl_Instance_FlyZones_FlyZonesDatabase_App.h
        library/hamr/hamr_SW_Impl_Instance_FlyZones_FlyZonesDatabase_App.c
        library/hamr/type-hamr_SW_Impl_Instance_MON_GEO_CASE_Monitor_Geo_App.h
        library/hamr/hamr_SW_Impl_Instance_MON_GEO_CASE_Monitor_Geo_App.h
        library/hamr/hamr_SW_Impl_Instance_MON_GEO_CASE_Monitor_Geo_App.c
        library/hamr/type-hamr_SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_App.h
        library/hamr/hamr_SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_App.h
        library/hamr/hamr_SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_App.c
        library/hamr/type-hamr_SW_Impl_Instance_RADIO_RadioDriver_Attestation_App.h
        library/hamr/hamr_SW_Impl_Instance_RADIO_RadioDriver_Attestation_App.h
        library/hamr/hamr_SW_Impl_Instance_RADIO_RadioDriver_Attestation_App.c
        library/hamr/type-hamr_SW_Impl_Instance_UXAS_UxAS_App.h
        library/hamr/hamr_SW_Impl_Instance_UXAS_UxAS_App.h
        library/hamr/hamr_SW_Impl_Instance_UXAS_UxAS_App.c
        library/hamr/type-hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_App.h
        library/hamr/hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_App.h
        library/hamr/hamr_SW_Impl_Instance_WPM_WaypointPlanManagerService_App.c
        library/hamr/type-hamr_SharedMemory.h
        library/hamr/hamr_SharedMemory.h
        library/org/sireum/type-org_sireum_IS_08117A.h
        library/org/sireum/org_sireum_IS_08117A.h
        library/org/sireum/org_sireum_IS_08117A.c
        library/org/sireum/type-org_sireum_IS_820232.h
        library/org/sireum/org_sireum_IS_820232.h
        library/org/sireum/org_sireum_IS_820232.c
        library/org/sireum/type-org_sireum_IS_82ABD8.h
        library/org/sireum/org_sireum_IS_82ABD8.h
        library/org/sireum/org_sireum_IS_82ABD8.c
        library/org/sireum/type-org_sireum_IS_948B60.h
        library/org/sireum/org_sireum_IS_948B60.h
        library/org/sireum/org_sireum_IS_948B60.c
        library/org/sireum/type-org_sireum_IS_AA0F82.h
        library/org/sireum/org_sireum_IS_AA0F82.h
        library/org/sireum/org_sireum_IS_AA0F82.c
        library/org/sireum/type-org_sireum_IS_C4F575.h
        library/org/sireum/org_sireum_IS_C4F575.h
        library/org/sireum/org_sireum_IS_C4F575.c
        library/org/sireum/type-org_sireum_MNone_2A2E1D.h
        library/org/sireum/org_sireum_MNone_2A2E1D.h
        library/org/sireum/org_sireum_MNone_2A2E1D.c
        library/org/sireum/type-org_sireum_MOption_EA1D29.h
        library/org/sireum/org_sireum_MOption_EA1D29.h
        library/org/sireum/org_sireum_MOption_EA1D29.c
        library/org/sireum/type-org_sireum_MS_2590FE.h
        library/org/sireum/org_sireum_MS_2590FE.h
        library/org/sireum/org_sireum_MS_2590FE.c
        library/org/sireum/type-org_sireum_MS_852149.h
        library/org/sireum/org_sireum_MS_852149.h
        library/org/sireum/org_sireum_MS_852149.c
        library/org/sireum/type-org_sireum_MS_94FFA9.h
        library/org/sireum/org_sireum_MS_94FFA9.h
        library/org/sireum/org_sireum_MS_94FFA9.c
        library/org/sireum/type-org_sireum_MS_B5E3E6.h
        library/org/sireum/org_sireum_MS_B5E3E6.h
        library/org/sireum/org_sireum_MS_B5E3E6.c
        library/org/sireum/type-org_sireum_MS_E444B2.h
        library/org/sireum/org_sireum_MS_E444B2.h
        library/org/sireum/org_sireum_MS_E444B2.c
        library/org/sireum/type-org_sireum_MS_F55A18.h
        library/org/sireum/org_sireum_MS_F55A18.h
        library/org/sireum/org_sireum_MS_F55A18.c
        library/org/sireum/type-org_sireum_MSome_D3D128.h
        library/org/sireum/org_sireum_MSome_D3D128.h
        library/org/sireum/org_sireum_MSome_D3D128.c
        library/org/sireum/type-org_sireum_None.h
        library/org/sireum/org_sireum_None.h
        library/org/sireum/org_sireum_None.c
        library/org/sireum/type-org_sireum_None_3026C5.h
        library/org/sireum/org_sireum_None_3026C5.h
        library/org/sireum/org_sireum_None_3026C5.c
        library/org/sireum/type-org_sireum_None_39BC5F.h
        library/org/sireum/org_sireum_None_39BC5F.h
        library/org/sireum/org_sireum_None_39BC5F.c
        library/org/sireum/type-org_sireum_None_5C1355.h
        library/org/sireum/org_sireum_None_5C1355.h
        library/org/sireum/org_sireum_None_5C1355.c
        library/org/sireum/type-org_sireum_None_76463B.h
        library/org/sireum/org_sireum_None_76463B.h
        library/org/sireum/org_sireum_None_76463B.c
        library/org/sireum/type-org_sireum_None_93AA2B.h
        library/org/sireum/org_sireum_None_93AA2B.h
        library/org/sireum/org_sireum_None_93AA2B.c
        library/org/sireum/type-org_sireum_None_964667.h
        library/org/sireum/org_sireum_None_964667.h
        library/org/sireum/org_sireum_None_964667.c
        library/org/sireum/type-org_sireum_None_ED72E1.h
        library/org/sireum/org_sireum_None_ED72E1.h
        library/org/sireum/org_sireum_None_ED72E1.c
        library/org/sireum/type-org_sireum_Nothing.h
        library/org/sireum/org_sireum_Nothing.h
        library/org/sireum/org_sireum_Nothing.c
        library/org/sireum/type-org_sireum_Option_02FA6D.h
        library/org/sireum/org_sireum_Option_02FA6D.h
        library/org/sireum/org_sireum_Option_02FA6D.c
        library/org/sireum/type-org_sireum_Option_30119F.h
        library/org/sireum/org_sireum_Option_30119F.h
        library/org/sireum/org_sireum_Option_30119F.c
        library/org/sireum/type-org_sireum_Option_6239DB.h
        library/org/sireum/org_sireum_Option_6239DB.h
        library/org/sireum/org_sireum_Option_6239DB.c
        library/org/sireum/type-org_sireum_Option_882048.h
        library/org/sireum/org_sireum_Option_882048.h
        library/org/sireum/org_sireum_Option_882048.c
        library/org/sireum/type-org_sireum_Option_8E9F45.h
        library/org/sireum/org_sireum_Option_8E9F45.h
        library/org/sireum/org_sireum_Option_8E9F45.c
        library/org/sireum/type-org_sireum_Option_9AF35E.h
        library/org/sireum/org_sireum_Option_9AF35E.h
        library/org/sireum/org_sireum_Option_9AF35E.c
        library/org/sireum/type-org_sireum_Option_C622DB.h
        library/org/sireum/org_sireum_Option_C622DB.h
        library/org/sireum/org_sireum_Option_C622DB.c
        library/org/sireum/type-org_sireum_Some.h
        library/org/sireum/org_sireum_Some.h
        library/org/sireum/org_sireum_Some.c
        library/org/sireum/type-org_sireum_Some_3E197E.h
        library/org/sireum/org_sireum_Some_3E197E.h
        library/org/sireum/org_sireum_Some_3E197E.c
        library/org/sireum/type-org_sireum_Some_4782C6.h
        library/org/sireum/org_sireum_Some_4782C6.h
        library/org/sireum/org_sireum_Some_4782C6.c
        library/org/sireum/type-org_sireum_Some_488F47.h
        library/org/sireum/org_sireum_Some_488F47.h
        library/org/sireum/org_sireum_Some_488F47.c
        library/org/sireum/type-org_sireum_Some_8D03B1.h
        library/org/sireum/org_sireum_Some_8D03B1.h
        library/org/sireum/org_sireum_Some_8D03B1.c
        library/org/sireum/type-org_sireum_Some_D29615.h
        library/org/sireum/org_sireum_Some_D29615.h
        library/org/sireum/org_sireum_Some_D29615.c
        library/org/sireum/type-org_sireum_Some_E9D1E5.h
        library/org/sireum/org_sireum_Some_E9D1E5.h
        library/org/sireum/org_sireum_Some_E9D1E5.c
        library/org/sireum/type-org_sireum_Tuple2_D0E3BB.h
        library/org/sireum/org_sireum_Tuple2_D0E3BB.h
        library/org/sireum/org_sireum_Tuple2_D0E3BB.c
        library/org/sireum/type-org_sireum_Tuple2_EC3B57.h
        library/org/sireum/org_sireum_Tuple2_EC3B57.h
        library/org/sireum/org_sireum_Tuple2_EC3B57.c
        library/org/sireum/type-org_sireum_U8.h
        library/org/sireum/org_sireum_U8.h
        library/org/sireum/org_sireum_U8.c
        ext/ext.c
        ext/ext.h
        ext/UARTDriver_Impl_Impl_api.h
        ext/UARTDriver_Impl_Impl_api.c
        ext/UARTDriver_Impl_Impl.c
        ext/RadioDriver_Attestation_thr_Impl_Impl_api.h
        ext/RadioDriver_Attestation_thr_Impl_Impl_api.c
        ext/RadioDriver_Attestation_thr_Impl_Impl.c
        ext/FlyZonesDatabase_thr_Impl_Impl_api.h
        ext/FlyZonesDatabase_thr_Impl_Impl_api.c
        ext/FlyZonesDatabase_thr_Impl_Impl.c
        ext/UxAS_thr_Impl_Impl_api.h
        ext/UxAS_thr_Impl_Impl_api.c
        ext/UxAS_thr_Impl_Impl.c
        ext/WaypointPlanManagerService_thr_Impl_Impl_api.h
        ext/WaypointPlanManagerService_thr_Impl_Impl_api.c
        ext/WaypointPlanManagerService_thr_Impl_Impl.c
        ext/CASE_AttestationManager_thr_Impl_Impl_api.h
        ext/CASE_AttestationManager_thr_Impl_Impl_api.c
        ext/CASE_AttestationManager_thr_Impl_Impl.c
        ext/CASE_AttestationGate_thr_Impl_Impl_api.h
        ext/CASE_AttestationGate_thr_Impl_Impl_api.c
        ext/CASE_AttestationGate_thr_Impl_Impl.c
        ext/CASE_Filter_AReq_thr_Impl_Impl_api.h
        ext/CASE_Filter_AReq_thr_Impl_Impl_api.c
        ext/CASE_Filter_AReq_thr_Impl_Impl.c
        ext/CASE_Filter_OR_thr_Impl_Impl_api.h
        ext/CASE_Filter_OR_thr_Impl_Impl_api.c
        ext/CASE_Filter_OR_thr_Impl_Impl.c
        ext/CASE_Filter_LST_thr_Impl_Impl_api.h
        ext/CASE_Filter_LST_thr_Impl_Impl_api.c
        ext/CASE_Filter_LST_thr_Impl_Impl.c
        ext/CASE_Monitor_Req_thr_Impl_Impl_api.h
        ext/CASE_Monitor_Req_thr_Impl_Impl_api.c
        ext/CASE_Monitor_Req_thr_Impl_Impl.c
        ext/CASE_Filter_ARes_thr_Impl_Impl_api.h
        ext/CASE_Filter_ARes_thr_Impl_Impl_api.c
        ext/CASE_Filter_ARes_thr_Impl_Impl.c
        ext/CASE_Monitor_Geo_thr_Impl_Impl_api.h
        ext/CASE_Monitor_Geo_thr_Impl_Impl_api.c
        ext/CASE_Monitor_Geo_thr_Impl_Impl.c
        ext/ipc.c)

target_include_directories(main
        PUBLIC PUBLIC app-SW_Impl_Instance_FC_UART_UARTDriver_App
        PUBLIC PUBLIC app-SW_Impl_Instance_RADIO_RadioDriver_Attestation_App
        PUBLIC PUBLIC app-SW_Impl_Instance_FlyZones_FlyZonesDatabase_App
        PUBLIC PUBLIC app-SW_Impl_Instance_UXAS_UxAS_App
        PUBLIC PUBLIC app-SW_Impl_Instance_WPM_WaypointPlanManagerService_App
        PUBLIC PUBLIC app-SW_Impl_Instance_AM_CASE_AttestationManager_App
        PUBLIC PUBLIC app-SW_Impl_Instance_AM_Gate_CASE_AttestationGate_App
        PUBLIC PUBLIC app-SW_Impl_Instance_FLT_AReq_CASE_Filter_AReq_App
        PUBLIC PUBLIC app-SW_Impl_Instance_FLT_OR_CASE_Filter_OR_App
        PUBLIC PUBLIC app-SW_Impl_Instance_FLT_LST_CASE_Filter_LST_App
        PUBLIC PUBLIC app-SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_App
        PUBLIC PUBLIC app-SW_Impl_Instance_FLT_ARes_CASE_Filter_ARes_App
        PUBLIC PUBLIC app-SW_Impl_Instance_MON_GEO_CASE_Monitor_Geo_App
        PUBLIC PUBLIC app-Main
        PUBLIC PUBLIC runtime
        PUBLIC PUBLIC library/art
        PUBLIC PUBLIC library/art/Bridge
        PUBLIC PUBLIC library/art/DispatchPropertyProtocol
        PUBLIC PUBLIC library/art/PortMode
        PUBLIC PUBLIC library/hamr
        PUBLIC PUBLIC library/hamr/Base_Types
        PUBLIC PUBLIC library/hamr/Drivers
        PUBLIC PUBLIC library/hamr/Drivers/UARTDriver_Impl_Bridge
        PUBLIC PUBLIC library/hamr/SW
        PUBLIC PUBLIC library/hamr/SW/CASE_AttestationGate_thr_Impl_Bridge
        PUBLIC PUBLIC library/hamr/SW/CASE_AttestationManager_thr_Impl_Bridge
        PUBLIC PUBLIC library/hamr/SW/CASE_Filter_AReq_thr_Impl_Bridge
        PUBLIC PUBLIC library/hamr/SW/CASE_Filter_ARes_thr_Impl_Bridge
        PUBLIC PUBLIC library/hamr/SW/CASE_Filter_LST_thr_Impl_Bridge
        PUBLIC PUBLIC library/hamr/SW/CASE_Filter_OR_thr_Impl_Bridge
        PUBLIC PUBLIC library/hamr/SW/CASE_Monitor_Geo_thr_Impl_Bridge
        PUBLIC PUBLIC library/hamr/SW/CASE_Monitor_Req_thr_Impl_Bridge
        PUBLIC PUBLIC library/hamr/SW/FlyZonesDatabase_thr_Impl_Bridge
        PUBLIC PUBLIC library/hamr/SW/RadioDriver_Attestation_thr_Impl_Bridge
        PUBLIC PUBLIC library/hamr/SW/UxAS_thr_Impl_Bridge
        PUBLIC PUBLIC library/hamr/SW/WaypointPlanManagerService_thr_Impl_Bridge
        PUBLIC PUBLIC library/org/sireum
        PUBLIC PUBLIC ext)


add_executable(SW_Impl_Instance_FC_UART_UARTDriver_App-bin app-SW_Impl_Instance_FC_UART_UARTDriver_App/SW_Impl_Instance_FC_UART_UARTDriver_App.c)

target_link_libraries(SW_Impl_Instance_FC_UART_UARTDriver_App-bin LINK_PUBLIC main m)

set_target_properties(SW_Impl_Instance_FC_UART_UARTDriver_App-bin PROPERTIES OUTPUT_NAME SW_Impl_Instance_FC_UART_UARTDriver_App)


add_executable(SW_Impl_Instance_RADIO_RadioDriver_Attestation_App-bin app-SW_Impl_Instance_RADIO_RadioDriver_Attestation_App/SW_Impl_Instance_RADIO_RadioDriver_Attestation_App.c)

target_link_libraries(SW_Impl_Instance_RADIO_RadioDriver_Attestation_App-bin LINK_PUBLIC main m)

set_target_properties(SW_Impl_Instance_RADIO_RadioDriver_Attestation_App-bin PROPERTIES OUTPUT_NAME SW_Impl_Instance_RADIO_RadioDriver_Attestation_App)


add_executable(SW_Impl_Instance_FlyZones_FlyZonesDatabase_App-bin app-SW_Impl_Instance_FlyZones_FlyZonesDatabase_App/SW_Impl_Instance_FlyZones_FlyZonesDatabase_App.c)

target_link_libraries(SW_Impl_Instance_FlyZones_FlyZonesDatabase_App-bin LINK_PUBLIC main m)

set_target_properties(SW_Impl_Instance_FlyZones_FlyZonesDatabase_App-bin PROPERTIES OUTPUT_NAME SW_Impl_Instance_FlyZones_FlyZonesDatabase_App)


add_executable(SW_Impl_Instance_UXAS_UxAS_App-bin app-SW_Impl_Instance_UXAS_UxAS_App/SW_Impl_Instance_UXAS_UxAS_App.c)

target_link_libraries(SW_Impl_Instance_UXAS_UxAS_App-bin LINK_PUBLIC main m)

set_target_properties(SW_Impl_Instance_UXAS_UxAS_App-bin PROPERTIES OUTPUT_NAME SW_Impl_Instance_UXAS_UxAS_App)


add_executable(SW_Impl_Instance_WPM_WaypointPlanManagerService_App-bin app-SW_Impl_Instance_WPM_WaypointPlanManagerService_App/SW_Impl_Instance_WPM_WaypointPlanManagerService_App.c)

target_link_libraries(SW_Impl_Instance_WPM_WaypointPlanManagerService_App-bin LINK_PUBLIC main m)

set_target_properties(SW_Impl_Instance_WPM_WaypointPlanManagerService_App-bin PROPERTIES OUTPUT_NAME SW_Impl_Instance_WPM_WaypointPlanManagerService_App)


add_executable(SW_Impl_Instance_AM_CASE_AttestationManager_App-bin app-SW_Impl_Instance_AM_CASE_AttestationManager_App/SW_Impl_Instance_AM_CASE_AttestationManager_App.c)

target_link_libraries(SW_Impl_Instance_AM_CASE_AttestationManager_App-bin LINK_PUBLIC main m)

set_target_properties(SW_Impl_Instance_AM_CASE_AttestationManager_App-bin PROPERTIES OUTPUT_NAME SW_Impl_Instance_AM_CASE_AttestationManager_App)


add_executable(SW_Impl_Instance_AM_Gate_CASE_AttestationGate_App-bin app-SW_Impl_Instance_AM_Gate_CASE_AttestationGate_App/SW_Impl_Instance_AM_Gate_CASE_AttestationGate_App.c)

target_link_libraries(SW_Impl_Instance_AM_Gate_CASE_AttestationGate_App-bin LINK_PUBLIC main m)

set_target_properties(SW_Impl_Instance_AM_Gate_CASE_AttestationGate_App-bin PROPERTIES OUTPUT_NAME SW_Impl_Instance_AM_Gate_CASE_AttestationGate_App)


add_executable(SW_Impl_Instance_FLT_AReq_CASE_Filter_AReq_App-bin app-SW_Impl_Instance_FLT_AReq_CASE_Filter_AReq_App/SW_Impl_Instance_FLT_AReq_CASE_Filter_AReq_App.c)

target_link_libraries(SW_Impl_Instance_FLT_AReq_CASE_Filter_AReq_App-bin LINK_PUBLIC main m)

set_target_properties(SW_Impl_Instance_FLT_AReq_CASE_Filter_AReq_App-bin PROPERTIES OUTPUT_NAME SW_Impl_Instance_FLT_AReq_CASE_Filter_AReq_App)


add_executable(SW_Impl_Instance_FLT_OR_CASE_Filter_OR_App-bin app-SW_Impl_Instance_FLT_OR_CASE_Filter_OR_App/SW_Impl_Instance_FLT_OR_CASE_Filter_OR_App.c)

target_link_libraries(SW_Impl_Instance_FLT_OR_CASE_Filter_OR_App-bin LINK_PUBLIC main m)

set_target_properties(SW_Impl_Instance_FLT_OR_CASE_Filter_OR_App-bin PROPERTIES OUTPUT_NAME SW_Impl_Instance_FLT_OR_CASE_Filter_OR_App)


add_executable(SW_Impl_Instance_FLT_LST_CASE_Filter_LST_App-bin app-SW_Impl_Instance_FLT_LST_CASE_Filter_LST_App/SW_Impl_Instance_FLT_LST_CASE_Filter_LST_App.c)

target_link_libraries(SW_Impl_Instance_FLT_LST_CASE_Filter_LST_App-bin LINK_PUBLIC main m)

set_target_properties(SW_Impl_Instance_FLT_LST_CASE_Filter_LST_App-bin PROPERTIES OUTPUT_NAME SW_Impl_Instance_FLT_LST_CASE_Filter_LST_App)


add_executable(SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_App-bin app-SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_App/SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_App.c)

target_link_libraries(SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_App-bin LINK_PUBLIC main m)

set_target_properties(SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_App-bin PROPERTIES OUTPUT_NAME SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_App)


add_executable(SW_Impl_Instance_FLT_ARes_CASE_Filter_ARes_App-bin app-SW_Impl_Instance_FLT_ARes_CASE_Filter_ARes_App/SW_Impl_Instance_FLT_ARes_CASE_Filter_ARes_App.c)

target_link_libraries(SW_Impl_Instance_FLT_ARes_CASE_Filter_ARes_App-bin LINK_PUBLIC main m)

set_target_properties(SW_Impl_Instance_FLT_ARes_CASE_Filter_ARes_App-bin PROPERTIES OUTPUT_NAME SW_Impl_Instance_FLT_ARes_CASE_Filter_ARes_App)


add_executable(SW_Impl_Instance_MON_GEO_CASE_Monitor_Geo_App-bin app-SW_Impl_Instance_MON_GEO_CASE_Monitor_Geo_App/SW_Impl_Instance_MON_GEO_CASE_Monitor_Geo_App.c)

target_link_libraries(SW_Impl_Instance_MON_GEO_CASE_Monitor_Geo_App-bin LINK_PUBLIC main m)

set_target_properties(SW_Impl_Instance_MON_GEO_CASE_Monitor_Geo_App-bin PROPERTIES OUTPUT_NAME SW_Impl_Instance_MON_GEO_CASE_Monitor_Geo_App)


add_executable(Main-bin app-Main/Main.c)

target_link_libraries(Main-bin LINK_PUBLIC main m)

set_target_properties(Main-bin PROPERTIES OUTPUT_NAME Main)


function(to_hex DEC HEX)
  while(DEC GREATER 0)
    math(EXPR _val "${DEC} % 16")
    math(EXPR DEC "${DEC} / 16")
    if(_val EQUAL 10)
      set(_val "A")
    elseif(_val EQUAL 11)
      set(_val "B")
    elseif(_val EQUAL 12)
      set(_val "C")
    elseif(_val EQUAL 13)
      set(_val "D")
    elseif(_val EQUAL 14)
      set(_val "E")
    elseif(_val EQUAL 15)
      set(_val "F")
    endif()
    set(_res "${_val}${_res}")
  endwhile()
  set(${HEX} "0x${_res}" PARENT_SCOPE)
endfunction()

to_hex("16*1024*1024" stack_size)
if ("${CMAKE_CXX_COMPILER_ID}" MATCHES "(C|c?)lang")
  set(CMAKE_EXE_LINKER_FLAGS "-Wl,-stack_size -Wl,${stack_size}")
elseif ("${CMAKE_CXX_COMPILER_ID}" STREQUAL "GNU")
  if (WIN32 OR MINGW OR MSYS OR CYGWIN)
    set(CMAKE_EXE_LINKER_FLAGS "-Wl,--stack,${stack_size}")
  endif()
endif()