main(){
int n,y,m,c=0,i;
printf("enter N:");
scanf("%d",&n);
for(i=1;i<=n;i++){
if(n%i==0){
if(i%2!=0)

c=c+i;
}
}
printf("the sum is:%d ",c);
}
