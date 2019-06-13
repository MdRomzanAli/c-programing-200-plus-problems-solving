main()
{ int i,s,avg,n;
s=0;
printf("enter  student number:");
   scanf("%d",&n);
 int a[n];
 for(i=0;i<n;i++){

  printf("enter number a[%d]:",i);
   scanf("%d",&a[i]);
  s=s+a[i];

  }
    avg=s/n;
    printf("average:%d",avg);

  }
