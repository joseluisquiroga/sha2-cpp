
/*
sha256 cpp code

C++ implementation of the sha256 standard.

You can take this README as Example usage:

g++ -o tt README.cpp sha2.cpp
./tt sha2.cpp
rm tt

*/

#include "sha2.h"

int 
main(int argc, char* argv[]){
	if(argc < 2){
		printf("%s <filenam>\n", argv[0]);
		return -1;
	}
	char hex_str[NUM_BYTES_SHA2_HEX_STR];
	unsigned char resp[NUM_BYTES_SHA2];
	char* fnm = argv[1];
	sha2_file(fnm, resp, 0);
	printf("%s  %s\n", as_hex_txt(resp, hex_str), fnm);
	
    return 0;
}

