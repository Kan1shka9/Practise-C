#include<stdio.h>

int main(void)
{
  int c;

  while ((c = getchar()) != EOF)
  {
    if (c == '\n' || c == ' ' || c == '\t')
    {
      putchar('\n');
    }
    else
    {
      putchar('*');
    }
  }
}
