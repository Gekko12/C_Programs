/*
  Program for bit manipulation :-
  1.setbits(x,p,n,y) that returns x with the n bits that begin at pos p set the rightmost n bits of y
    leaving the other bits unchanged
  2.invert(x,p,n) that returns x with the n bits that begin at pos p inverted ,leaving the others unchanged
  3.rightrot(x,n) that returns the val of the integer x rotated to the right by n bit pos.
  4.In a two’s complement number system, x &= (x-1) deletes the rightmost 1-bit in x. Explain why. Use this
    observation to write a faster version of bitcount.
    
*/

#include <stdio.h>
#include <stdlib.h>

unsigned setbits(unsigned x,int p,int n,unsigned y)
{
    return x & ~(~(~0 << n) << (p+1-n)) | ( y & (~(~0<<n)) << (p+1-n));
}

unsigned getbits(unsigned x,int p,int n)
{
  return (x >> (p+1-n)) & ~(~0 << n);
}

unsigned invert(unsigned x, int p, int n)
{
    return   x ^ (~(~0 << n) << (p + 1 - n));
}


int wordlength(void)
{
    int i;
    unsigned v = (unsigned) ~0;

    for(i=1;(v=v>>1)>0;i++)
        ;
    return i;
}

unsigned rightrot(unsigned x,int n)
{
    int wordlength(void);
    unsigned rbit;/* rightmost bit */
    
    rbit = x << (wordlength() - n);
    x = x >> n;
    x = x | rbit;
    
    return x;
}

int bitcount(unsigned x)
{
    int b;

    for(b=0; x!=0; x &= x-1)
        ++b;

    return b;
}

