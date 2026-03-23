// #include<stdio.h>
// int main()
// {
//     int a,remainder,array[10],i=0;
//     scanf("%d",&a);
//     while(a!=0) // as were are unaware about what number a will have and as per size of array will differ so we used a!=0 as condition so we extract remainder till a become zero on a/2 as we are dividing by 2 so loop will continue till to execute for a=1 where value in a in last iteration is 3 so 3/2 a=1 become as we continue till a==0 become so we again sdo a/2 and assign to a to get a=0 and remainder as 1  and use seperate varibale to maintian index in array
//     {
//         remainder=a%2;
//         array[i]=remainder;
//         a=a/2;
//         i++;
//     }
//     for(i--;i>=0;i--) // as we let any number between range of int to be input so we maintain variable i which track and maintain address of array in which we store binary form so to reverse print it we need to start from address where we end so we started from i-- and went till a[0]
//     printf("%d",array[i]);
// return 0;
// }


//      WITHOUT ARRAY CONVERT INT INTO BINARY
#include<stdio.h>

int main() {
    int a, remainder, sum = 0;
    int i = 1;  // Start i as 1 because you want to accumulate powers of 10 directly
    scanf("%d", &a);

    while (a != 0) {
        remainder = a % 2;
        a = a / 2;
        sum = sum + remainder * i;  // Multiply by the current power of 10 (1, 10, 100, etc.)
        i = i * 10;  // Move to the next decimal place
    }

    printf("%d", sum);

    return 0;
}
