main()
{ int i,s,avg,n,c=0,h=0;
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
    printf("average:%d\n",avg);
      for(i=0;i<n;i++){

       if(avg<a[i])
       c++;
    }
    printf("%d of them above  average\n",c);
     for(i=0;i<n;i++){
       if(avg>a[i])
       h++;
    }
      printf("%d of them bellow  average\n",h);

  }
