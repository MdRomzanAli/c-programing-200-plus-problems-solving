main()
{
    int i,x,n,s=0,max,min;
printf("how many student:");
scanf("%d",&n);
int a[n];

 for(i=0;i<n;i++){
    s=i+1;
  printf("enter %d student number a[%d]:",s,i);
   scanf("%d",&a[i]);
   }
    max=a[0];
    for(i=0;i<n;i++){
            if(a[i]>max)
            max=a[i];
    }
    printf("max:%d\n",max);
    min=a[0];
    for(i=0;i<n;i++){
            if(a[i]<min)
            min=a[i];
    }
    printf("min:%d",min);






}
