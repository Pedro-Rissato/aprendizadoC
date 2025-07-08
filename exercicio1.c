#include <stdio.h>
int main()
{

    printf("int : %d bytes\n", sizeof(int));
    printf("short int: %d bytes\n", sizeof(short int));
    printf("long int: %d bytes\n", sizeof(long int));
    printf("signed int: %d bytes\n", sizeof(signed int));
    printf("unsigned int: %d bytes\n", sizeof(unsigned int));
    printf("short signed int: %d bytes \n", sizeof(short signed int));
    printf("short unsigned int: %d bytes \n", sizeof(short unsigned int));
    printf("long signed int: %d bytes \n", sizeof(long signed int));
    printf("long unsigned int: %d bytes \n", sizeof(long unsigned int));
    return 0;
}
