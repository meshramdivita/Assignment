
// Write a program which accpet string from user and convert it into lower case 
#include<stdio.h>
void strlwrx(char *str)
{
    while (*str!='\0')
    {
        if(*str>='A'&& *str<='Z')
        {
            *str = *str + 32;
        }
        str++;
    }
}
int main()
{
    char arr[20];

    printf("Enter string ");
    scanf("%[^'\n]s",arr);

    strlwrx(arr);

    printf("Modified string is %s",arr);
    return 0 ; 
}


// 2 . Write aprogram which accpet string from user and convert it into upper case .

#include<stdio.h>
void struprx(char *str)
{
    char ch ; 
    while (*str!='\0')
    {
        if(*str >= 'a' && *str <= 'z')
        {
            *str = *str - 32 ;
        }
        *str++;
    }
}

int main()
{
    char arr[20];

    printf("Enter string :");
    scanf("%[^'\n]s",arr);

    struprx(arr);

    printf("Modified string is %s",arr);

    return 0 ; 
}


// 3. Write a  program which accpet string from user and toggle the case 

#include<stdio.h>
void strtogglex(char *str)
{
    char ch ;
    while (*str!='\0')
    { 
        if(*str >= 'a' && *str <='z')
        {
            *str = *str - 32;
        }
        else 
        {
            *str = *str + 32 ;
        } 
    }   *str++;
}
int main()
{
    char arr[20];

    printf("Enter string :");
    scanf("%[^'\0]s",arr);

    strtogglex(arr);

    printf("Modified string is %s",arr);

    return 0 ; 
}


//4. Write aprogram which accpet string from user and display only digits from that string 
#include<stdio.h>
void DisplayDigit(char *str)
{
    char ch ; 
    int iCnt ;
    while(*str!='\0')
    {
        if(*str >= '0' && *str<='9')
        {
            printf("%c\n",*str);
        }
        *str++;
    }
}
int main()
{
    char arr[20];

    printf("Enter string :");
    scanf("%[^'\n]s",arr);

    DisplayDigit(arr);

    return 0 ; 
}


//5. Write a program which accept string from user and counnt number of white spaces 
#include<stdio.h>
int CountWhite(char *str)
{
    int iCnt = 0 ; 

    while(*str!='\0')
    {
        if(*str ==' ')
        {
            iCnt++;
        }
        str++;
    }
    return iCnt ;
}
int main()
{
    char arr[200];
    int iRet = 0 ; 

    printf("Enter string :");
    scanf("%[^\n]s",arr);

    iRet = CountWhite(arr);
    printf("%d",iRet);

    return 0 ; 
}