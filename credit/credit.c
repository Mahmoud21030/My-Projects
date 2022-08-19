#include <cs50.h>
#include <stdio.h>
#include <math.h>

#define NELEMS(x) (sizeof(x) / sizeof((x)[0]))

void checksum(int x);
int sumf(int x);
int getlen(double y);
void digitize(double card);
int array[19];

int main(void)
{
    double  card = get_int("enter Card number");

    digitize(card);
    printf("%d\n", array[0]);
   //  checksum(card);

}

void checksum(int x)
{
    int sum = 0;
    int l = getlen(x);
    for (int i = l - 2; i >= 0; i -= 2)
    {
        sum += sumf(2*array[i]);

    }

 printf("%i\n", sum);
    return;
}

int getlen(double y)
{
    if (y < 1)
        return 1;
    else
    {
        return ceil(log10(y + 0.0001));
    }
}

void digitize(double card)
{
    int l = getlen(card);
    for (int i = 0; i < l; i++)
    {
        array[i] = card / pow(10, (l - i - 1));
        card = card - array[i] * pow(10, (l - i - 1));
    }
}


int sumf(int x)
{   int remainder=0;
    int sum = 0;
    while (x != 0)
   {
      remainder = x % 10;
      sum       = sum + remainder;
      x         = x / 10;
   }

 printf("%i\n", sum);
    return sum;
}