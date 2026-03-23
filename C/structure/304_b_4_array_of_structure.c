#include<stdio.h>
int main()
{
    typedef struct cricketer
    {
        char name[15];
        int age;
        int noOfmatch;
        float averagerun;
    }cricketer;
    cricketer arr[3];
    printf("enter the data for each attributes of each cricketer\n");
    for(int a=0;a<3;a++)
    {
        printf("enter name of %d cricketer",a+1);
        scanf("%s",arr[a].name);        // takeaway as name is character array so it default is pointer so we not use & here to access it inside array bcoz arr[a].name give address itself
        printf("enter age of %d cricketer",a+1);
        scanf("%d",&arr[a].age);
        printf("enter noOfmatch of %d cricketer",a+1);
        scanf("%d",&arr[a].noOfmatch);
        printf("enter average run of %d cricketer",a+1);
        scanf("%f",&arr[a].averagerun);
    }
    for(int a=0;a<3;a++)
    {
        printf("name of cricketer is %s\n",arr[a].name);
        printf("age of his %d\n",arr[a].age);
        printf("noOfmatch of match he played %d\n",arr[a].noOfmatch);
        printf("average of his is %f\n",arr[a].averagerun);
        printf("\n");
    }
    return 0;
}
// if you want to get string from input having space in between then use gets function instead of scanf read string in let us c there it mentioned