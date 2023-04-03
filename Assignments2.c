#include <stdio.h>
void main()
{
char str[]= { "\0"};

if (printf("%s", str))
printf("\nString is not empty\n");
else
printf("\nString is empty\n");
}