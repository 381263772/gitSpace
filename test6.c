#include <stdio.h>

double getAverage(int *arr, int size);

int main()
{
int balance[5] = {100, 2, 55, 13, 480};

double avg;

avg = getAverage(balance, 5);
printf("Average value is : %f \n", avg);

return 0;
}

double getAverage(int *arr, int size)
{
int i,sum = 0;
double avg;
for(i = 0; i < size; ++i)
{
sum += arr[i];
printf("value of sum %d \n", sum);
printf("value of i %d \n", i);
}
avg = (double)sum/size;
return avg;
}
