main(){

int i,j,m,n;
scanf("%d",&m);
scanf("%d",&n);
int a[m][n];
for(i=0;i<m;i++)
for(j=0;j<n;j++){
scanf("%d",&a[i][j]);

}
for(i=0;i<m;i++){
for(j=0;j<n;j++){
printf("%d\t",a[i][j]);

}
printf("\n");
}
int sum=0;
for(i=0;i<m;i++)
for(j=0;j<n;j++){
if(i==j){
    sum=sum+a[i][j];
}

}
printf("the diogonal valur is:%d",sum);

}
