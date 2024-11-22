
// 1. Write a program which accept range from user and display all number in between that range . input :23 35 output : 23 24 25 26 27 28 29 30 31 32 33 34 35 
#include<stdio.h>
void RangeDisplay(int iStart , int iEnd )
{  
    int iNo ; 
    int iCnt ; 
     for(iCnt = iStart ; iCnt <=  iEnd ; iCnt++)
     {
        printf(" %d ", iCnt );
     }
        if (iStart > iEnd)
        {
            printf("Invalid range");
        }    
        printf(" \n "); 
}
int main()
{
    int iValue1 = 0 , iValue2 = 0;

    printf("Enter Starting point :");
    scanf("%d",&iValue1);

    printf("Enter ending point :");
    scanf("%d",&iValue2);

    RangeDisplay(iValue1 , iValue2);

    return 0 ; 
}


// 2 . Write a program which accept range from user and display all even number in between that range 
# include<stdio.h>

void RangeDisplayEven(int iStart , int iEnd)
{
    int iNo , iCnt ; 
    for (iCnt = iStart ; iCnt < iEnd ; iCnt++)
    {
        if(iCnt % 2 ==0)
        {
            printf(" %d " , iCnt);
        }
    }
}
int main()
{
    int iValue1 = 0 , iValue2 = 0 ;

    printf("Enter starting point :");
    scanf("%d",&iValue1);

    printf("Enter ending point :");
    scanf("%d",&iValue2);

    RangeDisplayEven(iValue1 , iValue2 );

    return 0 ;  
}


// 3 .  Write a program which accept range from user annd return addition of all numbers in between that range . (range should be in positive number only)
# include<stdio.h>
int RangeSum(int iStart , int iEnd)
{
    int iCnt , iNo , sum = 0; 

    if(iStart < iEnd)
    {
       printf("Invalid Rnage");
    }


    for(iCnt = iStart ; iCnt < iEnd ; iCnt ++)
    {
        sum +=iCnt ;
    }
    return  sum ; 
}
int main()
{
    int iValue1 = 0 , iValue2 = 0 , iRet = 0 ; 

    printf("Enter starting point ");
    scanf("%d",&iValue1);

    printf("Enter ending point ");
    scanf("%d",&iValue2);

    iRet = RangeSum(iValue1,iValue2);

    printf("Addition is %d",iRet);

    return 0 ; 
}

// 4 . Write a program which accept range from user and return addition of all even number in between that range
#include<stdio.h>
int RangeSumEven(int iStart , int iEnd)
 {
    int iCnt ,sum = 0;

    if(iStart > iEnd)
    {
        printf("Invalid range");
        return 0 ;
    }

    for (iCnt = iStart ; iCnt <= iEnd ; iCnt ++)
    {
        if(iCnt % 2 == 0)
        {
            sum +=iCnt ; 
        }
    }
    return sum ;
 }

 int main()
 {
    int iValue1 = 0 , iValue2 = 0 , iRet = 0 ;

    printf("Enter strating point :");
    scanf("%d",&iValue1);

    printf("Enter ending point :");
    scanf("%d",&iValue2);

    iRet = RangeSumEven(iValue1, iValue2);

    printf("Addition is %d\n",iRet);

    return 0 ;
 }
 

 // 5. Write a program which accept range from user and siplay all number in between that range in reversed order .
 #include<stdio.h>
 void RangeDisplayRev(int iStart , int iEnd)
 {
    int iCnt , sum = 0 ;

    if (iStart > iEnd )
        {
            printf("Invalid number");
            return ; 
        }

    for (iCnt = iEnd ; iCnt >= iStart ; iCnt --)
    {
        printf(" %d ", iCnt);
    }
    printf("\n");
        

 }
 int main()
 {
    int iValue1 = 0 , iValue2 = 0 ;

    printf("Enter starting point :");
    scanf("%d",&iValue1);

    printf("Enter ending point :");
    scanf("%d",&iValue2);

    RangeDisplayRev(iValue1,iValue2); 
    return 0 ;
 }