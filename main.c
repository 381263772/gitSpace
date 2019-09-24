#include <stdio.h>
#include <float.h>

int main()
{
printf("float size : %lu \n",sizeof(float));
printf("float min size : %E \n", FLT_MIN);
printf("float max size : %E \n", FLT_MAX);
printf("float : %d \n", FLT_DIG);

return 0;
}

