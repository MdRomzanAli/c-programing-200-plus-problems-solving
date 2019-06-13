main()
{
    int i,x,n,s=0;
printf("how many student:");
scanf("%d",&n);
int a[n];
char g[n];
 for(i=0;i<n;i++){
    s=i+1;
  printf("enter %d student number a[%d]:",s,i);
   scanf("%d",&a[i]);

   }
   for(i=0;i<n;i++){
    x=a[i];
   if(x>=90) g[i]='A';
   else if(x>=80) g[i]='B';
   else if(x>=70) g[i]='C';
    else if(x>=60) g[i]='D';
    else g[i]='F';
   }
    for(i=0;i<n;i++){
            s=i+1;
    printf("%d student number:%d; grade:%c\n",s,a[i],g[i]);

    }
   }

