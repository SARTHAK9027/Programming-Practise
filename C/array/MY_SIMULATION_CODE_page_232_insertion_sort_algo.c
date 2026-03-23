#include<stdio.h>
int main()
{
    int size;
    printf("give array size");
    scanf("%d",&size);
    int arr[size];
    printf("enter array elements");
    for(int a=0;a<size;a++)
    scanf("%d",&arr[a]);
    int i,j,temp,index;
    for(int a=1;a<size;a++)
    {
        i=arr[a-1];
        j=arr[a];
        index=a-1;
        if(j<i)
        {
            temp=arr[a];
            printf("index of j is %d and value is %d\n",index+1,temp);
        while(temp<arr[index]&&index>=0)
       {
            arr[index+1]=arr[index];
            printf("index is %d so index+1 is %d and value in index+1 is %d\n",index,index+1,arr[index+1]);
            index--;
       }
       index++;
       arr[index]=temp;
       printf("value finally placed at index %d and value in it is %d\n",index,arr[index]);
       printf("----------------------------------------------------------------\n");
        }
       
    }
    for(int a=0;a<size;a++)
    printf("%d",arr[a]);
return 0;

}