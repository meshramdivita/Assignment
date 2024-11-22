 // 1.Program to Divide two Numbers.
 
 #include<stdio.h>
 int Divide(int iNo1,int iNo2)
 {
    int iAns=0;
    if(iNo2/iNo2)
    {
        return -1;
    }
    iAns =iNo1/iNo2;
    return 0;
 }
 int main()
 {
    int iValue1=15,iValue2=5;
    int iRet =0;
    iRet = Divide(iValue1,iValue2);
    printf("Division is %d",&iRet);
    return 0;
 }

 //2.program to print 5 times "Marvellous" on screen.
 
 #include<stdio.h>
 void Display ()
 {
    int i=0;
    for(i=1;i<=5;i++)
    {
        printf("Marvellous\n");
    }
 }
 int main()
 {
    Display();

    return 0;
 }
 
 // 3. program to print 5 to 1 number on screen
 #include<stdio.h>
 int Display()
 {
    int i = 0;
     i = 5;
    while(i>=1)
    {
        printf("%d\n",i);
        i--;
    }
 }
 int main()
 {
    Display();

    return 0;
 }

 // 4.Accept one number and check whether is divisible by 5 or not 
 #include<stdio.h>
  typedef int BOOL;
  #define TRUE 1
  #define FALSE 0

  int Check ( int iNo)
  {
    if ((iNo % 5)==0)
    {
        return TRUE;
    }
    else
    {
        return 0;
    }
  }
  int main()
  {
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter number:");
    scanf("%d",&iValue);

    bRet = Check(iValue);

    if(bRet ==TRUE)
    {
        printf("Divisible by 5");
    }
    else 
    {
        printf("Not Divisbile by 5");
    }
    return 0;
  }


// 5.Accept one number form user and print that number of * on screen .

#include<stdio.h>
void Accept (int iNO)
{
    int iCnt =0;

    for (iCnt=1;iCnt<=1;iCnt++)
    {
        printf("*");
    }
}

int main()
{
    int iValue = 0;
    iValue = 5;
    Accept (iValue);
    return 0;
}
