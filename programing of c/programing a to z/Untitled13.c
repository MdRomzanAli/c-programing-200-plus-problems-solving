main(){
int x,n,y,m,i;
float c=1,d=1;
printf("enter X:");
scanf("%d",&x);
printf("enter n:");
scanf("%d",&n);
if(n>0){
    for(i=1;i<=n;i++){
            c=c*x;
}

printf("result:%.2f",c);
}
else if(n<0){
        m=-1*n;
        printf("%d",m);
    for(i=1;i<=m;i++){
            d=d*(1/x);
}


printf("result:%f",d);

}
}
