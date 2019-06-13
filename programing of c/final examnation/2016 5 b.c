int honai(int n){
int h;
if(n==1)
return 1;
else{
return 2*honai(n-1)+1;
}


}
void main()
{
int x;
scanf("%d",&x);
int a;
a=honai(x);
printf("%d",a);


}
