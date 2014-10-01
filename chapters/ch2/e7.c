
unsigned getbits(unsigned x, int p, int n, unsigned y)
{ 
return ((((x<<(8-p-n))&((~0<<(8-n))))>>(8-n))^(~(~0<<n)))|(y&(~0<<n));

}

