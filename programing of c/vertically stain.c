#include <windows.h>
main()
{
char s[80];
int n,length,i;
printf("Enter a Sentence:");
gets(s);

length = strlen(s);
for(i = 0; i < length; i++)
{
printf(" %c\n",s[i]);
Sleep(1000);
}
}
