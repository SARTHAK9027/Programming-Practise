#include<stdio.h>
int stringlenght(char *ptr)
{
    int i=0;
    while(ptr[i]!='\0')
    {
        i++;
    }
    return i;
}
int main()
{
    char string[100];
    printf("you can enter string having maximum 100 characters considering space as character\nplease enter you string\n");
    gets(string);
    int lenghtofstring=stringlenght(string);
    printf("the lenght of entered string from user via array of char in which inout stored is %d\n",lenghtofstring);
    int functionforprogrammer=stringlenght("SARTHAK is my name");  
    printf("the lenght of entered string from programmer directly in function is %d",functionforprogrammer);
    return 0;
}