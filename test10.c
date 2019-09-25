#include <stdlib.h>
#include <stdio.h>
#include <time.h>

void populate_array(int *array, size_t arraySize, int (*getNextValue)(void));

int getNextRandomValue(void);

int main()
{
int marray[10];
populate_array(marray, 10, getNextRandomValue);
int i;
for(i = 0; i < 10; i++)
{
printf("%d \n", marray[i]);
}
return 0;
}

void populate_array(int *array, size_t arraySize, int (*getNextValue)(void))
{
size_t i;
for(i = 0; i < arraySize; i++)
{
array[i] = getNextValue();
}
}

int getNextRandomValue(void)
{
//srand((unsigned)time(NULL) * 10);
return rand();
}
