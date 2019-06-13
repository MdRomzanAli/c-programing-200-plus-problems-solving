main()
{ int  n,c=0;
 scanf("%d",&n);
 do{ n=n%10;
     c++;
     n=n/10;


 } while(n!=0);
  printf("%d",c);







}
