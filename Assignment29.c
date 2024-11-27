/*
1 Write aprogram whcih accpet string from user and accpet one character . check whether that character is present in sting or not 
*/
#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL ;

BOOL ChkChar(char *str , char ch)
{
    while (*str!='\0')
    {
        if(*str == ch)
        {
            return TRUE;
        }
        str++;
    }
    return FALSE;

}
int main()
{
    char arr[20];
    char value ;
    BOOL bRet = FALSE ;

    printf("Enter string ");
    scanf("%[^\n]s",arr);

    printf("Enter the character ");
    scanf("  %c",&value);

    bRet = ChkChar(arr , value );

    if(bRet == TRUE)
    {
        printf("Character found");
    }
    else 
    {
        printf("Character not found");
    }
    return 0 ; 
}


/*2. Write a program ehich accpet sting from user and accpet one 
character . Return frequency of that character  
*/
#include<stdio.h>

int CountChar(char *str , char ch)
{
    int ifrequency = 0 ;
    while(*str!='\0')
    {
        if(*str == ch)
        {
            ifrequency++;
        }
        str++;
    }
    return ifrequency;
}
int main()
{
   char arr[20];
   char value; 
   int iRet = 0 ; 
 
   printf("Enter string ");
   scanf("%[^'\n']s",arr);

   printf("Enter the character ");
   scanf(" %c",&value);

   iRet = CountChar(arr, value);

   printf("Character frequency is %d",iRet);

   return 0 ; 
}



/* 3. Write a program which accpet string from user and accpet one character 
Return index of first occurance of that character .
*/
#include<stdio.h>
int FirstChar(char *str, char ch)
{
    int index = 0 ; 
    while (*str!='\0')
    {
        if(*str == ch)
        {
            return index ;   
        }
        str++;
        index++;
    }
    return -1;
}
int main()
{
    char arr[20];
    char value ; 
    int iRet = 0 ; 

    printf("Enter string:");
    scanf("%[^'\n']s",arr);

    printf("Enter the character :");
    scanf(" %c",&value);

    iRet = FirstChar(arr,value);

    printf("Character located is %d",iRet);

    return 0 ; 
}

/* Write a program which accpet string from user and accpet one character 
Return index of last occurrence of that character .
*/
#include<stdio.h>
int LastChar(char *str , char ch)
{
    int index = -1 ; 
    int Currentindex = 0 ; 
    
    while(*str!='\0')
    {
        if(*str == ch)
        {
            index = Currentindex;
        }
        str++;
        Currentindex++;
    }
    return index;
}
int main()
{
    char arr[20];
    char value; 
    int iRet = 0 ; 

    printf("Enter string :");
    scanf("%[^'\n']s",arr);

    printf("Enter the character :");
    scanf("%c\n",&value);

    iRet = LastChar(arr , value);

    printf("Character location is %d",iRet);

    return 0 ; 
}


/* 5 . Write a program which accpet string frm user reverse thta string
in place
*/

#include<stdio.h>
void StrRevX(char *str)
{
    char *start = str;
    char *end = str ; 
    temp ='\0'

    while(*end!='\0')
    {
        if(*str == ch)
        {
            *end++;
        }
        end++;        
    }

    while(start > end )
    {
        temp = *start ;
        *start = *end ;
        *end = temp  
    }
}
int main()
{
    char arr[20];

    printf("Enter string :");
    scanf("%[^'\n']s",arr);

    StrRevX(arr);

    printf("Modified string is %s",arr);

    return 0 ; 
}