#include<stdio.h>
typedef struct{
int id;
int age;
float salary;

}emp;
float highestsalary(emp p[],int n){
float h;
int i;
h=p[0].salary;
for(i=1;i<n;i++){
if(h<p[i].salary){
h=p[i].salary;
}
}return h;
}


void main(){
int i,n;
float h;
printf("how many employee:");
scanf("%d",&n);
emp s[n];
for(i=0;i<n;i++){
printf("%d.employee number:",i+1);
scanf("%d",&s[i].id);
printf("employee age:");
scanf("%d",&s[i].age);
printf("employee salary:");
scanf("%f",&s[i].salary);

}
h=highestsalary(s,n);
printf("hight salary is:%.2f",h);




}
