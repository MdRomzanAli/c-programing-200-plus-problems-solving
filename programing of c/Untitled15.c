main()
{ int n,a,c;


    scanf("%d",&n);
c=0;
do{ n=n/10;
         c++;
} while(n!=0);
   printf("%d",c);
}
