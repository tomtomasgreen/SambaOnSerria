#ifndef __DEFAULT_SOURCE4_AUTH_SYSTEM_SESSION_PROTO_H__
#define __DEFAULT_SOURCE4_AUTH_SYSTEM_SESSION_PROTO_H__

#undef _PRINTF_ATTRIBUTE
#define _PRINTF_ATTRIBUTE(a1, a2) PRINTF_ATTRIBUTE(a1, a2)
/* This file was automatically generated by mkproto.pl. DO NOT EDIT */

/* this file contains prototypes for functions that are private 
 * to this subsystem or library. These functions should not be 
 * used outside this particular subsystem! */


/* The following definitions come from ../source4/auth/system_session.c  */

NTSTATUS auth_system_session_info(TALLOC_CTX *parent_ctx, 
				  struct loadparm_context *lp_ctx,
				  struct auth_session_info **_session_info) ;
NTSTATUS auth_system_user_info_dc(TALLOC_CTX *mem_ctx, const char *netbios_name,
				 struct auth_user_info_dc **_user_info_dc);
#undef _PRINTF_ATTRIBUTE
#define _PRINTF_ATTRIBUTE(a1, a2)

#endif /* __DEFAULT_SOURCE4_AUTH_SYSTEM_SESSION_PROTO_H__ */

