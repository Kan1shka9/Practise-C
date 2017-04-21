#include<stdio.h>

// Where 9 can be replaced by any non blank ' '
#define NOTBLANK '9'

int main(void)
{
  int c,last_c;

  last_c = NOTBLANK;

  while ((c = getchar()) != EOF)
  {
    if (c == ' ')
    {
      if (last_c != ' ')
      {
        putchar(c);
      }
    }
    else
    {
      putchar(c);
    }
    last_c = c;
  }

}
