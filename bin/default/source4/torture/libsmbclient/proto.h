#ifndef __DEFAULT_SOURCE4_TORTURE_LIBSMBCLIENT_PROTO_H__
#define __DEFAULT_SOURCE4_TORTURE_LIBSMBCLIENT_PROTO_H__

#undef _PRINTF_ATTRIBUTE
#define _PRINTF_ATTRIBUTE(a1, a2) PRINTF_ATTRIBUTE(a1, a2)
/* This file was automatically generated by mkproto.pl. DO NOT EDIT */

/* this file contains prototypes for functions that are private 
 * to this subsystem or library. These functions should not be 
 * used outside this particular subsystem! */


/* The following definitions come from ../source4/torture/libsmbclient/libsmbclient.c  */

bool torture_libsmbclient_init_context(struct torture_context *tctx,
				       SMBCCTX **ctx_p);
bool torture_libsmbclient_configuration(struct torture_context *tctx);
bool torture_libsmbclient_options(struct torture_context *tctx);
NTSTATUS torture_libsmbclient_init(void);
#undef _PRINTF_ATTRIBUTE
#define _PRINTF_ATTRIBUTE(a1, a2)

#endif /* __DEFAULT_SOURCE4_TORTURE_LIBSMBCLIENT_PROTO_H__ */

