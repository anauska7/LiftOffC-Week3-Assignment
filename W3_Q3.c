#include<stdio.h>
char* oddeven(int i);
int main()
{
    int n;
    printf("Enter a number \n");
    scanf("%d",&n);
    printf("Result: %s \n", oddeven(n));
}
char* oddeven(int n)
{
    if(n%2==0)
       return "Even Number";
    else
        return "Odd number";   
}