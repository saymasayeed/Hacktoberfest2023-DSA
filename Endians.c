#include<stdio.h>
#include<inttypes.h>
union tag
{
    char a;
    int b;
};

int main()
{
    union tag v={1};
    if(v.b==1)
        printf("Little Endian");
    else
        printf("Big Endian");
    return 0;
}
