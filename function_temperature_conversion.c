#include<stdio.h>

#define UPPER 300
#define LOWER 0
#define STEP 20

void fahr2Celsius(void);
void Celsius2fahr(void);

int main(void)
{
  int c;

  printf("Temperature Conversion Table");
  printf("1 - Fahrenheit to Celsius Conversion\n");
  printf("2 - Celsius to Fahrenheit Conversion\n");
  printf("Enter 1 or 2 : ");

  c = getchar();

  if (c == '1')
  {
    fahr2Celsius();
  }
  else if (c == '2')
  {
    Celsius2fahr();
  }
  else
  {
    printf("Invalid Choice\n");
  }
}

void fahr2Celsius()
{
  float fahr;

  for (fahr = LOWER; fahr <= UPPER; fahr += STEP)
  {
    printf("%3.0f%6.1f\n",fahr,(5.0/9.0)*(fahr-32.0));
  }
}

void Celsius2fahr()
{
  float celsius;

  for(celsius=LOWER; celsius<=UPPER; celsius += STEP)
  {
    printf("%3.0f%6.1f\n",celsius,(9.0*celsius)/5.0+32);
  }
}
