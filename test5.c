#include <stdio.h>
#include <time.h>

void getSeconds(unsigned long *par);

int main()
{
unsigned long sec;

printf("address of vaible sec %p \n", &sec);
printf("value of sec %d \n", sec);

getSeconds(&sec);
printf("actually sec value of Number : %ld \n", sec);

return 0;
}

void getSeconds(unsigned long *par)
{
*par = time(NULL);
return;
}
