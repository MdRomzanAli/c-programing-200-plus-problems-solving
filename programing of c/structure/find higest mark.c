typedef struct{
int id;
float m;
char g;
}student;
float findhigest(student p[],int n){
float h;
int i;
h=p[0].m;
for(i=1;i<n;i++){
if(h<p[i].m)
 h=p[i].m;
}
return h;

}
main(){
int n,i;
float h;
printf("How Many students?");
scanf("%d",&n);
student s[n];

for(i =0; i <n; i++){
printf("Enter ID: ");
scanf("%d",&s[i].id);
printf("Enter Mark: ");
scanf("%f",&s[i].m);
}
h=findhigest(s,n);
printf("highest marks:%.2f",h);
}
