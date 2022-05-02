#include<stdio.h>
int main()
{
    int n, i, c;
    printf("Enter the length of array : ");
    scanf("%d", &n);
    int a[n];
    printf("Enter the values of array :\n");
    for (i = 0; i < n; i++)
    {
        printf("Enter value the %d element : ", i+1);
        scanf("%d", &a[i]);
    }
    c = a[0];
    for (i = 1; i < n; i++)
        if (c <= a[i])
            c = a[i];
    printf("The largest no. is : %d", c);
    return 0;
}