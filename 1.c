#include <stdio.h>
void main()
{
    int size;

    printf("enter array size");
    scanf("%d", &size);
    int arr[size];

    for (int i = 0; i < size; i++)
    {
        printf("enter elements[%d]", i);
        scanf("%d",&arr[i]);
    }

    for (int i = 0; i <=size; i++)
    {

        if (arr[i] < 0)
        {
            printf("NEGATIVE ELEMENTS%d\n", arr[i]);
        }
    }
}
