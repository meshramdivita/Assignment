/*
#include<stdio.h>

int CountCapital(char *str)
{
    int iCount = 0 ; 

    while(*str !='\0')
    {
        iCount++;
        str++;
    }
    return iCount ; 
}
int main()
{
    char arr[20];
    int iRet = 0 ; 

    printf("Enter String ");
    scanf("%[^\n']S",arr);

    iRet = CountCapital(arr);

    printf("%d",iRet);
    return 0 ; 
}
*/


/*
// 2. Write a program whcih accpet string from user and count number of small characters.

#include<stdio.h>

int CountSmall(char *str)
{
    int iCount = 0 ; 
    while (*str !='\0')
    {
        iCount++;
        str++;
    }
    return iCount;
}
int main()
{
    char arr[20];
    int iRet = 0 ; 

    printf("Enter string :");
    scanf("%[^\n']s",arr);

    iRet = CountSmall(arr);

    printf("%d",iRet);

    return 0 ; 
}


// 3. Write a program which accpet string from user and return difference between frequency of small character and frequency of capital characters . 
#include<stdio.h>
int Difference (char *str)
{
    int lower = 0 , upper = 0 ; 

    while (*str!='\0')
    {
        if(*str >= 'a' && *str <= 'z')
        {
            lower++;
        }
        else if(*str >= 'A' && *str<= 'Z')
        {
            upper++;
        }
        str++;
    }
    return lower - upper ; 
}
int main()
{
    char arr[20];
    int iRet = 0 ; 

    printf("Enter String ");
    scanf("%[^\n']s",arr);

    iRet = Difference(arr);

    printf("%d",iRet);

    return 0 ; 
}



// Write a program which accpet string from user and check whether it contain vowels in it ot not . 
#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL ChkVowel(char *str)
{
    while (*str != '\0')
    {
    if (*str == 'a' || *str == 'e' || *str == 'i' || *str == 'o' || *str == 'u' ||
            *str == 'A' || *str == 'E' || *str == 'I' || *str == 'O' || *str == 'U')
        {
            return TRUE; // Vowel found
        }
        str++;
    }
    return FALSE; // No vowel found
}
int main()
{
    char arr[20];
    BOOL bRet = FALSE ;

    printf("Enter the character ");
    scanf("%[^\n']s",arr);

    bRet = ChkVowel(arr);

    if(bRet == TRUE)
    {
        printf("Contain vowels");
    }
    else 
    {
        printf("There is no Vowel");
    }
    return 0 ; 
}
*/
// 3. Write a program which accpet string from user and display it in reverse order 

#include<stdio.h>
void Reverse(char *str)
{
    char *end = str;
    char temp ;

    while (*end !='\0')
    {
        end++;
    }
    end--;

    while(str < end)
    {
        temp = *str;
        *str = *end;
        *end = temp;

        str++;
        end--;
    }
}
int main()
{
    char arr[20];
    int iRet = 0 ; 

    printf("Enter String ");
    scanf("%d[^\n']s",arr);

    Reverse(arr);
    printf("Reversed String :%s\n",arr);

    return 0 ; 
}