/*
Enter the number : -3
$ * $ * $ *
*/
#include<stdio.h>
void Patten(int iNo)
{
    int iCnt = 0 ; 
    for (iCnt = 0 ; iCnt < -iNo ; iCnt ++)
    {
        printf("$\t*\t");
    }
    printf("\n");

}
int main()
{
    int iValue = 0 ; 
    printf("Enter number");
    scanf("%d",&iValue);

    Patten(iValue);

    return 0 ; 
}

// Write a program which accpet number from user and print number till that number :
/*
Input : 8 
Output : 1 2 3 4 5  6 7 8  

*/
#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0 ; 
    for(iCnt = 1 ; iCnt <= iNo ; iCnt ++)
    {
        printf("%d\t",iCnt);
    }
}
int main()
{
    int iValue = 0 ;

    printf("Enter number :");
    scanf("%d",&iValue);

    Display(iValue);

    return 0 ; 
}
Enter Number : 8 
1 2 3 4 5 6 7 8


// 3.Write a program which accpet number from user and print its number line
/*
Input : 4
Output : -4 -3 -2 -1 0 1 2 3 4  
*/
#include<stdio.h>
void Display(int iNo)
{
    int iCnt = 0 ; 
    for(iCnt = -iNo ; iCnt <= iNo ; iCnt++)
    {
        printf("%d\t",iCnt);
    }
    for(iCnt = iNo ; iCnt <= iNo ; iCnt ++)
    {
        printf("%d\t",iCnt);
    }
}
int main()
{
    int iValue = 0 ; 
    printf("Enter Number :");
    scanf("%d",&iValue);

    Display(iValue);

    return 0 ; 
}

Enter Number : 4
-4 -3 -2 -1 0 1 2 3 4 


// 4. Write a program which accpet N from user and print all odd Number up to N .
/*
Input : 18 
Output : 1 3 5 7 9 11 13 
*/

#include<stdio.H>
void OddDisplay(int iNo)
{
    int iCnt = 0 ; 
    for(iCnt = 0 ; iCnt < iNo ; iCnt ++)
    {
        if(iCnt % 2!=0)
        {
            printf("%d\t",iCnt);
        }
    }
}
int main()
{
    int iValue = 0 ; 
    printf("Enter Number :");
    scanf("%d",&iValue);

    OddDisplay(iValue);

    return 0 ; 
}

Enter Number : 18
1 3 5 7 9 11 13


// 5 .Write a program which accpet N and print first 5 multiplication of N 
/*
inpur : 4
output 4 8 12 16 20 
*/
#include<stdio.h>
void MultipleDisplay(int iNo)
{
    int iCnt = 0 ; 
    for(iCnt = 1 ; iCnt <= iNo ; iCnt++)
    {
        printf("%d\t",iCnt*4);
    }
}
int main()
{
    int iValue = 0 ; 
    printf("Enter number :");
    scanf("%d",&iValue);

    MultipleDisplay(iValue);
    return 0 ; 
}

Enter Number : 5
4  8  12  16  20

