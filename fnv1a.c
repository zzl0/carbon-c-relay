#include "fnv1a.h"

#define FNV_32_PRIME 0x01000193U
#define FNV_32_INIT 0x811c9dc5U

/**
 * Computes the hash for key in a 32-bit unsigned integer space.
 **/
uint32_t
fnv1a_hash32(const char *key, char *end)
{
	uint32_t hash = FNV_32_INIT;
	for (; key < end; key++)
		hash = (hash ^ (unsigned char)*key) * FNV_32_PRIME;
	return hash;
}
