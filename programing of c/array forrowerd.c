main()
{ int n,i,t;
printf("Array size:");
scanf("%d",&n);
int ara[n];
for(i=0;i<n;i++)
{  printf("index%d:",i);
    scanf("%d",&ara[i]);

    }
t=ara[n-1];
for(i=n-1;i>=1;i--){
ara[i]=ara[i-1];

}
ara[0]=t;
printf("\n");
for(i=0;i<n;i++){
printf("index:%d=%d\n",i,ara[i]);
}












}
