/*

// 1 . Write a program which  accept number from user and display its digits in reversed order . 
#include<stdio.h>
void DisplayDigit(int iNo)
{
    int iDigit = 0 , iCnt = 0;
  
    if( iNo < 0 )  //updator 
    {
        iNo = -iNo;
    }

    while ( iNo > 0 )
    {
        iDigit = iNo % 10 ;
        printf("%d \n",iDigit);
        iNo = iNo / 10 ; 
    }
}    
int main()
{
        int iValue = 0 ;

        printf("enter number :");
        scanf("%d",&iValue);

        DisplayDigit(iValue);

        return 0 ;
}


// 2 . write a program which accept number from user and check weather it contain 0 in it or not .

#include<stdio.h>
#define TRUE 1
#define FALSE 0 

typedef int BOOL ;

BOOL ChkZero(int iNo)
{
    int iDigit  ;
    BOOL bRet = FALSE ;
    for ( ;iNo > 0 ; iNo = iNo / 10)
    {
            iDigit = iNo % 10;
            if(iDigit == 0)
        return TRUE ; 
        {
            if(iDigit!= 0)

            return FALSE ;
        }       
    }
}

int main()
{
    int iValue = 0 ; 
    BOOL bRet = FALSE ; 

    printf("Enter number :");

    scanf("%d",&iValue);

    bRet = ChkZero(iValue);

    if(bRet == TRUE)
    {
        printf("It contain zero");
    }
    else 
    {
        printf("There is no Zero");
    }

    return 0 ;
}

*/
// 3. Write a program which accept number from user and count frequency of 2 in it .

#include<stdio.h>

int CountTwo(int iNo)
{
    int iCnt = 0  , iFrequency = 1 , iDigit ; 

     

    return iCnt;
}
int main()
{
    int iSize = 0 , iRet = 0 ,iCnt  = 0 ;
    int *p = NULL ;
    BOOL bRet = FALSE ;
 

    printf("Enter Number og Element :");
    scanf("%d",&iSize);
    
   

// 4. Write a program which accept number from user and count frequency of 4 in it .
