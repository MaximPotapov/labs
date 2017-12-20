#include <stdio.h>


int main(void)
{
  int  x = 8;
  int reverseBits (int x);
  
  x = ((x & 0x5555) <<1) | ((x >> 1) & 0x5555);
  x = ((x & 0x3333) <<2) | ((x >> 2) & 0x3333);
  x = ((x & 0x0F0F) <<4) | ((X >> 4) & 0x0F0F);
  
  printf("%i\n", x);
  return 0;
  
}
