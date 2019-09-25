#include <stdio.h>

int main()
{
int var = 3000;
int *pr;
int **ppr;

pr = &var;
ppr = &pr;

printf("value of var : %d \n", var);
printf("value of *pr : %d \n", *pr);
printf("address value of pr : %p \n", pr);
printf("value of **ppr : %d \n", **ppr);
printf("address  value of ppr : %p \n", ppr);

return 0;
}
