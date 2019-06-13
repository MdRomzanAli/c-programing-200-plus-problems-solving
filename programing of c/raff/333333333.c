main()
{ float n,x,i,t,j,p;
    printf("enter x:");
    scanf("%f",&x);
     printf("enter n:");
    scanf("%f",&n);
  p=1;
  if(n>0){
   for(i=1;i<=n;i++){
   t=x;
   p=t*p;

   }
   }

  else if(n<0)
   { n=n*(-1);
   for(j=1;j<=n;j++){
    t=x;
   p=p*(1.0/t);
   }
   }
   printf("%f",p);

  }








