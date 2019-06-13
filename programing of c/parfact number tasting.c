int parfact(int N){
int s=0,i;

for(i=1;i<N;i++){
if(N%i==0){
s=s+i;
}
}
if(s==N)
return 1;
else
return 0;
}
main(){
    int x,y,z;
printf("inter a number:");
scanf("%d",&x);
y=parfact(x);
if(y==1)
    printf("YES");
else
    printf("NO");

}
