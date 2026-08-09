int nextPrime(int n) 
{
    n=n+1;
    while(1)
    {
        int prime=1;
        for(int i=2;i<=n/2;i++)
        {
            if(n%i==0)
            {
                prime=0;
                break;
            }
        }
        if(prime==1)
            return n;
    n++;
    }
}
