void A(float *r){
float area,cir;
area=3.1416*(*r)*(*r);
printf("area:%.2f\n",area);
cir=2*3.14*(*r);
printf("circumference:%.2f\n",cir);
}
main(){

float j=5;
A(&j);









}
