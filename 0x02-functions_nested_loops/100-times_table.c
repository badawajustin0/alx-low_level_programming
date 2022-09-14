#include "main.h"
/**
* times_table - Prints the 15 times table, starting with 0.
*/
void times_table(void)
{
int n,m,z;
for(n=0;n<=15;n++)
{
for(m=0;m<=9;m++)
{
z = n*m;
printf ("%d,..",z);
}
printf("\n");
}
}
