#include<stdio.h>

int callbyvalue(int a, int b)
{
    a++;
    b++;
    int sum = a+b;
    return sum;
}

int callbyref(int *c, int *d)
{
    (*c)++;
    (*d)++;
    int sum = *c+*d;
    return sum;
}

int main()
{
    int x=4;
    int y=9;
    int u=3;
    int v=5;

    printf("Using call by value, sum is:\n");
    printf("%d\n",callbyvalue(x, y));
    printf("Now x=%d and y=%d\n",x,y);

    printf("Using call by reference, sum is:\n");
    printf("%d\n",callbyref(&u,&v));
    printf("Now u=%d and v=%d",u,v);

    return 0;
}