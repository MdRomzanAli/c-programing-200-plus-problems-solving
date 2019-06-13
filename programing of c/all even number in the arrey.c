main()
{
    int i,x,n;
printf("how many number:");
scanf("%d",&n);
int a[n];

 for(i=0;i<n;i++){

  printf("enter   value a[%d]:",i);
   scanf("%d",&a[i]);
   }
  for(i=0;i<n;i++){
    x=a[i];
    if(x%2==0){
        printf("%d\n",a[i]);
    }

  }






}
