#ifndef __DEFAULT_SOURCE4_RPC_SERVER_DCERPC_SERVER_PROTO_H__
#define __DEFAULT_SOURCE4_RPC_SERVER_DCERPC_SERVER_PROTO_H__

#undef _PRINTF_ATTRIBUTE
#define _PRINTF_ATTRIBUTE(a1, a2) PRINTF_ATTRIBUTE(a1, a2)
/* This file was automatically generated by mkproto.pl. DO NOT EDIT */

/* this file contains prototypes for functions that are private 
 * to this subsystem or library. These functions should not be 
 * used outside this particular subsystem! */


/* The following definitions come from ../source4/rpc_server/dcerpc_server.c  */

const struct dcesrv_interface *find_interface_by_uuid(const struct dcesrv_endpoint *endpoint,
						      const struct GUID *uuid, uint32_t if_version);
NTSTATUS dcesrv_inherited_session_key(struct dcesrv_connection *p,
				      DATA_BLOB *session_key);
NTSTATUS dcesrv_interface_bind_require_integrity(struct dcesrv_call_state *dce_call,
						 const struct dcesrv_interface *iface);
NTSTATUS dcesrv_interface_bind_require_privacy(struct dcesrv_call_state *dce_call,
					       const struct dcesrv_interface *iface);
const struct dcesrv_endpoint_server *dcesrv_ep_server_byname(const char *name);
void dcerpc_server_init(struct loadparm_context *lp_ctx);
const struct dcesrv_critical_sizes *dcerpc_module_version(void);
NTSTATUS dcesrv_add_ep(struct dcesrv_context *dce_ctx,
		       struct loadparm_context *lp_ctx,
		       struct dcesrv_endpoint *e,
		       struct tevent_context *event_ctx,
		       const struct model_ops *model_ops);

/* The following definitions come from ../source4/rpc_server/dcesrv_mgmt.c  */

const struct dcesrv_interface dcesrv_get_mgmt_interface(void);

/* The following definitions come from ../source4/rpc_server/handles.c  */

#undef _PRINTF_ATTRIBUTE
#define _PRINTF_ATTRIBUTE(a1, a2)

#endif /* __DEFAULT_SOURCE4_RPC_SERVER_DCERPC_SERVER_PROTO_H__ */

