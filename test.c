#include <stdio.h>

int x;
int y;

int addCount()
{

extern int x;
extern int y;

x = 2;
y = 3;

return x + y;
}

int main()
{
int result;
result = addCount();
printf("result is %d \n", result);

return 0;
}
