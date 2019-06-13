main()
{ int a,b,c,i,n,t,q;
float p;
printf("input a:");
scanf("%d",&a);
printf("input n:");
scanf("%d",&n);
p=1;

 for(i=1;i<=n;i++)
    { if(n>0){
        t=a;
        p=t*p;
    }



else
        q=n*(-1);
       p=q*(1/a);
    }
     printf("%d\n",p);





}
