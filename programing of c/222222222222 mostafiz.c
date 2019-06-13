main()
{ char s[80],t[80];
 int i,j,l1,l2;

  printf("enter first string:");
  gets(s);
  l1=strlen(s);

   printf("enter first string:");
  gets(t);
  l2=strlen(t);

   for(i=0;i<l1;i++){}
   s[i]=' ';
   i++;


   for(j=0;j<l2;j++){
   s[i]=t[j];
  i++;

   }
    s[i]='\0';
    printf("\n concatenated string is:%s",s);

}
