// 1 . Write a program which accept number from user and return the count of even digits
/*
#include<stdio.h>
int CountEven(int iNo)
{
    int iEven = 0 ;
    int  iCnt =0; 
    int iDigit ;

     for (; iNo != 0 ; iNo / 10)
     {
        iDigit = iNo / 10 ;

        if 
            (iDigit%2==0){
            iCnt++ ; 
            }
     }
    return iEven  ; 
}
int main()
{
    int iValue = 0 ; 
    int iRet = 0 ;

    printf("Enter number :");
    scanf("%d",&iValue);

    iRet=CountEven(iValue);

    printf("%d",iRet);
    return 0 ; 
}
*/

/*


// 2. Write a program which accpet number from user and return the count of odd digits.
#include<stdio.h>

{   
}
int main()
{
    int iValue = 0 ; 
    int iRet = 0 ;

    printf("Enter Number :");
    scanf("%d",&iValue);

    iRet = CountOdd(iValue);

    printf("%d",iRet);

    return 0 ;
}


// 3. Write a program which accept number from userr and return the count of digit in between 3 and 7 .
#include<stdio.h>

int CountRange(int iNo)

int CountRange(int iNo)
{

}

int main()
{
    int iValue = 0 ; 
    int iRet = 0 ; 

    printf("Enter Number :");
    scanf("%d",&iValue);

    iRet = CountRnage(iValue);

    printf("%d",iRet);
    return 0 ; 
}
*/


// 4. Write a program which accept number from user and return multiplication of all digits .
/**
#include<stdio.h>
int MultDigits(int iNo)
{
    int iMult = 1 ; 
    int iDigit = 0 ;

     // Use a for loop to process each digit
    for (; iNo != 0; iNo /= 10) {  // Divide iNo by 10 in each iteration
        iDigit = iNo % 10;  // Extract the last digit
        iMult *= iDigit;    // Multiply with iMult
    }
    return iMult ; 
}
int main()
{
    int iValue = 0 ;
    int iRet = 0 ; 

    printf("Enter number:");
    scanf("%d",&iValue);

    iRet = MultDigits(iValue); 

    printf("%d",iRet);
    return 0 ;
}
*/




// 5. Write a program which accpet number from user and return difference between summation of even digits and summation of Odd digits

#include<stdio.h>

int CountDiff(int iNo)
{
    int iCnt = 0 ; 
    int iEven , iodd ;
    int iDigit ;
    for (; iNo != 0; iNo /= 10)
     {
        iDigit = iNo % 10; 

        if(iDigit % 2==0)
        {
            iEven = iEven + iDigit; 
        }
        else 
        {
            iodd = iodd + iDigit ; 
        }
    }
    return iEven - iodd; 
}
int main()
{
    int iValue = 0 ; 
    int iRet = 0 ;
    
    printf("Enter number :");
    scanf("%d",&iValue);

    iRet = CountDiff(iValue);

    printf("%d",iRet);

    return 0 ; 
}
