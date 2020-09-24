#ifndef SIREUM_GEN_TYPE_H
#define SIREUM_GEN_TYPE_H

#include <memory.h>
#include <stackframe.h>

typedef enum {
  TTuple2_EC3B57 = 0xEC3B577E, // (Z, Z)
  TTuple2_D0E3BB = 0xD0E3BBDB, // (Z, art.DataContent)
  TIS_AA0F82 = 0xAA0F8237, // IS[Z, (Z, Z)]
  TIS_C4F575 = 0xC4F575CD, // IS[Z, B]
  TIS_948B60 = 0x948B6070, // IS[Z, String]
  TIS_82ABD8 = 0x82ABD805, // IS[Z, Z]
  TIS_08117A = 0x08117AAE, // IS[Z, art.UConnection]
  TIS_820232 = 0x82023297, // IS[Z, art.UPort]
  TMNone_2A2E1D = 0x2A2E1D40, // MNone[art.Bridge]
  TMS_B5E3E6 = 0xB5E3E695, // MS[Z, IS[Z, (Z, Z)]]
  TMS_E444B2 = 0xE444B286, // MS[Z, IS[Z, Z]]
  TMS_94FFA9 = 0x94FFA926, // MS[Z, MOption[art.Bridge]]
  TMS_2590FE = 0x2590FEE8, // MS[Z, Option[art.DataContent]]
  TMS_F55A18 = 0xF55A1861, // MS[Z, Option[art.UPort]]
  TMS_852149 = 0x85214977, // MS[Z, art.Bridge]
  TMSome_D3D128 = 0xD3D1282F, // MSome[art.Bridge]
  TNone_93AA2B = 0x93AA2B92, // None[(Z, art.DataContent)]
  TNone_3026C5 = 0x3026C5D4, // None[IS[Z, B]]
  TNone_5C1355 = 0x5C135592, // None[IS[Z, Z]]
  TNone_76463B = 0x76463B20, // None[Z]
  TNone_964667 = 0x9646678F, // None[art.DataContent]
  TNone_ED72E1 = 0xED72E191, // None[art.Empty]
  TNone_39BC5F = 0x39BC5F5F, // None[art.UPort]
  TSome_E9D1E5 = 0xE9D1E505, // Some[(Z, art.DataContent)]
  TSome_8D03B1 = 0x8D03B113, // Some[IS[Z, B]]
  TSome_488F47 = 0x488F47F1, // Some[Z]
  TSome_D29615 = 0xD29615C0, // Some[art.DataContent]
  TSome_4782C6 = 0x4782C6E2, // Some[art.Empty]
  TSome_3E197E = 0x3E197EB8, // Some[art.UPort]
  TString = 0xB6F8E8F6, // String
  Tart_ArchitectureDescription = 0xAD6322F1, // art.ArchitectureDescription
  Tart_Bridge_Ports = 0x14139493, // art.Bridge.Ports
  Tart_Connection = 0x17385940, // art.Connection
  Tart_DispatchPropertyProtocol_Periodic = 0x4C652984, // art.DispatchPropertyProtocol.Periodic
  Tart_DispatchPropertyProtocol_Sporadic = 0x48F30CFF, // art.DispatchPropertyProtocol.Sporadic
  Tart_Empty = 0x49C5E24D, // art.Empty
  Tart_Port_45E54D = 0x45E54D5D, // art.Port[IS[Z, B]]
  Tart_Port_9CBF18 = 0x9CBF18B7, // art.Port[art.Empty]
  Thamr_Base_Types_Bits_Payload = 0x80921565, // hamr.Base_Types.Bits_Payload
  Thamr_Drivers_UARTDriver_Impl_Bridge = 0xE30A2ABD, // hamr.Drivers.UARTDriver_Impl_Bridge
  Thamr_Drivers_UARTDriver_Impl_Bridge_Api = 0x179CE5E1, // hamr.Drivers.UARTDriver_Impl_Bridge.Api
  Thamr_Drivers_UARTDriver_Impl_Bridge_EntryPoints = 0x69F64F80, // hamr.Drivers.UARTDriver_Impl_Bridge.EntryPoints
  Thamr_Drivers_UARTDriver_Impl_Impl = 0x869B1DA1, // hamr.Drivers.UARTDriver_Impl_Impl
  Thamr_SW_CASE_AttestationGate_thr_Impl_Bridge = 0xDAF3B53A, // hamr.SW.CASE_AttestationGate_thr_Impl_Bridge
  Thamr_SW_CASE_AttestationGate_thr_Impl_Bridge_Api = 0xD0DFF4EB, // hamr.SW.CASE_AttestationGate_thr_Impl_Bridge.Api
  Thamr_SW_CASE_AttestationGate_thr_Impl_Bridge_EntryPoints = 0xEE520ABB, // hamr.SW.CASE_AttestationGate_thr_Impl_Bridge.EntryPoints
  Thamr_SW_CASE_AttestationGate_thr_Impl_Impl = 0xDAB63F00, // hamr.SW.CASE_AttestationGate_thr_Impl_Impl
  Thamr_SW_CASE_AttestationManager_thr_Impl_Bridge = 0x3ABD9D84, // hamr.SW.CASE_AttestationManager_thr_Impl_Bridge
  Thamr_SW_CASE_AttestationManager_thr_Impl_Bridge_Api = 0xA29642FE, // hamr.SW.CASE_AttestationManager_thr_Impl_Bridge.Api
  Thamr_SW_CASE_AttestationManager_thr_Impl_Bridge_EntryPoints = 0xEBBE799F, // hamr.SW.CASE_AttestationManager_thr_Impl_Bridge.EntryPoints
  Thamr_SW_CASE_AttestationManager_thr_Impl_Impl = 0x22F5D8AC, // hamr.SW.CASE_AttestationManager_thr_Impl_Impl
  Thamr_SW_CASE_Filter_AReq_thr_Impl_Bridge = 0x0E500873, // hamr.SW.CASE_Filter_AReq_thr_Impl_Bridge
  Thamr_SW_CASE_Filter_AReq_thr_Impl_Bridge_Api = 0x1BAD21CD, // hamr.SW.CASE_Filter_AReq_thr_Impl_Bridge.Api
  Thamr_SW_CASE_Filter_AReq_thr_Impl_Bridge_EntryPoints = 0x5CB69C52, // hamr.SW.CASE_Filter_AReq_thr_Impl_Bridge.EntryPoints
  Thamr_SW_CASE_Filter_AReq_thr_Impl_Impl = 0x0381BCF6, // hamr.SW.CASE_Filter_AReq_thr_Impl_Impl
  Thamr_SW_CASE_Filter_ARes_thr_Impl_Bridge = 0x38BA84EC, // hamr.SW.CASE_Filter_ARes_thr_Impl_Bridge
  Thamr_SW_CASE_Filter_ARes_thr_Impl_Bridge_Api = 0xAE030C34, // hamr.SW.CASE_Filter_ARes_thr_Impl_Bridge.Api
  Thamr_SW_CASE_Filter_ARes_thr_Impl_Bridge_EntryPoints = 0x355B7957, // hamr.SW.CASE_Filter_ARes_thr_Impl_Bridge.EntryPoints
  Thamr_SW_CASE_Filter_ARes_thr_Impl_Impl = 0xAC322095, // hamr.SW.CASE_Filter_ARes_thr_Impl_Impl
  Thamr_SW_CASE_Filter_LST_thr_Impl_Bridge = 0xC340D9D8, // hamr.SW.CASE_Filter_LST_thr_Impl_Bridge
  Thamr_SW_CASE_Filter_LST_thr_Impl_Bridge_Api = 0x954438F9, // hamr.SW.CASE_Filter_LST_thr_Impl_Bridge.Api
  Thamr_SW_CASE_Filter_LST_thr_Impl_Bridge_EntryPoints = 0x514DFFB8, // hamr.SW.CASE_Filter_LST_thr_Impl_Bridge.EntryPoints
  Thamr_SW_CASE_Filter_LST_thr_Impl_Impl = 0xCB4FEEDE, // hamr.SW.CASE_Filter_LST_thr_Impl_Impl
  Thamr_SW_CASE_Filter_OR_thr_Impl_Bridge = 0x9DAD8287, // hamr.SW.CASE_Filter_OR_thr_Impl_Bridge
  Thamr_SW_CASE_Filter_OR_thr_Impl_Bridge_Api = 0xEB2F0077, // hamr.SW.CASE_Filter_OR_thr_Impl_Bridge.Api
  Thamr_SW_CASE_Filter_OR_thr_Impl_Bridge_EntryPoints = 0xFD930AD7, // hamr.SW.CASE_Filter_OR_thr_Impl_Bridge.EntryPoints
  Thamr_SW_CASE_Filter_OR_thr_Impl_Impl = 0xBFE1E33C, // hamr.SW.CASE_Filter_OR_thr_Impl_Impl
  Thamr_SW_CASE_Monitor_Geo_thr_Impl_Bridge = 0x2E05ED72, // hamr.SW.CASE_Monitor_Geo_thr_Impl_Bridge
  Thamr_SW_CASE_Monitor_Geo_thr_Impl_Bridge_Api = 0xCCBE2383, // hamr.SW.CASE_Monitor_Geo_thr_Impl_Bridge.Api
  Thamr_SW_CASE_Monitor_Geo_thr_Impl_Bridge_EntryPoints = 0x630C0F8E, // hamr.SW.CASE_Monitor_Geo_thr_Impl_Bridge.EntryPoints
  Thamr_SW_CASE_Monitor_Geo_thr_Impl_Impl = 0x39A94A62, // hamr.SW.CASE_Monitor_Geo_thr_Impl_Impl
  Thamr_SW_CASE_Monitor_Req_thr_Impl_Bridge = 0x746D5928, // hamr.SW.CASE_Monitor_Req_thr_Impl_Bridge
  Thamr_SW_CASE_Monitor_Req_thr_Impl_Bridge_Api = 0x0AFB01C2, // hamr.SW.CASE_Monitor_Req_thr_Impl_Bridge.Api
  Thamr_SW_CASE_Monitor_Req_thr_Impl_Bridge_EntryPoints = 0xB3475D24, // hamr.SW.CASE_Monitor_Req_thr_Impl_Bridge.EntryPoints
  Thamr_SW_CASE_Monitor_Req_thr_Impl_Impl = 0x529A66CA, // hamr.SW.CASE_Monitor_Req_thr_Impl_Impl
  Thamr_SW_FlyZonesDatabase_thr_Impl_Bridge = 0xF33DEF60, // hamr.SW.FlyZonesDatabase_thr_Impl_Bridge
  Thamr_SW_FlyZonesDatabase_thr_Impl_Bridge_Api = 0xF8A56E47, // hamr.SW.FlyZonesDatabase_thr_Impl_Bridge.Api
  Thamr_SW_FlyZonesDatabase_thr_Impl_Bridge_EntryPoints = 0x57B455D6, // hamr.SW.FlyZonesDatabase_thr_Impl_Bridge.EntryPoints
  Thamr_SW_FlyZonesDatabase_thr_Impl_Impl = 0x131F76B3, // hamr.SW.FlyZonesDatabase_thr_Impl_Impl
  Thamr_SW_RadioDriver_Attestation_thr_Impl_Bridge = 0x7DBA530B, // hamr.SW.RadioDriver_Attestation_thr_Impl_Bridge
  Thamr_SW_RadioDriver_Attestation_thr_Impl_Bridge_Api = 0xA5BC7E3C, // hamr.SW.RadioDriver_Attestation_thr_Impl_Bridge.Api
  Thamr_SW_RadioDriver_Attestation_thr_Impl_Bridge_EntryPoints = 0x3ED7B1A5, // hamr.SW.RadioDriver_Attestation_thr_Impl_Bridge.EntryPoints
  Thamr_SW_RadioDriver_Attestation_thr_Impl_Impl = 0x2E29E3C5, // hamr.SW.RadioDriver_Attestation_thr_Impl_Impl
  Thamr_SW_UxAS_thr_Impl_Bridge = 0x86FE67D6, // hamr.SW.UxAS_thr_Impl_Bridge
  Thamr_SW_UxAS_thr_Impl_Bridge_Api = 0x1D5A82F3, // hamr.SW.UxAS_thr_Impl_Bridge.Api
  Thamr_SW_UxAS_thr_Impl_Bridge_EntryPoints = 0x440DD63B, // hamr.SW.UxAS_thr_Impl_Bridge.EntryPoints
  Thamr_SW_UxAS_thr_Impl_Impl = 0x1417A4C8, // hamr.SW.UxAS_thr_Impl_Impl
  Thamr_SW_WaypointPlanManagerService_thr_Impl_Bridge = 0xE1B418AF, // hamr.SW.WaypointPlanManagerService_thr_Impl_Bridge
  Thamr_SW_WaypointPlanManagerService_thr_Impl_Bridge_Api = 0x8F077DFC, // hamr.SW.WaypointPlanManagerService_thr_Impl_Bridge.Api
  Thamr_SW_WaypointPlanManagerService_thr_Impl_Bridge_EntryPoints = 0x14C84DFF, // hamr.SW.WaypointPlanManagerService_thr_Impl_Bridge.EntryPoints
  Thamr_SW_WaypointPlanManagerService_thr_Impl_Impl = 0x05348AB1, // hamr.SW.WaypointPlanManagerService_thr_Impl_Impl
} TYPE;

char *TYPE_string_(void *type);

typedef struct Type *Type;
struct Type {
  TYPE type;
};

#define MaxString 256

typedef struct String *String;
struct String {
  TYPE type;
  Z size;
  C value[];
};

struct StaticString {
  TYPE type;
  Z size;
  C value[MaxString + 1];
};

#define string(v) ((String) &((struct { TYPE type; Z size; C value[sizeof(v)]; }) { TString, Z_C(sizeof (v) - 1), v }))
#define DeclNewString(x) struct StaticString x = { .type = TString }

#endif