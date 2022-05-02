#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter two integers \n");
    scanf("%d%d",&a,&b);
    printf("GCD of the entered integers = %d",gcd(a,b));
    return 0;
}
int gcd(int a, int b)
{
    if(b!=0)
       return gcd(b, a%b);
    else
       return a; 
}