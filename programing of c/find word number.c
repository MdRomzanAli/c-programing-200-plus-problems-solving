main(){
char t[80],ch;
int n,i,p;
p=-1;
gets(t);
n=strlen(t);
scanf("%c",&ch);
for(i=0;i<=n-1;i++)
{ if(ch==t[i]){
p=i;
break;
}
}
 if(p==-1)


printf("not found");

else
  printf("%d",p);
  }
