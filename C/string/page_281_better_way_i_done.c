#include<stdio.h>
#include<stdlib.h>
int main()
{
    char *arr[4];
    for(int a=0;a<4;a++)
    {
        arr[a]=(char *)malloc(20);
        printf("enter the student name : ");
        scanf("%s",arr[a]);
    }
    for(int a=0;a<4;a++)
    {
        printf("student name is %s\n",arr[a]);
    }
    return 0;
}