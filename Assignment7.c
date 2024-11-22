

// 1 . Write a program which accept number from user and Display below patten .
// input 5 output *****#####
#include<stdio.h>
void Display(int iNo)
{ 
    int iCnt = 0 ; 
    for(iCnt = 1 ; iCnt <= iNo ; iCnt++)
    {
        printf(" * ");
    }
    for(iCnt = 1 ; iCnt <= iNo ; iCnt ++)
    {
        printf(" # ");
    }
}
int main()
{
    int iValue = 0 ; 

    printf("Enter number : ");
    scanf("%d",&iValue);

    Display(iValue);

    return 0 ; 
}

// 2. Accept amount in us dollar and return its corresponding value in Indian currency consider 1$ as 70 reupees .
// input : 10   output :700
# include<stdio.h>
int DollarToINR(int iNo)
{
    int iCnt = 0  ;

    int  rupees ;

    for (iCnt = 1 ; iCnt <= iNo ; iCnt++)
    {
        {
             rupees = iNo * 70 ;  
        }
        
    }
   return rupees; 
}
int main()
{
    int iValue = 0 , iRet = 0 ;

    printf("Enter number of usd ");
    scanf("%d",& iValue );

    iRet = DollarToINR(iValue);

    printf("Value in INR is %d",iRet);

    return 0 ; 

}

// 3 . write a program to find even factorial of given number .
// input = 5 , output = 8 .
# include<stdio.h>
int EvenFactorial(int iNo)
{
    int iCnt = 0 ;
    int fact = 1 , evenfact ; 
    for (iCnt = 1 ; iCnt <= iNo ; iCnt++ )
    {
       if(iCnt % 2  == 0);
       evenfact =* iCnt ;
    }
    return iCnt;    
}
int mian()
{
    int iValue = 0 , iRet= 0 ;

    printf("Enter number :");
    scanf("%d",&iValue );

    iRet = EvenFactorial(iValue);

    printf("Even Factorial of number is %d", iRet);

    return 0 ; 
}


// Write a program to find odd factorial of given number ;
//  input 5 , output = 15 .
#include<stdio.h>
int oddFactorial(int iNo)
{
    int iCnt = 0 ;
    int fact = 1 ; 
    int mult = 1;

    for (iCnt = 1 ; iCnt <= 0 ; iCnt ++) // only contain odd values 
    {
        if(iNo % 2!== 0 )
        {
            fact *= iNo; 
        }
    }
return fact ; 
}

int main()
{
    int iValue = 0 , iRet = 0 ; 
    printf("Enter number :");
    scanf("%d", & iValue );

    iRet = oddFactorial(iValue);

    printf("odd Factorial of number is %d",iRet);
    return 0 ; 
}
*/

// 5 . Write a program which return different between Even factorial of given number . 
// input : 5 , output -7 (8-15)

#include <stdio.h>

int FactorialDiff(int iNo) {
    int evenFact = 1, oddFact = 1;

    for (int iCnt = 1; iCnt <= iNo; iCnt++) {
        if (iCnt % 2 == 0) {
            evenFact *= iCnt; // Even factorial
        } else {
            oddFact *= iCnt;  // Odd factorial
        }
    }

    return evenFact - oddFact;
}

int main() {
    int iValue = 0, iRet = 0;

    printf("Enter Number: ");
    scanf("%d", &iValue);

    iRet = FactorialDiff(iValue);

    printf("Factorial difference is %d\n", iRet);

    return 0;
}
