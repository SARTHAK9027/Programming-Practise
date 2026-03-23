#include<stdio.h>
#include<string.h>
int main()
{
    struct book
    {
        char name[10];// as we can make variable lenght array but while declaring strcture you making new data type so you need to mention all it thing which are compile time compatible so we need to mention length of array when we are using in struct
        float price;
        int nopages;
    } a,b,c; // ******** here we are declaring struct variable while declaring struct prototype so intilaization can be done here or else from next statement it will considered as assignment as when we declare structure variable the prototype attributed of strcture get memory as here struct has array in it so it get memory i.e declare so as we can only intialize array name to point to particular string in memory later only we can change value in array ************
    // a.name="letusc";  // bcoz array name is constant pointer and it can only initialize to point to particular location and cannot be assign which we do when assign string literal which is base address ,you can only assign values to it indexes which is done using strcpy here you can use loop or individualy assign values to indexes as well
    strcpy(a.name,"letusc"); 
    a.price=350;
    a.nopages=400;
    printf("%f\n",a.price);
    printf("%d\n",a.nopages);
    printf("%s\n",a.name);
    //--------------------  below we fill data in structure variable attributed from user input    ------------------------
    printf("\nenter the data for b object\n");
    printf("enter the price for b: ");
    scanf("%f",&b.price);
    printf("enter the nopages for b: ");
    scanf("%d",&b.nopages);
    printf("enter the name for b: ");
    scanf("%s",b.name); // here we are asssigning value inside name char array so allowed 
    printf("%f\n",b.price);
    printf("%d\n",b.nopages);
    printf("%s\n",b.name);
    return 0;

}