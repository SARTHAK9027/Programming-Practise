#include<stdio.h>
typedef struct student
{
    int rollno;
    char name[10];
    char department[10];
    int year;
}student;
void printbyyear(student *arr,int year)
{
    int a;
    for(a=0;a<3;a++)
    if( (arr+a)->year==year)
    printf("%s \n",arr[a].name);
}
void printroll(student *arr,int roll)
{
    int a;
    for(a=0;a<3;a++)
    if( arr[a].rollno==roll) // using subscript  below used -> operator
    break;
    printf("rollno is %d name is %s department is %s year is %d",(*(arr+a)).rollno/*here it used college wallah appraoch*/,(arr+a)->name,(arr+a)->department,(arr+a)->year);
}
int main()
{
    student arr[3]={1,"sarthak","cs",2002,2,"sachin","hsc",2000,3,"seema","ssc",2000};
    printf("enter the year for which you want to know the name of students how joined in that year");
    int year;
    scanf("%d",&year);
    printbyyear(arr,year);
    printf("enter the roll no for which you want to know the data of student ");
    int roll;
    scanf("%d",&roll);
    printroll(arr,roll);
    return 0;
}
// as struct array is 1d array and array name is pointer to 1st element of arrray i.e pointer to 1st structure os structure array so arr+a will point to each structure indexes and to access that strcutre via pointer we use -> operator so above we written (arr+a)-> this approach to use pointer to structure to extract value it point at that address learned from book
// you on passing struct array as argument use arr name subscript like  normally in other data type array we do , we use subscript so here also struct is type so use array subscript is valid
// another approach learned from college wallah (*strcture pointer) above arr+a is pointer arithmatic to give poniter to entire is bracket and then used * then bracket entire (*(arr+a)).rollno