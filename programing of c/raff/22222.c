main()
{   float n,p,i,t,e,j;
    printf("enter x:");
    scanf("%f",&n);
    p=1;
    e=2.71;
    if(n>0) {
    for(i=1;i<=n;i++)
    {
         p=p*e;

    }
    }
    else if(n<0)
    {
        n=n*(-1);
    }
    for(j=1;j<=n;j++)
    {p=p*(1.0/e);
    }

printf("Result:%f",p);






}
