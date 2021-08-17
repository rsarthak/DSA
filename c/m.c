#include <stdio.h>
#include <string.h>
void strcat_new(char *a1,char *b1)
{
  if(strlen(a1)>100||strlen(b1)>100)
  {
    printf("String is too large.\n");
  }
  else
  {
  strcat(a1,b1);
  printf("String obtained on concatenation is: %s\n",a1);
  }
}
int main()
{
    char a[100], b[100];
    printf("Enter the first string: ");
    gets(a);
    printf("Enter the second string: ");
    gets(b);
    strcat_new(a,b);
    return 0;
}
