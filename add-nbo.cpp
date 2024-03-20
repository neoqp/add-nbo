#include <stdint.h>
#include <stdio.h>
#include "add.h"

int main(int argc, char* argv[]){

	if (argc != 3){
		printf("input two files!\n");
		return 1;
	}

	uint8_t a[4], b[4];

	FILE *f1, *f2;
	f1 = fopen(argv[1], "rb");
	f2 = fopen(argv[2], "rb");
	fread(a, sizeof(char), 4, f1);
	fread(b, sizeof(char), 4, f2);

	add(a, b);
	return 0;
}