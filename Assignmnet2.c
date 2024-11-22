// 1 .Aceept one numebr form user and print that number of * on screen 

#include<stdio.h>
void Display (int iNo)
{
    int iCnt =0;
    // write updater 
    while (iCnt<1)
    {
        printf("*");
        iCnt++;
    }
}
int main()
{
    int iValue = 0;

    printf("Enter number:");
    scanf("%d",&iValue);

    Display(iValue);
    return 0;
}



// 2.Accept one number from user and print the number of * on screen.

#include<stdio.h>
void Display (int iNo)
{
    // write updater
    while(iNo>0)
    {
        printf("*");
        iNo--;
    }
}
int main()
{
    int iValue = 0;
    printf("Enter number:");
    scanf("%d",&iValue);

    Display(iValue);
    return 0;
}



// 3 Accept on number from user if  number is less than 10 then print "Hello" otherwise print"Demo
#include<stdio.h>
void Display(int iNo)
{
    if(iNo<10)
    {
        printf("Hello");
    }
    else 
    {
    printf(" Demo");
    }
}
int main()
{
    int iValue = 0;
    printf("Enter number :");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}



// 4. accept two numbers from user and dsiplay first number in second number of times .
#include<stdio.h>
void Display(int iNo,int iFrequency)
{
    int iCnt = 0;
    // write updater
    for (iCnt=1;iCnt<=iFrequency;iCnt++)
    {
        printf("%d\n",iNo);
    }
}
int main()
{
    int iValue = 0;
    int iCount = 0;

    printf("Enter Number:");
    scanf("%d",&iValue);

    printf("Enter frequency:");
    scanf("%d",&iCount);

    Display(iValue,iCount);
    return 0;
}


// 5. Accept number from user and check whether number is even or odd.
#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkEven(int iNo)
{
    if(iNo%2==0)
    {
        printf("Even");
    }
    else
    {
        printf("odd");
    }    
}
int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter number:");
    scanf("%d",&iValue);

    bRet = ChkEven(iValue);
    // Display result
    return 0;
}