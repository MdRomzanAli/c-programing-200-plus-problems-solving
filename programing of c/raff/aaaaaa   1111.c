main()
{ int n,a,s,i,m;
printf("Input a:");
scanf("%d",&a);
printf("Input n:");
scanf("%d",&n);
s=0;
for(i=1;i<=n;i++){
m=a+i;
s=s+m;
}

printf("summation:%d",s);
}




