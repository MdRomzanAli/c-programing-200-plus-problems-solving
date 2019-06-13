main(){
    int m,n;
    scanf("%d",&m);
   scanf("%d",&n);
int i,j,matrix[m][n];
for(i=0;i<m;i++)
for(j=0;j<n;j++){
scanf("%d",&matrix[i][j]);

}
for(i=0;i<m;i++){
for(j=0;j<n;j++){
printf("%d\t",matrix[i][j]);
}
printf("\n");



}
}
