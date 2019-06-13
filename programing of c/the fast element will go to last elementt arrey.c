main()
{ int i,n,j,x;
scanf("%d",&n);
 int a[n];
 for(i=0;i<n;i++){

  printf("enter number a[%d]:",i);
   scanf("%d",&a[i]);
  }
   for(i=0;i<n;i++){

  printf("a[%d]:%d\n",i,a[i]);
  }




     for (i = 0; i < n;i++)
        {
           for (j = 0; j < n;j++)
              x=a[i];
              a[i]=a[j];
              a[j]=x;

        }
           for (i = 0; i < n;i++)
            {
            printf("%d\n", a[i]);

        }
}

