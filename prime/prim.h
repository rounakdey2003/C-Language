int isprime(int i)
{
    int j,a=0;
    for(j=1;j<=i;j++)
    {
        if(i%j==0)
            a=a+1;
    }
    if(a==2)
        return 1;
    else
        return 0;
}