int sumOfMultiples(int n){
    int i,k=0;
    for(i=0;i<=n;i++)
    {
        if(i%3==0 || i%5==0 ||i%7==0)
        {
            k+=i;
        }
    }
    return k;

}