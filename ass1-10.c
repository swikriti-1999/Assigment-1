#include<stdio.h>
int main()
{
    int date,month,year;
    printf("Enter the date,month and year in DD/MM/YY formate");
    scanf("%d/%d/%d",&date,&month,&year);
    printf("\n Entered date is : Date-%d , Month-%d , Year-%d",date,month,year);
    return 0;
}