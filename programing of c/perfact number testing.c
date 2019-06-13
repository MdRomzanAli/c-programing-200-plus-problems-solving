main()
{
int  i,n,s,t;
scanf("%d",&n);

s=0;
 for (i=1;i<n;i++){
  if(n%i==0){
   s=s+i;

  }
 }
   if(s==n)
   printf("yes");
   else
     printf("no");

}
