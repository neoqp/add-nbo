#include "add.h"
#include <stdio.h>
#include <arpa/inet.h>
#include <stdint.h>

void add(uint8_t a[], uint8_t b[]){
	uint32_t* p1 = reinterpret_cast<uint32_t*>(a);
	uint32_t* p2 = reinterpret_cast<uint32_t*>(b);
	uint32_t n1 = ntohl(*p1);
	uint32_t n2 = ntohl(*p2);

	printf("%u(0x%x) + %u(0x%x) = %u(0x%x)\n", n1, n1, n2, n2, n1+n2, n1+n2);
	return;
}