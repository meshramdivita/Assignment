// 1.Write a program which accept number form the user and display its muliplication of factor 
#include <stdio.h>

int MultFactor(int iNo)
{
    int iCnt = 0;
    int iMult = 1;

    // Loop through and multiply factors of iNo
    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if (iNo % iCnt == 0)
        {
            iMult *= iCnt;
        }
    }
    return iMult;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = MultFactor(iValue);

    printf("Multiplication of factors: %d\n", iRet);
    return 0;
}

// 2. Write a progra, which acppet number from user and display its factor in decreasing order
#include <stdio.h>
void FactRev(int iNo)
{
    int iCnt;

    // Start from iNo - 1 and decrement to find factors in descending order
    for (iCnt = iNo - 1; iCnt > 0; iCnt--)
    {
        if (iNo % iCnt == 0)
        {
            printf("%d ", iCnt);
        }
    }
}
int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    FactRev(iValue);
    return 0;
}


// 3. write a program whih accept number from user and display all its non factor
#include <stdio.h>
void NonFact(int iNo)
{
    int iCnt = 0;
    for (iCnt = 1; iCnt < iNo; iCnt++)
    {
        // If iCnt is not a factor of iNo, print it
        if (iNo % iCnt != 0)
        {
            printf("%d ", iCnt);
        }
    }
}
int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    NonFact(iValue);
    return 0;
}


// 4. Writr a program which accept number from user and return summation of all its non factors.
#include<stdio.h>
int SumNonFactor(int iNo)
{
    int iCnt = 0 ;
    int isum = 0 ;

    for (iCnt=1; iCnt<iNo; iCnt++)
    {
        if(iNo % iCnt != 0 )
        {
          isum += iCnt;
        }
    }
    return isum;
}
int main()
{
    int iValue = 0 ;
    int iRet = 0 ;
    
    printf("Enter number :");
    scanf("%d",&iValue);

    iRet = SumNonFactor(iValue);

    printf("%d",iRet);
    return 0 ;
}

// 5 .Write a program which accept number from user and return different between summation of all its factor and non factor .

# include<stdio.h>
int SummationFactor(int iNo)
{ 
    int iCnt = 0 ;
    int iSumFactor = 0 ;
    int iSumNoFactor = 0;
    for (iCnt = 1 ; iCnt < iNo ; iCnt ++)
    {
        if(iNo % iCnt != 0 )
        {
           iSumNoFactor += iCnt;
        }
        else {
            iSumFactor += iCnt;
        }
    }
    return iSumNoFactor - iSumFactor  ;
}
int main()
{
    int iValue = 0 ;
    int iRet  = 0 ;

    printf("Enter number :");
    scanf("%d",& iValue);

    iRet = SummationFactor(iValue);

    printf("%d",iRet);
    
    return 0 ; 
}
