#include<stdio.h>
double circumference(double x);
int main(){
double x,result;
printf("intre the redious:");
scanf("%lf",&x);
result=circumference(x);
printf("the circumference of the circle is:%lf",result);

}
double circumference(double r){
return 2*3.1416*r;


}
