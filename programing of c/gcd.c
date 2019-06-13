main()
{
int  a,b,min,i,r;
scanf("%d%d",&a,&b);
if(a<b)
min=a;
else
min=b;
for(i=1;i<=min;i++){
if((a%i==0)&&(b%i==0))
 r=i;
}
printf("%d",r);
}
