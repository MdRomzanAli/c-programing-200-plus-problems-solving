main(){
    char a[100],b[100],c[100];
    int i,j,t,s,k;
    printf("Enter First String: ");
    gets(a);
    printf("Enter Second String: ");
    gets(b);
   t=strlen(a);
   s=strlen(b);
   for(i=0;i<t;i++){
    c[i]=a[i];
   }
   c[i]=' ';
   k=i+1;
   for(j=0;j<s;j++){
    c[k]=b[j];
    k++;
   }
   c[k]=0;
   puts(c);
}
