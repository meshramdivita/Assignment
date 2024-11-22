
// 1. Write a program Which accept number from user and if number is less than 50 then print small , if it is greater than 50  and less than 100 then print medium , if it is greater than 100 then print large .
# include<stdio.h>
void Number (int iNo)
{

}
int main()
{
    int iValue = 0 ;
    printf("Enter Number : ");
    scanf("%d",& iValue );

    Number(iValue);

    return 0;
}

 // input : 75 output : Medium  :   Time Complexity = 



 //  2 . Accept single digit number from user and print it into word .
 # include<stdio.h>
 void Display(int iNo)
 {
   switch (iNo)
   {
    case 0 :
    printf("Zero\n");
    break;

    case 1 :
    printf("First\n");
    break;

    case 2 :
    printf("Second");
    break;

    case 3 :
    printf("Third ");
    break;

    case 4:
    printf("Fourth");
    break;

    case 5 :
    printf("Five");
    break;

    case 6 :
    printf("Six");
    break;

    case 7 :
    printf("Seven");
    break;

    case 8 :
    printf("Eight");
    break;

    case 9 :
    printf("Nine");
    break ;

    default :
    printf("Invalid  Number , Please try again");
   }
 }
 int main(){
    int iValue = 0 ; 
    printf("Enter Number : ");
    scanf ("%d",& iValue );

    Display (iValue );

    return 0 ; 
 }
 // input : 9 , output : Nine , Time Complexity : 



// 3 . Write a program to find factorial of given number .
#include<stdio.h>
int Factorial(int iNo)
{
   int iCnt = 0 ;
   int fact = 1 ; 

   for (iCnt = 1 ; iCnt <= iNo ; iCnt ++)
   {
       fact*=iCnt ;   
   }
   return fact;

}
int main()
{
   int iValue = 0 , iRet = 0 ;

   printf("Enter number ");
   scanf("%d",& iValue);

   iRet = Factorial(iValue);

   printf("Factorial of Number is %d",iRet);

   return 0 ;
}
// input 5 and output = 120 


// 4 . write a program which accept from user and display its table 
// input 2 output 2 4 6 8 10 12 14 16 18 20
# include<stdio.h>
void Table(int iNo)
{
   int iCnt ;

   for (iCnt = 1 ; iCnt <= 10 ; iCnt ++)
   {
       int iMult = iNo * iCnt ; 
       printf(" %d ", iMult );
   }
   printf("\n");
}
int main()
{
   int iValue = 0 ;
   printf("Enter Number :");
   scanf("%d",& iValue);

   Table(iValue);

   return 0 ;
}


// 5 .  Write a program which accept number from user and display its table in reverse order.
// input : 2 output 20 10 16 14 12 10 8 6 4 2 
#include<stdio.h>
void TableRev(int iNo)
{
   int  iCnt = 0;
   int Rev_iNo = 0 ; 
 
   for(iCnt = 10; iCnt >=1; iCnt--)
   {
      int iMult = iNo * iCnt ;
      {
        int Rev_iNo = Rev_iNo * 10 +  iNo % 10 ; 
      }
      printf(" %d ", iMult , Rev_iNo  );
   }

}
int main()
{
   int iValue = 0 ;

   printf("Enter number :");
   scanf("%d",&iValue);

   TableRev(iValue);

   return 0 ; 
}




