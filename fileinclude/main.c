#include <stdio.h>

int count;
extern void write_extern();

int main()
{
count = 5;
while(count--)
{
write_extern();
}
}

