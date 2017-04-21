#include<stdio.h>

// http://stackoverflow.com/questions/17745745/exercise-1-6-kr-how-to-verfiy-that-getchar-eof-is-0-or-1

int main ()
{
    int c;
    char value = ((c = getchar()) != EOF);
    while (value)
    {
        printf("%d\n", c);
        value = ((c = getchar()) != EOF);
    }
    return 0;
}
