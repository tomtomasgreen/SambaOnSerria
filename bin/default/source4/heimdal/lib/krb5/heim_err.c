#include "config.h"
/* Generated from /Users/nnit/Documents/samba-source/source4/heimdal/lib/krb5/heim_err.et */
/* $Id$ */

#include <stddef.h>
#include <com_err.h>
#include "heim_err.h"

#define N_(x) (x)

static const char *heim_error_strings[] = {
	/* 000 */ N_("Error parsing log destination"),
	/* 001 */ N_("Failed to convert v4 principal"),
	/* 002 */ N_("Salt type is not supported by enctype"),
	/* 003 */ N_("Host not found"),
	/* 004 */ N_("Operation not supported"),
	/* 005 */ N_("End of file"),
	/* 006 */ N_("Failed to get the master key"),
	/* 007 */ N_("Unacceptable service used"),
	/* 008 */ N_("File descriptor not seekable"),
	/* 009 */ N_("Offset too large"),
	/* 010 */ N_("Invalid HDB entry encoding"),
	/* 011 */ "Reserved heim error (11)",
	/* 012 */ "Reserved heim error (12)",
	/* 013 */ "Reserved heim error (13)",
	/* 014 */ "Reserved heim error (14)",
	/* 015 */ "Reserved heim error (15)",
	/* 016 */ "Reserved heim error (16)",
	/* 017 */ "Reserved heim error (17)",
	/* 018 */ "Reserved heim error (18)",
	/* 019 */ "Reserved heim error (19)",
	/* 020 */ "Reserved heim error (20)",
	/* 021 */ "Reserved heim error (21)",
	/* 022 */ "Reserved heim error (22)",
	/* 023 */ "Reserved heim error (23)",
	/* 024 */ "Reserved heim error (24)",
	/* 025 */ "Reserved heim error (25)",
	/* 026 */ "Reserved heim error (26)",
	/* 027 */ "Reserved heim error (27)",
	/* 028 */ "Reserved heim error (28)",
	/* 029 */ "Reserved heim error (29)",
	/* 030 */ "Reserved heim error (30)",
	/* 031 */ "Reserved heim error (31)",
	/* 032 */ "Reserved heim error (32)",
	/* 033 */ "Reserved heim error (33)",
	/* 034 */ "Reserved heim error (34)",
	/* 035 */ "Reserved heim error (35)",
	/* 036 */ "Reserved heim error (36)",
	/* 037 */ "Reserved heim error (37)",
	/* 038 */ "Reserved heim error (38)",
	/* 039 */ "Reserved heim error (39)",
	/* 040 */ "Reserved heim error (40)",
	/* 041 */ "Reserved heim error (41)",
	/* 042 */ "Reserved heim error (42)",
	/* 043 */ "Reserved heim error (43)",
	/* 044 */ "Reserved heim error (44)",
	/* 045 */ "Reserved heim error (45)",
	/* 046 */ "Reserved heim error (46)",
	/* 047 */ "Reserved heim error (47)",
	/* 048 */ "Reserved heim error (48)",
	/* 049 */ "Reserved heim error (49)",
	/* 050 */ "Reserved heim error (50)",
	/* 051 */ "Reserved heim error (51)",
	/* 052 */ "Reserved heim error (52)",
	/* 053 */ "Reserved heim error (53)",
	/* 054 */ "Reserved heim error (54)",
	/* 055 */ "Reserved heim error (55)",
	/* 056 */ "Reserved heim error (56)",
	/* 057 */ "Reserved heim error (57)",
	/* 058 */ "Reserved heim error (58)",
	/* 059 */ "Reserved heim error (59)",
	/* 060 */ "Reserved heim error (60)",
	/* 061 */ "Reserved heim error (61)",
	/* 062 */ "Reserved heim error (62)",
	/* 063 */ "Reserved heim error (63)",
	/* 064 */ N_("Certificate missing"),
	/* 065 */ N_("Private key missing"),
	/* 066 */ N_("No valid certificate authority"),
	/* 067 */ N_("Certificate invalid"),
	/* 068 */ N_("Private key invalid"),
	/* 069 */ "Reserved heim error (69)",
	/* 070 */ "Reserved heim error (70)",
	/* 071 */ "Reserved heim error (71)",
	/* 072 */ "Reserved heim error (72)",
	/* 073 */ "Reserved heim error (73)",
	/* 074 */ "Reserved heim error (74)",
	/* 075 */ "Reserved heim error (75)",
	/* 076 */ "Reserved heim error (76)",
	/* 077 */ "Reserved heim error (77)",
	/* 078 */ "Reserved heim error (78)",
	/* 079 */ "Reserved heim error (79)",
	/* 080 */ "Reserved heim error (80)",
	/* 081 */ "Reserved heim error (81)",
	/* 082 */ "Reserved heim error (82)",
	/* 083 */ "Reserved heim error (83)",
	/* 084 */ "Reserved heim error (84)",
	/* 085 */ "Reserved heim error (85)",
	/* 086 */ "Reserved heim error (86)",
	/* 087 */ "Reserved heim error (87)",
	/* 088 */ "Reserved heim error (88)",
	/* 089 */ "Reserved heim error (89)",
	/* 090 */ "Reserved heim error (90)",
	/* 091 */ "Reserved heim error (91)",
	/* 092 */ "Reserved heim error (92)",
	/* 093 */ "Reserved heim error (93)",
	/* 094 */ "Reserved heim error (94)",
	/* 095 */ "Reserved heim error (95)",
	/* 096 */ "Reserved heim error (96)",
	/* 097 */ "Reserved heim error (97)",
	/* 098 */ "Reserved heim error (98)",
	/* 099 */ "Reserved heim error (99)",
	/* 100 */ "Reserved heim error (100)",
	/* 101 */ "Reserved heim error (101)",
	/* 102 */ "Reserved heim error (102)",
	/* 103 */ "Reserved heim error (103)",
	/* 104 */ "Reserved heim error (104)",
	/* 105 */ "Reserved heim error (105)",
	/* 106 */ "Reserved heim error (106)",
	/* 107 */ "Reserved heim error (107)",
	/* 108 */ "Reserved heim error (108)",
	/* 109 */ "Reserved heim error (109)",
	/* 110 */ "Reserved heim error (110)",
	/* 111 */ "Reserved heim error (111)",
	/* 112 */ "Reserved heim error (112)",
	/* 113 */ "Reserved heim error (113)",
	/* 114 */ "Reserved heim error (114)",
	/* 115 */ "Reserved heim error (115)",
	/* 116 */ "Reserved heim error (116)",
	/* 117 */ "Reserved heim error (117)",
	/* 118 */ "Reserved heim error (118)",
	/* 119 */ "Reserved heim error (119)",
	/* 120 */ "Reserved heim error (120)",
	/* 121 */ "Reserved heim error (121)",
	/* 122 */ "Reserved heim error (122)",
	/* 123 */ "Reserved heim error (123)",
	/* 124 */ "Reserved heim error (124)",
	/* 125 */ "Reserved heim error (125)",
	/* 126 */ "Reserved heim error (126)",
	/* 127 */ "Reserved heim error (127)",
	/* 128 */ N_("unknown error from getaddrinfo"),
	/* 129 */ N_("address family for nodename not supported"),
	/* 130 */ N_("temporary failure in name resolution"),
	/* 131 */ N_("invalid value for ai_flags"),
	/* 132 */ N_("non-recoverable failure in name resolution"),
	/* 133 */ N_("ai_family not supported"),
	/* 134 */ N_("memory allocation failure"),
	/* 135 */ N_("no address associated with nodename"),
	/* 136 */ N_("nodename nor servname provided, or not known"),
	/* 137 */ N_("servname not supported for ai_socktype"),
	/* 138 */ N_("ai_socktype not supported"),
	/* 139 */ N_("system error returned in errno"),
	NULL
};

#define num_errors 140

void initialize_heim_error_table_r(struct et_list **list)
{
    initialize_error_table_r(list, heim_error_strings, num_errors, ERROR_TABLE_BASE_heim);
}

void initialize_heim_error_table(void)
{
    init_error_table(heim_error_strings, ERROR_TABLE_BASE_heim, num_errors);
}