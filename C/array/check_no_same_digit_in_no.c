
//      ***** optimal way *****
#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d",&a);
    int a2[10]={0};
    while(a!=0)
    {
        b=a%10;
        a2[b]++; // keytakeaway update value in array at respective index as per digit so after when on multiple occureance as we update value in array due to which the number of occurance count is maintined , as substrcipt represent value at that location as he mention dimension to represent address of particular element in data so 
        if(a2[b]==2)
        break;
        a=a/10;
    }
    if(a!=0) // in last digit extraction also we check does last digit extracted digit respective index has count less than 2 if no we exit else we update value of a to 0 as it is last digit extracted so on next iteration condition fail to exit loop
    printf("there is multiple occurance of digit");
    else
    printf("there is unique occurance of digit");
return 0;
}