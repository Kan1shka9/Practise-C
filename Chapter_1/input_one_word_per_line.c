#include<stdio.h>

int main(void)
{
  int c;

  while ((c = getchar()) != EOF)
  {
    if (c == ' ')
    {
      putchar('\n');
    }
    else
    {
      putchar(c);
    }
  }
}
