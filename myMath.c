#include <stdlib.h>
#include <stdio.h>
typedef unsigned char uint8_t;
uint8_t uint8Sum(uint8_t arr[], uint8_t length)
{
    uint8_t i,sum;
    for(i = 0; i < length; i++)
    {
        sum += arr[i];
    }
    return sum;
}
