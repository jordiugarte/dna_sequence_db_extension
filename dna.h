#include "postgres.h"
#include "pg_config.h"

#ifndef PG_VERSION_NUM
#error "Unsupported too old postgresql version"
#endif

#if (PG_VERSION_NUM / 1000) < 13
#error "Sorry! You need to use PostgreSql version 13 or above to run this extension"
#endif

#include "fmgr.h"
PG_MODULE_MAGIC;

typedef struct
{
    int32 vl_len_;
    /* data */
    uint8 data[FLEXIBLE_ARRAY_MEMBER];
} dna;
