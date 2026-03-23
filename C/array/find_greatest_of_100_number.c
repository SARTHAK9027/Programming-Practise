#include<stdio.h>
int main()
{
    int array[100];
    for(int a=0;a<=99;a++)
    scanf("%d",&array[a]);
    int greatest=array[0];  // as learned before we can use any variable only after it is intilaize ,so we dont declare greatest as varibale beside array[100] and declare here after getting value in array[100]
    for(int a=1;a<=99;a++) // here we are starting from a=1 bcoz we already store a[0] in greatest so comparison start from next all terms in array from a[1] to a[99]
    {
        if(array[a]>greatest) // only execute  when conditon satify else value in greatest retains till greatest if not found.
        greatest=array[a];
    }
    printf("%d",greatest);
    return 0;
}