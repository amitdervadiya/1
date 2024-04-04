#include<stdio.h>
int main(){
     char a[15];
    printf("enter any string in capital words:");
    scanf("%s",&a);
    for (int i = 0; i < a[i] !=NULL; i++)
    {
        if (a[i]>='A'&& a[i]<='Z')
        {
            a[i]+=32;
        }
            printf("%c",a[i]);

    }
   
}