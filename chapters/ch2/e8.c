
unsigned rightrot(unsigned x, int n)
{ 
return ((x&(~(~0<<n)))<<(8-n))|(x>>n);

}

