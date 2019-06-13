main()
{
int  i,n,s,t;
scanf("%d",&n);
t=1;
s=0;
 for (i=1;i<=n;i++){
 if(i%2==0){
 t=-1*i*i*i;
 }
 else
    t=i*i*i;
 printf("%d\n",t);
  s=s+t;
 }

 printf("summation:%d\n",s);



}
