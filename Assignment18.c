/* Input 5
   Output * * * * * # # # # #
*/
#include<stdio.h>
void Display(int iNo)
{
    int iCnt = 0 ; 
    for (iCnt = 0 ; iCnt < iNo ; iCnt ++)
    {
        printf("*\t");
    }
    for(iCnt = 0 ; iCnt < iNo ; iCnt ++)
    {
        printf("#\t");
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


/* 
Accpet amount in US dollar and return its corresponding value in Indian currency consider 1$ as 70 rupees.
Input : 10 
Output : 700
*/

#include<stdio.h>

float DollarToINR(int iNo)
{
    float Rupees = iNo * 70.0 ; 
    return Rupees ;
}
int main()
{
    int iValue = 0 , fRet = 0 ; 
    printf("Enter number of USD :");
    scanf("%d",&iValue);

    fRet = DollarToINR(iValue);
    printf("Eqivalent amount in INR : %.2f\n",fRet);

    return 0 ; 
}

/*
3. Write a program to find even  factorial of given number.
*/
#include<stdio.h>
int EvenFactorial(int iNo)
{
    int iCnt = 0 ; 
    int iFact = 1 ;

    for (iCnt = 2 ; iCnt < iNo ; iCnt +=2)
    {
        iFact *= iCnt ; 
    }
    return iFact ; 
}
int main()
{
    int iValue =  0 , iRet = 0 ; 

    printf("Enter number :");
    scanf("%d",&iValue);

    iRet = EvenFactorial(iValue);

    printf("Even Factroial of number is %d",i Ret);
    
    return 0 ; 
}
Enter Number : 5 
Even Factroial number is : 8 

/* 4 . Write  program to find odd factorial of given number .
*/
#include<stdio.h>
int OddFactorial(int iNo )
{
    int iCnt = 0 ; 
    int iFact = 1 ;

    for (iCnt = 1 ; iCnt <= iNo ; iCnt +=2)
    {
        iFact *= iCnt ; 
    }
    return iFact ;
}
int main()
{
    int iValue =  0 , iRet = 0 ; 

    printf("Enter number :");
    scanf("%d",&iValue);

    iRet = OddFactorial(iValue);

    printf("Odd Factroial of number is %d",iRet);
    
    return 0 ; 
}

Enter Number : 5 
Even Factroial number is : 15


5 . Write a program which return different between even factroial and odd factroial of given number .

#include<stdio.h>

int FactorialDiff(int iNo)
{
    int iCnt = 0 ; 
    int iFact = 1 ;
    int  iDiff , EvenFact = 1 , OddFact  = 1; 

    for (iCnt = 2 ; iCnt <= iNo ; iCnt +=2)
    {
        EvenFact *= iCnt ; 
    }
    for(iCnt = 1 ; iCnt <= iNo ; iCnt +=2 )
    {
        OddFact *=iCnt ; 
    } 
    
    iDiff  = EvenFact- OddFact ; 

    return iDiff;    
}
int main()
{
    int iValue = 0 , iRet = 0 ; 
    printf("Enter number :");
    scanf("%d",&iValue);

    iRet = FactorialDiff(iValue);

    printf("Factorial difference is %d",iRet);

    return 0 ; 
}

Enter Number : 5
-7
