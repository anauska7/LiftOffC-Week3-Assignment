#include<stdio.h>
int main()
{
    int n,check;
    printf("Enter a number \n");
    scanf("%d",&n);
    if(n==1 || n==0)
       {
           printf("Not a prime number \n");
           return 0;
       }
    check=prime(n,n/2);
    if(check==1)
       printf("Prime number \n");
    else   
       printf("Not a prime number \n");
       return 0;
}

int prime(int n, int i)
{
    if(i==1)
       return 1;
    else
        {
            if(n%i==0)
               return 0;
            else
                return prime(n,i-1);   
        }   
}