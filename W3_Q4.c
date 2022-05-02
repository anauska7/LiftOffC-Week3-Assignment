#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter two numbers \n");
    scanf("%d%d", &a,&b);
    printf("Before swapping X=%d and Y=%d \n",a,b);
    swap (a,b);
    return 0;
}
void swap(int a, int b)
{
    int c;
    c=a;
    a=b;
    b=c;
    printf("After swapping X=%d and Y=%d \n", a,b);
}