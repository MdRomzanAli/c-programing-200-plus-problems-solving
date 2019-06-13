typedef struct{
 int  f;
 int i;

 }height;
 main(){
 int d;
 height p1,p2,r;
 printf("Enter height of first person:\n Feet: ");
scanf("%d",&p1.f);
 printf("Inch: ");
scanf("%d",&p1.i);

  printf("Enter height of second person:\n Feet: ");
scanf("%d",&p2.f);
 printf("Inch: ");
scanf("%d",&p2.i);
 d=(p1.f-p2.f)*12+(p1.i-p2.i);
 if (d < 0) d = -d;
r.f = d/12;
r.i = d%12;
 printf("Height difference %d feet %d inch",r.f,r.i);

 }
