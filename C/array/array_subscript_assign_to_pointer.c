
//---------------------    CODE 1    ----------------------------------------------
// #include<stdio.h>
// int main()
// {
//     int arr[3][2]={1,2,3,4,5,6};
//     int *p=arr[1]; 
//     printf("the value at 2nd row 1st element is %d\n",p[0]);
//     printf("the value at 2nd row 1st element is %d\n",*p);
//     printf("the value at 2nd row 2st element is %d\n",p[1]);
//     printf("the value at 2nd row 2st element is %d\n",*(p+1));
//     printf("the value at 3nd row 1st element is %d\n",p[2]);
//      printf("the value at 3nd row 1st element is %d\n",*arr[2]); //  arr[2] gives address so array name act as pointer
//      printf("the value at 3nd row 1st element is %d\n",arr[2][0]);
//     return 0;
// }

//    keytake away: we when we use subscript is expression or assign to normal variable compiler automatically treat it as variable but when we assign it to pointer and use pointer variable as variable name then it act as address to array implicitly and when dont use subscipt format then we must use derefernce to access that element in array


// -------------------  CODE 2   -------------------------------------------------------------
#include<stdio.h>
int main()
{
    int arr[3][2]={1,2,3,4,5,6};
    int *p=&arr[0][0]; // arr[0][0] on assiging give error because arr[0][0] give value while whil in arr[0] give address so it valid but both mention all dimension is return value not address ,so use of 1st dimension , arr name only and using 7 are way to give address
    printf("value at 1st element is %d",*p);
    return 0;
}