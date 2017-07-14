/* header auto-generated by pidl */

#ifndef _PIDL_HEADER_witness
#define _PIDL_HEADER_witness

#include <stdint.h>

#include "libcli/util/ntstatus.h"

#include "librpc/gen_ndr/misc.h"
#ifndef _HEADER_witness
#define _HEADER_witness

enum witness_version
#ifndef USE_UINT_ENUMS
 {
	WITNESS_V1=(int)(0x00010001),
	WITNESS_V2=(int)(0x00020000),
	WITNESS_UNSPECIFIED_VERSION=(int)(0xFFFFFFFF)
}
#else
 { __do_not_use_enum_witness_version=0x7FFFFFFF}
#define WITNESS_V1 ( 0x00010001 )
#define WITNESS_V2 ( 0x00020000 )
#define WITNESS_UNSPECIFIED_VERSION ( 0xFFFFFFFF )
#endif
;

enum witness_interfaceInfo_state
#ifndef USE_UINT_ENUMS
 {
	WITNESS_STATE_UNKNOWN=(int)(0x00),
	WITNESS_STATE_AVAILABLE=(int)(0x01),
	WITNESS_STATE_UNAVAILABLE=(int)(0xff)
}
#else
 { __do_not_use_enum_witness_interfaceInfo_state=0x7FFFFFFF}
#define WITNESS_STATE_UNKNOWN ( 0x00 )
#define WITNESS_STATE_AVAILABLE ( 0x01 )
#define WITNESS_STATE_UNAVAILABLE ( 0xff )
#endif
;

/* bitmap witness_interfaceInfo_flags */
#define WITNESS_INFO_IPv4_VALID ( 0x01 )
#define WITNESS_INFO_IPv6_VALID ( 0x02 )
#define WITNESS_INFO_WITNESS_IF ( 0x04 )

struct witness_interfaceInfo {
	const char *group_name;/* [charset(UTF16),to_null] */
	enum witness_version version;
	enum witness_interfaceInfo_state state;
	const char * ipv4;/* [flag(LIBNDR_FLAG_BIGENDIAN)] */
	const char * ipv6;/* [flag(LIBNDR_FLAG_BIGENDIAN)] */
	uint32_t flags;
};

struct witness_interfaceList {
	uint32_t num_interfaces;
	struct witness_interfaceInfo *interfaces;/* [size_is(num_interfaces),unique] */
};

enum witness_notifyResponse_type
#ifndef USE_UINT_ENUMS
 {
	WITNESS_NOTIFY_RESOURCE_CHANGE=(int)(1),
	WITNESS_NOTIFY_CLIENT_MOVE=(int)(2),
	WITNESS_NOTIFY_SHARE_MOVE=(int)(3),
	WITNESS_NOTIFY_IP_CHANGE=(int)(4)
}
#else
 { __do_not_use_enum_witness_notifyResponse_type=0x7FFFFFFF}
#define WITNESS_NOTIFY_RESOURCE_CHANGE ( 1 )
#define WITNESS_NOTIFY_CLIENT_MOVE ( 2 )
#define WITNESS_NOTIFY_SHARE_MOVE ( 3 )
#define WITNESS_NOTIFY_IP_CHANGE ( 4 )
#endif
;

enum witness_ResourceChange_type
#ifndef USE_UINT_ENUMS
 {
	WITNESS_RESOURCE_STATE_UNKNOWN=(int)(0x00),
	WITNESS_RESOURCE_STATE_AVAILABLE=(int)(0x01),
	WITNESS_RESOURCE_STATE_UNAVAILABLE=(int)(0xff)
}
#else
 { __do_not_use_enum_witness_ResourceChange_type=0x7FFFFFFF}
#define WITNESS_RESOURCE_STATE_UNKNOWN ( 0x00 )
#define WITNESS_RESOURCE_STATE_AVAILABLE ( 0x01 )
#define WITNESS_RESOURCE_STATE_UNAVAILABLE ( 0xff )
#endif
;

struct witness_ResourceChange {
	uint32_t length;/* [value(ndr_size_witness_ResourceChange(r,ndr->flags))] */
	enum witness_ResourceChange_type type;
	const char * name;/* [flag(LIBNDR_FLAG_STR_NULLTERM|LIBNDR_FLAG_ALIGN2)] */
}/* [flag(LIBNDR_FLAG_NOALIGN|LIBNDR_FLAG_LITTLE_ENDIAN),gensize,public] */;

/* bitmap witness_IPaddrInfo_flags */
#define WITNESS_IPADDR_V4 ( 0x01 )
#define WITNESS_IPADDR_V6 ( 0x02 )
#define WITNESS_IPADDR_ONLINE ( 0x08 )
#define WITNESS_IPADDR_OFFLINE ( 0x10 )

struct witness_IPaddrInfo {
	uint32_t flags;
	const char * ipv4;/* [flag(LIBNDR_FLAG_BIGENDIAN)] */
	const char * ipv6;/* [flag(LIBNDR_FLAG_BIGENDIAN)] */
}/* [flag(LIBNDR_FLAG_NOALIGN|LIBNDR_FLAG_LITTLE_ENDIAN),gensize] */;

struct witness_IPaddrInfoList {
	uint32_t length;/* [value(12+(r->num*ndr_size_witness_IPaddrInfo(r->addr,ndr->flags)))] */
	uint32_t reserved;/* [value(0)] */
	uint32_t num;
	struct witness_IPaddrInfo *addr;
}/* [flag(LIBNDR_FLAG_NOALIGN|LIBNDR_FLAG_LITTLE_ENDIAN)] */;

union witness_notifyResponse_message {
	struct witness_ResourceChange resource_change;/* [case(WITNESS_NOTIFY_RESOURCE_CHANGE)] */
	struct witness_IPaddrInfoList client_move;/* [case(WITNESS_NOTIFY_CLIENT_MOVE)] */
	struct witness_IPaddrInfoList share_move;/* [case(WITNESS_NOTIFY_SHARE_MOVE)] */
	struct witness_IPaddrInfoList ip_change;/* [case(WITNESS_NOTIFY_IP_CHANGE)] */
	DATA_BLOB data;/* [default,flag(LIBNDR_FLAG_REMAINING)] */
}/* [flag(LIBNDR_FLAG_NOALIGN|LIBNDR_FLAG_LITTLE_ENDIAN),nodiscriminant,public,switch_type(witness_notifyResponse_type)] */;

struct witness_notifyResponse {
	enum witness_notifyResponse_type type;
	uint32_t length;/* [value(ndr_size_witness_notifyResponse(r,ndr->flags)-20)] */
	uint32_t num;
	union witness_notifyResponse_message *messages;/* [flag(LIBNDR_FLAG_REMAINING),subcontext(4),subcontext_size(length),switch_is(type)] */
}/* [flag(LIBNDR_PRINT_ARRAY_HEX),gensize,nopull,nopush,public] */;

/* bitmap witness_RegisterEx_flags */
#define WITNESS_REGISTER_NONE ( 0x00 )
#define WITNESS_REGISTER_IP_NOTIFICATION ( 0x01 )


struct witness_GetInterfaceList {
	struct {
		struct witness_interfaceList **interface_list;/* [ref] */
		WERROR result;
	} out;

};


struct witness_Register {
	struct {
		enum witness_version version;
		const char *net_name;/* [charset(UTF16),unique] */
		const char *ip_address;/* [charset(UTF16),unique] */
		const char *client_computer_name;/* [charset(UTF16),unique] */
	} in;

	struct {
		struct policy_handle *context_handle;/* [ref] */
		WERROR result;
	} out;

};


struct witness_UnRegister {
	struct {
		struct policy_handle context_handle;
	} in;

	struct {
		WERROR result;
	} out;

};


struct witness_AsyncNotify {
	struct {
		struct policy_handle context_handle;
	} in;

	struct {
		struct witness_notifyResponse **response;/* [ref] */
		WERROR result;
	} out;

};


struct witness_RegisterEx {
	struct {
		enum witness_version version;
		const char *net_name;/* [charset(UTF16),unique] */
		const char *share_name;/* [charset(UTF16),unique] */
		const char *ip_address;/* [charset(UTF16),unique] */
		const char *client_computer_name;/* [charset(UTF16),unique] */
		uint32_t flags;
		uint32_t timeout;
	} in;

	struct {
		struct policy_handle *context_handle;/* [ref] */
		WERROR result;
	} out;

};

#endif /* _HEADER_witness */
#endif /* _PIDL_HEADER_witness */
