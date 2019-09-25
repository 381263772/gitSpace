#include <stdio.h>

int main()
{
int var = 20;
int *p;
p = &var;
printf("address of var varible : %p \n", &var);
printf("address of p varible : %p \n", p);
printf("address of *p varible : %p \n", *p);
return 0;
}
