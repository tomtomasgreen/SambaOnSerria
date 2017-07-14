#ifndef __DEFAULT_SOURCE4_NTVFS_POSIX_POSIX_EADB_PROTO_H__
#define __DEFAULT_SOURCE4_NTVFS_POSIX_POSIX_EADB_PROTO_H__

#undef _PRINTF_ATTRIBUTE
#define _PRINTF_ATTRIBUTE(a1, a2) PRINTF_ATTRIBUTE(a1, a2)
/* This file was automatically generated by mkproto.pl. DO NOT EDIT */

/* this file contains prototypes for functions that are private 
 * to this subsystem or library. These functions should not be 
 * used outside this particular subsystem! */


/* The following definitions come from ../source4/ntvfs/posix/posix_eadb.c  */

NTSTATUS pull_xattr_blob_tdb_raw(struct tdb_wrap *ea_tdb,
			     TALLOC_CTX *mem_ctx,
			     const char *attr_name,
			     const char *fname,
			     int fd,
			     size_t estimated_size,
			     DATA_BLOB *blob);
NTSTATUS push_xattr_blob_tdb_raw(struct tdb_wrap *ea_tdb,
			     const char *attr_name,
			     const char *fname,
			     int fd,
			     const DATA_BLOB *blob);
NTSTATUS delete_posix_eadb_raw(struct tdb_wrap *ea_tdb, const char *attr_name,
			  const char *fname, int fd);
NTSTATUS unlink_posix_eadb_raw(struct tdb_wrap *ea_tdb, const char *fname, int fd);
NTSTATUS list_posix_eadb_raw(struct tdb_wrap *ea_tdb, TALLOC_CTX *mem_ctx,
			    const char *fname, int fd,
			    DATA_BLOB *list);
NTSTATUS pull_xattr_blob_tdb(struct pvfs_state *pvfs_state,
			     TALLOC_CTX *mem_ctx,
			     const char *attr_name,
			     const char *fname,
			     int fd,
			     size_t estimated_size,
			     DATA_BLOB *blob);
NTSTATUS push_xattr_blob_tdb(struct pvfs_state *pvfs_state,
			     const char *attr_name,
			     const char *fname,
			     int fd,
			     const DATA_BLOB *blob);
NTSTATUS delete_posix_eadb(struct pvfs_state *pvfs_state, const char *attr_name,
			  const char *fname, int fd);
NTSTATUS unlink_posix_eadb(struct pvfs_state *pvfs_state, const char *fname);
#undef _PRINTF_ATTRIBUTE
#define _PRINTF_ATTRIBUTE(a1, a2)

#endif /* __DEFAULT_SOURCE4_NTVFS_POSIX_POSIX_EADB_PROTO_H__ */

