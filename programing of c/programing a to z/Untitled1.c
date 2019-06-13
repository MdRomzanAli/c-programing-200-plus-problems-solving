main(){
int x,n,y,m,i,d=1;
float c=1;
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
if(n<0){
   m=-1*(n);
    for(i=1;i<=m;i++){
            c=1*(c/x);
}





printf("%f",c);

}
}
