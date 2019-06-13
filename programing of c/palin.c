main(){
    char a[80],t[80];
   int i,j=0,b,c;
   printf("Enter a string:");
   gets(a);
   b=strlen(a);

   j=b-1;

   for(i=0;i<b;i++){
     t[i]=a[j];
     j--;
   }
   for(i=0;i<b;i++){
   if(t[i]!= a[i])
   break;
   }
   if(i==b)
    printf("palindrome");
   else{
   printf("It is not Palindrome.");
   }
}
