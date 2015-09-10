#ifndef FNV1A_H
#define FNV1A_H 1
#include <stdint.h>

uint32_t fnv1a_hash32(const char *key, char *end);

#endif
