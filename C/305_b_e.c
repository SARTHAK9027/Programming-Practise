// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// typedef struct employee
// {
//     int joinyear;
//     char *name;
// } employee;

// int main() {
//     int n;
//     printf("Enter the number of employees: ");
//     scanf("%d", &n);

//     employee arr[n];

//     printf("Enter the current year: ");
//     int current_year;
//     scanf("%d", &current_year);

//     printf("Enter the name and joining year of each employee:\n");
//     for (int a = 0; a < n; a++)
//     {
//         char string[100];  // Temporary buffer for input
//         scanf("%s", string);

//         arr[a].name = malloc(strlen(string) + 1);  // Allocate memory
//         if (arr[a].name == NULL) {
//             printf("Memory allocation failed.\n");
//             return 1;
//         }

//         strcpy(arr[a].name, string);  // this Copy string to memory pointed by arr[a].name
//         scanf("%d", &arr[a].joinyear);
//     }

//     printf("Employees with at least 3 years of service:\n");
//     for (int a = 0; a < n; a++) 
//     {
//         if ((current_year - arr[a].joinyear) >= 3)
//             printf("%s\n", arr[a].name);
//     }

//     // Free allocated memory
//     for (int a = 0; a < n; a++) 
//     {
//         free(arr[a].name);
//     }

//     return 0;
// }
// other way is to use char arr[] in struct which is avoid hustle to make temporary buffer and make dyanmic memory and then copy content of string into memory space pointed by pointer to char array which is char *name becoz using this and %s as speciifer format specifer understand it as pointer to string 

#include<stdio.h>
typedef struct employee
{
    int joinyear;
    char name[15];
}employee;
int main()
{
    printf("enter the number of employee ");
    int n;
    scanf("%d",&n);
    employee arr[n];
    printf("enter the current year");
    int currentyear;
    scanf("%d",&currentyear);
    printf("enter the name and joinig year for each employee\n");
    for(int a=0;a<n;a++)
    {
        scanf("%s",arr[a].name);
        scanf("%d",&arr[a].joinyear);
    }
    for(int a=0;a<n;a++)
    {
        if((currentyear-arr[a].joinyear)>=3)
        printf("%s \n",arr[a].name);
    }
    return 0;
}