#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
srand((unsigned)time(NULL) * 10);
int i = 1;
for(; i < 10; i++)
{
int num = rand() % 50 + 1;
printf("%d ", num);
}
printf("\n");
return 0;
}
