/* header auto-generated by pidl */

#include "librpc/ndr/libndr.h"
#include "bin/default/librpc/gen_ndr/wkssvc.h"

#ifndef _HEADER_NDR_wkssvc
#define _HEADER_NDR_wkssvc

#define NDR_WKSSVC_UUID "6bffd098-a112-3610-9833-46c3f87e345a"
#define NDR_WKSSVC_VERSION 1.0
#define NDR_WKSSVC_NAME "wkssvc"
#define NDR_WKSSVC_HELPSTRING "Workstation Service"
extern const struct ndr_interface_table ndr_table_wkssvc;
#define NDR_WKSSVC_NETWKSTAGETINFO (0x00)

#define NDR_WKSSVC_NETWKSTASETINFO (0x01)

#define NDR_WKSSVC_NETWKSTAENUMUSERS (0x02)

#define NDR_WKSSVC_NETRWKSTAUSERGETINFO (0x03)

#define NDR_WKSSVC_NETRWKSTAUSERSETINFO (0x04)

#define NDR_WKSSVC_NETWKSTATRANSPORTENUM (0x05)

#define NDR_WKSSVC_NETRWKSTATRANSPORTADD (0x06)

#define NDR_WKSSVC_NETRWKSTATRANSPORTDEL (0x07)

#define NDR_WKSSVC_NETRUSEADD (0x08)

#define NDR_WKSSVC_NETRUSEGETINFO (0x09)

#define NDR_WKSSVC_NETRUSEDEL (0x0a)

#define NDR_WKSSVC_NETRUSEENUM (0x0b)

#define NDR_WKSSVC_NETRMESSAGEBUFFERSEND (0x0c)

#define NDR_WKSSVC_NETRWORKSTATIONSTATISTICSGET (0x0d)

#define NDR_WKSSVC_NETRLOGONDOMAINNAMEADD (0x0e)

#define NDR_WKSSVC_NETRLOGONDOMAINNAMEDEL (0x0f)

#define NDR_WKSSVC_NETRJOINDOMAIN (0x10)

#define NDR_WKSSVC_NETRUNJOINDOMAIN (0x11)

#define NDR_WKSSVC_NETRRENAMEMACHINEINDOMAIN (0x12)

#define NDR_WKSSVC_NETRVALIDATENAME (0x13)

#define NDR_WKSSVC_NETRGETJOININFORMATION (0x14)

#define NDR_WKSSVC_NETRGETJOINABLEOUS (0x15)

#define NDR_WKSSVC_NETRJOINDOMAIN2 (0x16)

#define NDR_WKSSVC_NETRUNJOINDOMAIN2 (0x17)

#define NDR_WKSSVC_NETRRENAMEMACHINEINDOMAIN2 (0x18)

#define NDR_WKSSVC_NETRVALIDATENAME2 (0x19)

#define NDR_WKSSVC_NETRGETJOINABLEOUS2 (0x1a)

#define NDR_WKSSVC_NETRADDALTERNATECOMPUTERNAME (0x1b)

#define NDR_WKSSVC_NETRREMOVEALTERNATECOMPUTERNAME (0x1c)

#define NDR_WKSSVC_NETRSETPRIMARYCOMPUTERNAME (0x1d)

#define NDR_WKSSVC_NETRENUMERATECOMPUTERNAMES (0x1e)

#define NDR_WKSSVC_CALL_COUNT (31)
void ndr_print_wkssvc_NetWkstaInfo100(struct ndr_print *ndr, const char *name, const struct wkssvc_NetWkstaInfo100 *r);
void ndr_print_wkssvc_NetWkstaInfo101(struct ndr_print *ndr, const char *name, const struct wkssvc_NetWkstaInfo101 *r);
void ndr_print_wkssvc_NetWkstaInfo102(struct ndr_print *ndr, const char *name, const struct wkssvc_NetWkstaInfo102 *r);
void ndr_print_wkssvc_NetWkstaInfo502(struct ndr_print *ndr, const char *name, const struct wkssvc_NetWkstaInfo502 *r);
void ndr_print_wkssvc_NetWkstaInfo1010(struct ndr_print *ndr, const char *name, const struct wkssvc_NetWkstaInfo1010 *r);
void ndr_print_wkssvc_NetWkstaInfo1011(struct ndr_print *ndr, const char *name, const struct wkssvc_NetWkstaInfo1011 *r);
void ndr_print_wkssvc_NetWkstaInfo1012(struct ndr_print *ndr, const char *name, const struct wkssvc_NetWkstaInfo1012 *r);
void ndr_print_wkssvc_NetWkstaInfo1013(struct ndr_print *ndr, const char *name, const struct wkssvc_NetWkstaInfo1013 *r);
void ndr_print_wkssvc_NetWkstaInfo1018(struct ndr_print *ndr, const char *name, const struct wkssvc_NetWkstaInfo1018 *r);
void ndr_print_wkssvc_NetWkstaInfo1023(struct ndr_print *ndr, const char *name, const struct wkssvc_NetWkstaInfo1023 *r);
void ndr_print_wkssvc_NetWkstaInfo1027(struct ndr_print *ndr, const char *name, const struct wkssvc_NetWkstaInfo1027 *r);
void ndr_print_wkssvc_NetWkstaInfo1028(struct ndr_print *ndr, const char *name, const struct wkssvc_NetWkstaInfo1028 *r);
void ndr_print_wkssvc_NetWkstaInfo1032(struct ndr_print *ndr, const char *name, const struct wkssvc_NetWkstaInfo1032 *r);
void ndr_print_wkssvc_NetWkstaInfo1033(struct ndr_print *ndr, const char *name, const struct wkssvc_NetWkstaInfo1033 *r);
void ndr_print_wkssvc_NetWkstaInfo1041(struct ndr_print *ndr, const char *name, const struct wkssvc_NetWkstaInfo1041 *r);
void ndr_print_wkssvc_NetWkstaInfo1042(struct ndr_print *ndr, const char *name, const struct wkssvc_NetWkstaInfo1042 *r);
void ndr_print_wkssvc_NetWkstaInfo1043(struct ndr_print *ndr, const char *name, const struct wkssvc_NetWkstaInfo1043 *r);
void ndr_print_wkssvc_NetWkstaInfo1044(struct ndr_print *ndr, const char *name, const struct wkssvc_NetWkstaInfo1044 *r);
void ndr_print_wkssvc_NetWkstaInfo1045(struct ndr_print *ndr, const char *name, const struct wkssvc_NetWkstaInfo1045 *r);
void ndr_print_wkssvc_NetWkstaInfo1046(struct ndr_print *ndr, const char *name, const struct wkssvc_NetWkstaInfo1046 *r);
void ndr_print_wkssvc_NetWkstaInfo1047(struct ndr_print *ndr, const char *name, const struct wkssvc_NetWkstaInfo1047 *r);
void ndr_print_wkssvc_NetWkstaInfo1048(struct ndr_print *ndr, const char *name, const struct wkssvc_NetWkstaInfo1048 *r);
void ndr_print_wkssvc_NetWkstaInfo1049(struct ndr_print *ndr, const char *name, const struct wkssvc_NetWkstaInfo1049 *r);
void ndr_print_wkssvc_NetWkstaInfo1050(struct ndr_print *ndr, const char *name, const struct wkssvc_NetWkstaInfo1050 *r);
void ndr_print_wkssvc_NetWkstaInfo1051(struct ndr_print *ndr, const char *name, const struct wkssvc_NetWkstaInfo1051 *r);
void ndr_print_wkssvc_NetWkstaInfo1052(struct ndr_print *ndr, const char *name, const struct wkssvc_NetWkstaInfo1052 *r);
void ndr_print_wkssvc_NetWkstaInfo1053(struct ndr_print *ndr, const char *name, const struct wkssvc_NetWkstaInfo1053 *r);
void ndr_print_wkssvc_NetWkstaInfo1054(struct ndr_print *ndr, const char *name, const struct wkssvc_NetWkstaInfo1054 *r);
void ndr_print_wkssvc_NetWkstaInfo1055(struct ndr_print *ndr, const char *name, const struct wkssvc_NetWkstaInfo1055 *r);
void ndr_print_wkssvc_NetWkstaInfo1056(struct ndr_print *ndr, const char *name, const struct wkssvc_NetWkstaInfo1056 *r);
void ndr_print_wkssvc_NetWkstaInfo1057(struct ndr_print *ndr, const char *name, const struct wkssvc_NetWkstaInfo1057 *r);
void ndr_print_wkssvc_NetWkstaInfo1058(struct ndr_print *ndr, const char *name, const struct wkssvc_NetWkstaInfo1058 *r);
void ndr_print_wkssvc_NetWkstaInfo1059(struct ndr_print *ndr, const char *name, const struct wkssvc_NetWkstaInfo1059 *r);
void ndr_print_wkssvc_NetWkstaInfo1060(struct ndr_print *ndr, const char *name, const struct wkssvc_NetWkstaInfo1060 *r);
void ndr_print_wkssvc_NetWkstaInfo1061(struct ndr_print *ndr, const char *name, const struct wkssvc_NetWkstaInfo1061 *r);
void ndr_print_wkssvc_NetWkstaInfo1062(struct ndr_print *ndr, const char *name, const struct wkssvc_NetWkstaInfo1062 *r);
void ndr_print_wkssvc_NetWkstaInfo(struct ndr_print *ndr, const char *name, const union wkssvc_NetWkstaInfo *r);
void ndr_print_wkssvc_NetrWkstaUserInfo0(struct ndr_print *ndr, const char *name, const struct wkssvc_NetrWkstaUserInfo0 *r);
void ndr_print_wkssvc_NetWkstaEnumUsersCtr0(struct ndr_print *ndr, const char *name, const struct wkssvc_NetWkstaEnumUsersCtr0 *r);
void ndr_print_wkssvc_NetrWkstaUserInfo1(struct ndr_print *ndr, const char *name, const struct wkssvc_NetrWkstaUserInfo1 *r);
void ndr_print_wkssvc_NetWkstaEnumUsersCtr1(struct ndr_print *ndr, const char *name, const struct wkssvc_NetWkstaEnumUsersCtr1 *r);
void ndr_print_wkssvc_NetWkstaEnumUsersCtr(struct ndr_print *ndr, const char *name, const union wkssvc_NetWkstaEnumUsersCtr *r);
void ndr_print_wkssvc_NetWkstaEnumUsersInfo(struct ndr_print *ndr, const char *name, const struct wkssvc_NetWkstaEnumUsersInfo *r);
void ndr_print_wkssvc_NetrWkstaUserInfo1101(struct ndr_print *ndr, const char *name, const struct wkssvc_NetrWkstaUserInfo1101 *r);
void ndr_print_wkssvc_NetrWkstaUserInfo(struct ndr_print *ndr, const char *name, const union wkssvc_NetrWkstaUserInfo *r);
void ndr_print_wkssvc_NetWkstaTransportInfo0(struct ndr_print *ndr, const char *name, const struct wkssvc_NetWkstaTransportInfo0 *r);
void ndr_print_wkssvc_NetWkstaTransportCtr0(struct ndr_print *ndr, const char *name, const struct wkssvc_NetWkstaTransportCtr0 *r);
void ndr_print_wkssvc_NetWkstaTransportCtr(struct ndr_print *ndr, const char *name, const union wkssvc_NetWkstaTransportCtr *r);
void ndr_print_wkssvc_NetWkstaTransportInfo(struct ndr_print *ndr, const char *name, const struct wkssvc_NetWkstaTransportInfo *r);
void ndr_print_wkssvc_NetrUseInfo3(struct ndr_print *ndr, const char *name, const struct wkssvc_NetrUseInfo3 *r);
void ndr_print_wkssvc_NetrUseInfo2(struct ndr_print *ndr, const char *name, const struct wkssvc_NetrUseInfo2 *r);
void ndr_print_wkssvc_NetrUseInfo1(struct ndr_print *ndr, const char *name, const struct wkssvc_NetrUseInfo1 *r);
void ndr_print_wkssvc_NetrUseInfo0(struct ndr_print *ndr, const char *name, const struct wkssvc_NetrUseInfo0 *r);
void ndr_print_wkssvc_NetrUseGetInfoCtr(struct ndr_print *ndr, const char *name, const union wkssvc_NetrUseGetInfoCtr *r);
void ndr_print_wkssvc_NetrUseEnumCtr2(struct ndr_print *ndr, const char *name, const struct wkssvc_NetrUseEnumCtr2 *r);
void ndr_print_wkssvc_NetrUseEnumCtr1(struct ndr_print *ndr, const char *name, const struct wkssvc_NetrUseEnumCtr1 *r);
void ndr_print_wkssvc_NetrUseEnumCtr0(struct ndr_print *ndr, const char *name, const struct wkssvc_NetrUseEnumCtr0 *r);
void ndr_print_wkssvc_NetrUseEnumCtr(struct ndr_print *ndr, const char *name, const union wkssvc_NetrUseEnumCtr *r);
void ndr_print_wkssvc_NetrUseEnumInfo(struct ndr_print *ndr, const char *name, const struct wkssvc_NetrUseEnumInfo *r);
void ndr_print_wkssvc_NetrWorkstationStatistics(struct ndr_print *ndr, const char *name, const struct wkssvc_NetrWorkstationStatistics *r);
void ndr_print_wkssvc_renameflags(struct ndr_print *ndr, const char *name, uint32_t r);
void ndr_print_wkssvc_NetValidateNameType(struct ndr_print *ndr, const char *name, enum wkssvc_NetValidateNameType r);
void ndr_print_wkssvc_NetJoinStatus(struct ndr_print *ndr, const char *name, enum wkssvc_NetJoinStatus r);
void ndr_print_wkssvc_PasswordBuffer(struct ndr_print *ndr, const char *name, const struct wkssvc_PasswordBuffer *r);
void ndr_print_wkssvc_joinflags(struct ndr_print *ndr, const char *name, uint32_t r);
void ndr_print_wkssvc_ComputerNameType(struct ndr_print *ndr, const char *name, enum wkssvc_ComputerNameType r);
void ndr_print_wkssvc_ComputerNamesCtr(struct ndr_print *ndr, const char *name, const struct wkssvc_ComputerNamesCtr *r);
void ndr_print_wkssvc_NetWkstaGetInfo(struct ndr_print *ndr, const char *name, int flags, const struct wkssvc_NetWkstaGetInfo *r);
void ndr_print_wkssvc_NetWkstaSetInfo(struct ndr_print *ndr, const char *name, int flags, const struct wkssvc_NetWkstaSetInfo *r);
void ndr_print_wkssvc_NetWkstaEnumUsers(struct ndr_print *ndr, const char *name, int flags, const struct wkssvc_NetWkstaEnumUsers *r);
void ndr_print_wkssvc_NetrWkstaUserGetInfo(struct ndr_print *ndr, const char *name, int flags, const struct wkssvc_NetrWkstaUserGetInfo *r);
void ndr_print_wkssvc_NetrWkstaUserSetInfo(struct ndr_print *ndr, const char *name, int flags, const struct wkssvc_NetrWkstaUserSetInfo *r);
void ndr_print_wkssvc_NetWkstaTransportEnum(struct ndr_print *ndr, const char *name, int flags, const struct wkssvc_NetWkstaTransportEnum *r);
void ndr_print_wkssvc_NetrWkstaTransportAdd(struct ndr_print *ndr, const char *name, int flags, const struct wkssvc_NetrWkstaTransportAdd *r);
void ndr_print_wkssvc_NetrWkstaTransportDel(struct ndr_print *ndr, const char *name, int flags, const struct wkssvc_NetrWkstaTransportDel *r);
void ndr_print_wkssvc_NetrUseAdd(struct ndr_print *ndr, const char *name, int flags, const struct wkssvc_NetrUseAdd *r);
void ndr_print_wkssvc_NetrUseGetInfo(struct ndr_print *ndr, const char *name, int flags, const struct wkssvc_NetrUseGetInfo *r);
void ndr_print_wkssvc_NetrUseDel(struct ndr_print *ndr, const char *name, int flags, const struct wkssvc_NetrUseDel *r);
void ndr_print_wkssvc_NetrUseEnum(struct ndr_print *ndr, const char *name, int flags, const struct wkssvc_NetrUseEnum *r);
void ndr_print_wkssvc_NetrMessageBufferSend(struct ndr_print *ndr, const char *name, int flags, const struct wkssvc_NetrMessageBufferSend *r);
void ndr_print_wkssvc_NetrWorkstationStatisticsGet(struct ndr_print *ndr, const char *name, int flags, const struct wkssvc_NetrWorkstationStatisticsGet *r);
void ndr_print_wkssvc_NetrLogonDomainNameAdd(struct ndr_print *ndr, const char *name, int flags, const struct wkssvc_NetrLogonDomainNameAdd *r);
void ndr_print_wkssvc_NetrLogonDomainNameDel(struct ndr_print *ndr, const char *name, int flags, const struct wkssvc_NetrLogonDomainNameDel *r);
void ndr_print_wkssvc_NetrJoinDomain(struct ndr_print *ndr, const char *name, int flags, const struct wkssvc_NetrJoinDomain *r);
void ndr_print_wkssvc_NetrUnjoinDomain(struct ndr_print *ndr, const char *name, int flags, const struct wkssvc_NetrUnjoinDomain *r);
void ndr_print_wkssvc_NetrRenameMachineInDomain(struct ndr_print *ndr, const char *name, int flags, const struct wkssvc_NetrRenameMachineInDomain *r);
void ndr_print_wkssvc_NetrValidateName(struct ndr_print *ndr, const char *name, int flags, const struct wkssvc_NetrValidateName *r);
void ndr_print_wkssvc_NetrGetJoinInformation(struct ndr_print *ndr, const char *name, int flags, const struct wkssvc_NetrGetJoinInformation *r);
void ndr_print_wkssvc_NetrGetJoinableOus(struct ndr_print *ndr, const char *name, int flags, const struct wkssvc_NetrGetJoinableOus *r);
void ndr_print_wkssvc_NetrJoinDomain2(struct ndr_print *ndr, const char *name, int flags, const struct wkssvc_NetrJoinDomain2 *r);
void ndr_print_wkssvc_NetrUnjoinDomain2(struct ndr_print *ndr, const char *name, int flags, const struct wkssvc_NetrUnjoinDomain2 *r);
void ndr_print_wkssvc_NetrRenameMachineInDomain2(struct ndr_print *ndr, const char *name, int flags, const struct wkssvc_NetrRenameMachineInDomain2 *r);
void ndr_print_wkssvc_NetrValidateName2(struct ndr_print *ndr, const char *name, int flags, const struct wkssvc_NetrValidateName2 *r);
void ndr_print_wkssvc_NetrGetJoinableOus2(struct ndr_print *ndr, const char *name, int flags, const struct wkssvc_NetrGetJoinableOus2 *r);
void ndr_print_wkssvc_NetrAddAlternateComputerName(struct ndr_print *ndr, const char *name, int flags, const struct wkssvc_NetrAddAlternateComputerName *r);
void ndr_print_wkssvc_NetrRemoveAlternateComputerName(struct ndr_print *ndr, const char *name, int flags, const struct wkssvc_NetrRemoveAlternateComputerName *r);
void ndr_print_wkssvc_NetrSetPrimaryComputername(struct ndr_print *ndr, const char *name, int flags, const struct wkssvc_NetrSetPrimaryComputername *r);
void ndr_print_wkssvc_NetrEnumerateComputerNames(struct ndr_print *ndr, const char *name, int flags, const struct wkssvc_NetrEnumerateComputerNames *r);
#endif /* _HEADER_NDR_wkssvc */
