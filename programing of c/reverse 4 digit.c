main()
{ int x,r,a,b,c,d,t,q;
scanf("%d",&x);
d=x%10;
t=x/10;
c=t%10;
q=t/10;
b=q%10;
a=q/10;
r=d*1000+c*100+b*10+a;
 printf("%d",r);
}











