/* header auto-generated by pidl */

#ifndef _PIDL_HEADER_auth
#define _PIDL_HEADER_auth

#include <stdint.h>

#include <core/ntstatus.h>

#include <gen_ndr/misc.h>
#include <gen_ndr/security.h>
#include <gen_ndr/lsa.h>
#include <gen_ndr/krb5pac.h>
#ifndef _HEADER_auth
#define _HEADER_auth

enum auth_method
#ifndef USE_UINT_ENUMS
 {
	SEC_AUTH_METHOD_UNAUTHENTICATED=(int)(0),
	SEC_AUTH_METHOD_NTLM=(int)(1),
	SEC_AUTH_METHOD_KERBEROS=(int)(2)
}
#else
 { __do_not_use_enum_auth_method=0x7FFFFFFF}
#define SEC_AUTH_METHOD_UNAUTHENTICATED ( 0 )
#define SEC_AUTH_METHOD_NTLM ( 1 )
#define SEC_AUTH_METHOD_KERBEROS ( 2 )
#endif
;

struct auth_user_info {
	const char *account_name;/* [charset(UTF8),unique] */
	const char *user_principal_name;/* [charset(UTF8),unique] */
	uint8_t user_principal_constructed;
	const char *domain_name;/* [charset(UTF8),unique] */
	const char *dns_domain_name;/* [charset(UTF8),unique] */
	const char *full_name;/* [charset(UTF8),unique] */
	const char *logon_script;/* [charset(UTF8),unique] */
	const char *profile_path;/* [charset(UTF8),unique] */
	const char *home_directory;/* [charset(UTF8),unique] */
	const char *home_drive;/* [charset(UTF8),unique] */
	const char *logon_server;/* [charset(UTF8),unique] */
	NTTIME last_logon;
	NTTIME last_logoff;
	NTTIME acct_expiry;
	NTTIME last_password_change;
	NTTIME allow_password_change;
	NTTIME force_password_change;
	uint16_t logon_count;
	uint16_t bad_password_count;
	uint32_t acct_flags;
	uint8_t authenticated;
}/* [public] */;

struct auth_user_info_torture {
	uint32_t num_dc_sids;
	struct dom_sid *dc_sids;/* [size_is(num_dc_sids)] */
}/* [public] */;

struct auth_user_info_unix {
	const char *unix_name;/* [charset(UTF8),unique] */
	const char *sanitized_username;/* [charset(UTF8),unique] */
}/* [public] */;

struct auth_user_info_dc {
	uint32_t num_sids;
	struct dom_sid *sids;/* [size_is(num_sids)] */
	struct auth_user_info *info;/* [unique] */
	DATA_BLOB user_session_key;/* [noprint] */
	DATA_BLOB lm_session_key;/* [noprint] */
}/* [public] */;

struct auth_session_info {
	struct security_token *security_token;/* [unique] */
	struct security_unix_token *unix_token;/* [unique] */
	struct auth_user_info *info;/* [unique] */
	struct auth_user_info_unix *unix_info;/* [unique] */
	struct auth_user_info_torture *torture;/* [ignore,value(NULL)] */
	DATA_BLOB session_key;/* [noprint] */
	struct cli_credentials *credentials;/* [ignore,value(NULL)] */
}/* [public] */;

struct auth_session_info_transport {
	struct auth_session_info *session_info;/* [unique] */
	DATA_BLOB exported_gssapi_credentials;/* [noprint] */
}/* [public] */;

#endif /* _HEADER_auth */
#endif /* _PIDL_HEADER_auth */
