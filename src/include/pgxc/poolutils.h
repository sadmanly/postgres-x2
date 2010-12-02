/*-------------------------------------------------------------------------
 *
 * poolutils.h
 *
 *		Utilities for Postgres-XC Pooler
 *
 * Portions Copyright (c) 1996-2009, PostgreSQL Global Development Group
 * Portions Copyright (c) 2010 Nippon Telegraph and Telephone Corporation
 *
 * IDENTIFICATION
 *	$$
 *
 *-------------------------------------------------------------------------
 */

#ifndef POOLUTILS_H
#define POOLUTILS_H

#include "nodes/parsenodes.h"

#define TIMEOUT_CLEAN_LOOP 10 /* Wait 10s for all the transactions to shutdown */

/* Error codes for connection cleaning */
#define CLEAN_CONNECTION_COMPLETED			0
#define CLEAN_CONNECTION_NOT_COMPLETED		1
#define CLEAN_CONNECTION_TX_REMAIN			2
#define	CLEAN_CONNECTION_EOF				-1

void CleanConnection(CleanConnStmt *stmt);
#endif