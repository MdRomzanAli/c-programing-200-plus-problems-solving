int C(int A[], int a, int M){
   int c=0,i;
   for(i=0;i<a;i++){
    if(A[i]>=M){
        c++;}
   }
   return c;
}
void main(){
   int X,j,i,c=1,t;
   printf("Integer: ");
   scanf("%d",&X);
    printf("Number of integers to be compared with: ");
       scanf("%d",&j);
  int N[j];
    for(i=0;i<j;i++){
    printf("Integer %d: ",c);
     scanf("%d",&N[i]);
     c++;
    }
    t=C(N,j,X);
   if(t>0)printf("%d",t);
   else
   printf("Not Found");
}
