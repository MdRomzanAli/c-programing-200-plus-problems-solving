int Counter(int A[],int M){
int c=0,i;
for(i=0;i<a;i++){
if(A[i]>=M){
c++;
}
}
return c;
}
void main(){
int X,i,j,z;
printf("Integer:");
scanf("%d",&X);
printf("Number of integer to be compared with:");
scanf("%d",&j);
int N[j];
for(i=1;i<=j;i++){
printf("integer %d:",i);
scanf("%d",&N[i]);
}
z=Counter(N,X);

if(z>0)
    printf("%d",z);
else
    printf("not found");




}
