main(){
int n,y,m,c=0,i;
printf("enter n1:");
scanf("%d",&n);
printf("enter n2:");
scanf("%d",&m);
for(i=n;i<=m;i++){
if(i%3==0&&i%5!=0)
c++;
}
printf("%d numbers",c);
}
