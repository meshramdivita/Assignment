//1. Write a program which accept one number from user and print that number of even number on screen 
#include<stdio.h>

void PrintEven(int iNo)
{
    if(iNo<=0)
    {
        return ;
    }

    int iCnt=1;
    int iEvennum = 0 ;
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        printf("%d\n",iEvennum);
        iEvennum+= 2;
    }
}
int main()
{
    int iValue = 0;
    printf("Enter number\n");
    scanf("%d",&iValue);

    PrintEven(iValue);
    return 0;
}


//2. write a program which accept number from user and print even factor of that number .

void DisplayFactor(int iNo)
{
    int i = 0;

    if (iNo<=0)  // the number which is convert into nigavtive to positive 
    {
        iNo=-iNo;
    }
    for(i=1;i<=iNo/2;i++)
    {
        if(iNo%i==0)
        {
            printf("%d",i);
        }
    }
}
int main()
{
    int iValue = 0;
    printf("enter number:\n");
    scanf("%d",&iValue);

    DisplayFactor(iValue);

    return 0;
}


// 3. Write a program which accept number from user and print even factor of that number.

void DisplayEvenFactor(int iNo)
{
    int i=0;
    if(iNo<=0)
    {
        iNo=-iNo;
    }

    for(i=1;i<=iNo/2 ;i++)
    {
        if( iNo%i==0)
        {
            if(i%2==0)
            {
                printf("%d",i);
            }
        }
    }
}
int main()
{
    int iValue=0;
    printf("Enter number\n");
    scanf("%d",&iValue);
     DisplayEve36nFactor (iValue);
    return 0;
}

//4.Accept one character form user and convert case of that character .
#include<stdio.h>
void DisplayConvert(char cValue)
{
    char ch,a,A;
    if(cValue>='a'&& cValue<='z')
    {
        printf("%c",cValue-32);
    }
    else if(cValue>='A'&& cValue<='Z')
    {
        printf("%c",cValue+32);
    }
}
int main()
{
    char cValue='\0';
    printf("Enter character\n");
    scanf("%c",&cValue);
    DisplayConvert(cValue);
    return 0;
}

// 5.Accept on character from user and check whether that character is vowel or not
#include<stdio.h.>
typedef int BOOL;

# define TRUE 1
# define FALSE 0
BOOL ChkVowel (char cValue )
{
    if(cValue=='a'||cValue=='A'||cValue=='e'||cValue=='E'||cValue=='i'||cValue=='I'||cValue=='o'||cValue=='O'||cValue=='u'||cValue=='U')
    {
        return TRUE;
    }
    else 
    {
        return FALSE;
    }
}
int main()
{
    char cValue ='\0';
    BOOL bRet = FALSE;

    printf("Enter character:\n");
    scanf("%c",&cValue);

    bRet = ChkVowel(cValue);
    if(bRet == TRUE )
    {
        printf("It is vowel");
    }
    else
    {
        printf("it is not Vowel");
    }
    return 0;
}