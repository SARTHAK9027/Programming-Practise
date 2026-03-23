#include<stdio.h>
void retrieveleft(int arr[],int right)
{
    int i=0;
    printf("retrieve data is %d\n",arr[i]);
    while(i<=right-1)
    {
        arr[i]=arr[i+1];
        i++;
    }
    arr[i]=0;   // to assign zero to right most index value as on left retrive all index shift left so duplicate value get to seen eg 123 on left retrive become 233 here we loop til right-1 so failed to remove 3 from it intial index before left retrive so assigned arr[i]=0
}
void retrieveright(int arr[],int right)
{
    printf("retrieve data is %d\n",arr[right]);
    arr[right]=0;
}
void insertright(int arr[],int right)
{
    printf("enter value");
    scanf("%d",&arr[right]);
}
void insertleft(int arr[],int right)
{
   while(right>=0)
   {
        arr[right+1]=arr[right];
        right--;
   }
   printf("enter value");
   scanf("%d",&arr[0]);
    
}
int main()
{
    int size;
    char input;
    printf("enter the array size");
    scanf("%d",&size);
    int arr[size];
    int left =0,right=0;
    do
    {
        int choice;
        printf("enter your choice\nyour choice are \n1]retrieveleft\n2]retreiveright\n3]insertleft\n4]insertright\n5]printarray\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            retrieveleft(arr,right-1);
            right--;
            break;
            case 2:
            retrieveright(arr,right-1);
            right--;
            break;
            case 3:
            insertleft(arr,right-1);
            right++;
            break;
            case 4:
            insertright(arr,right);
            right++;
            break;
            case 5:
            for(int a=0;a<=right-1;a++)
            printf("%d",arr[a]);
            printf("\n"); // as last case so no need of default or break,control see } so it implicitly exit
        }
        if(right==size)
        printf("array is full dont do insert operation only retrieve is allowed\n");
        else if(right==left)
        printf("array is empty\n");
        printf("print y in lowcase if continue or n in lowcase if exit \n");
        fflush(stdin);
        scanf("%c",&input);
    }
    while(input=='y');
    return 0;
}