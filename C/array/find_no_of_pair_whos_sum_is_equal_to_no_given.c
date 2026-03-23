//          COLLEGE WALLAH SUM

#include<stdio.h>
int main()
{
    int arr[8]={1,8,2,7,3,6,4,5};
    int number=12;
    // for(int *a=arr;a<=&arr[7];a++)
    // {
    //     for(int *b=arr;b<=&arr[7];b++)
    //     {
    //         if((a==b))                           //****************** APPROCH USING POINTER TO ARRAY********************
    //         continue;
    //         else if((*a)==0)
    //         break;
    //         else
    //         {
    //             if(*a+*b==number)
    //             {
    //                 printf("%d %d \n",*a,*b);
    //                 *b=0;
    //                 break; // break bocz further in array there is only possiblity if same value of b with high index in array then current b will make sum but that pair is not unique as already we encountered it.
    //             }
    //         }
    //     }
    // }
    for(int a=0;a<=7;a++)
    for(int b=0;b<=7;b++)
    {
        if(arr[a]==arr[b])
        continue;
        else if(arr[a]==0)                           //****************** APPROCH USING index TO ARRAY to aceess value********************
        break;
        else
        {
            if(number==arr[a]+arr[b]) // as lvalue cannot have epression which evaluate to generate result so arr[a]+arr[b] is on rhs
            {
                 printf("%d %d \n",arr[a],arr[b]);
                 arr[b]=0;
                 break;
            }
        }
    }
    return 0;
}