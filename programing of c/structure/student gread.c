typedef struct{
 char g[80];
 float m[10];
 int i;
}std;
char g( float x){
char g;
  if(x>=90) g='A';
   else if(x>=80) g='B';
   else if(x>=70) g='C';
    else if(x>=60) g='D';
    else g='F';
    return g;
   }




main(){
std a;
char e;
int j;
printf("id:");
scanf("%d",&a.i);
for(j=0;j<=1;j++){
printf("enter mark %d subject:",j+1);
scanf("%f",&a.m[j]);
}
for(j=0;j<=1;j++){
a.g[j]=g(a.m[j]);
printf("%d subject grades:%c\n",j+1,a.g[j]);
}
}









