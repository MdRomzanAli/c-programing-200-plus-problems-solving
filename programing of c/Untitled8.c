int main()
{
  char a[100], b[100];

  printf("Enter a string ");
  gets(a);

  b[100]=a;

  if (a==b)
    printf("The string is a palindrome.\n");
  else
    printf("The string isn't a palindrome.\n");


}
