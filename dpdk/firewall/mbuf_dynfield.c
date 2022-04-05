#include <stdint.h>
#include <netinet/in.h>

#include <rte_memory.h>
#include <rte_config.h>
#include <rte_ether.h>
#include <rte_mempool.h>
#include <rte_mbuf.h>
#include <rte_mbuf_dyn.h>


#ifndef MBUF_DYNFIELD_META
const struct rte_mbuf_dynfield rte_mbuf_dynfield_metadata = {
.name = "rte_mbuf_dynfield_metadata",
.size = sizeof(uint64_t),
.align = __alignof__(uint64_t),
.flags = 0,
};

int meta_offset = 0;
#define MBUF_DYNFIELD_META 1
#endif