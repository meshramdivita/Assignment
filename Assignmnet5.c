
// 1 . Write a program accpet the number from user and print that number of  on screen 
 # include<stdio.h>
  void Patten(int iNo)
  {

    if (iNo < 0)  // Make the number positive if its nigative 
    {
      iNo = - iNo;
    }

    int iCnt = 0 ; 
    int jCnt = 0 ; 


    for (iCnt = 1 ; iCnt < iNo ; iCnt ++)
    {  printf("*"); }

    for (jCnt = 1 ; jCnt < iNo ; jCnt ++)
    {
      printf("$");
    }
  }

    int main()
    {
        int iValue = 0 ; 
        printf("Enter number :");
        scanf("%d",&iValue);

        Patten(iValue);
    }
    return 0 ; 



  // 2 . Write a program which accept number from the user and print number til that number 
  # include<stdio.h>
  void Display(int iNo)
  {
    int iCnt = 0 ; 

    for (iCnt = 1 ; iCnt <= iNo ; iCnt ++)
    {
      printf("%d \n", iCnt);
    }

  }
  int main()
  {
    int iValue = 0 ;
    printf("Enter number :");
    scanf("%d", &iValue );

    Display (iValue);

    return 0 ; 
  }

  //  input : 8 output : 1 2 3 4 5 6 7  
  // Time Complexity : 



// 3 . Write a program which accept number from the user and print its numbers line 
# include<stdio.h>
void Display(int iNo)
{
  int iCnt = 0 ; 

  for (iCnt = -iNo ; iCnt < iNo ; iCnt ++)
  {
    printf("%d",iCnt);
  }

  for (iCnt = iNo ; iCnt <= iNo ; iCnt ++)
  {
    printf("%d", iCnt);
  }
  
}
int main()
{
  int iValue = 0 ;
  printf("Enter Number :  ");
  scanf("%d", & iValue );

  Display(iValue);

  return 0 ; 
}
// input : 4 output : -4 -3 -2 -1 0 1 2 3 4 
// Time Complexity : 



// 4 . Write a program which accept N for user and print all odd number up to N. 
# include<stdio.h>
void OddDisplay(int iNo)
{
  int  iCnt = 0 ; 

  for (iCnt = 1 ; iCnt < iNo; iCnt ++)
  {
    if ( iCnt%2!=0)
    {
      printf("%d",iCnt);
    }
  }

}
int main()
{
  int iValue = 0 ; 
  printf("Enter  Number :");
  scanf("%d", & iValue );

  OddDisplay(iValue);

  return 0 ; 
}
// input : 18 output : 1 3 5 7 9 11 13 
// Time complexity = 



// 5 . Write a program which accept N and print first 5 Multiplication of N.
# include<stdio.h>
void MultipleDisplay(int iNo)
{
  int iCnt = 0 ;

  for (iCnt = 1 ; iCnt <= 5 ; iCnt ++)
  {
      printf("%d", iCnt * iNo);
    
  }
}
int main()
{
  int iValue ;
  printf("Enter Number : ");
  scanf("%d",& iValue );

  MultipleDisplay(iValue);
  return 0 ; 
}
// input 4 output : 4 8 12 16 20 
// Time Complexity =