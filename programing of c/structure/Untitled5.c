typedef struct {
int id;
float m;
char g;
} student;
char findGrade(float p){
char g;
if(p >= 90) g = 'A';
else if (p >= 80) g = 'B';
else if (p>= 70) g = 'C';
else if (p >= 60) g = 'D';
else g = 'F';
return g;
}
main(){
student s;
printf("Enter ID: ");
scanf("%d",&s.id);
printf("Enter Mark: ");
scanf("%f",&s.m);
s.g = findGrade(s.m);
printf("ID: %d Mark: %f  Grade: %c", s.id, s.m, s.g);
}
