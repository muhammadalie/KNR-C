int lower(int c)
{
(c >= 'A' && c <= 'Z')?  c+= 'a' - 'A': c;
return c;
}


