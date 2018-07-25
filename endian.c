#include <stdio.h>
#include<stdint.h>

uint16_t val1 = 0x400;
uint8_t* ptr = (uint8_t*)&val1 ;

if ( ptr[0] == 0x40 )
{
    printf("big endian\n" );
}

else if (ptr[1] == 0x40) 
{
    printf("little endian\n" );
}

else
{
    printf("unknown endianess \n");
}