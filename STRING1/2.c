#include <stdio.h>
int main()
{
    char a[20];
    printf("enter any string :");
    scanf("%s", &a);
    for (int i = 0;a[i] !='\0'; i++)
    {
        if (a[i] >= 'A' && a[i] <= 'z')
        {
            a[i] += 32;
        }
        else if (a[i] >= 'a' && a[i] <= 'z')
        {
            a[i] -= 32;
        }
    }
    printf("%s",a);
}