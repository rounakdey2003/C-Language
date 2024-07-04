int palin(int n)
{
    int tem, rem, r=0;
    tem = n;
    while( n!=0 )
    {
        rem = n%10;
        r = r*10+rem;
        n/= 10;
    }
    if (r == tem)
        return 0;
    else
        return 1;
}