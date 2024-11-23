/* 1. Write a program which display ASCII table .Table contain symbol decimal hexadecimal and octal representatuon of every member form 0 to 255.
*/
#include<stdio.h>
void DisplayASCII()
{
    int iCnt = 0 ; 
    printf("-----------------------\n");
    printf("-------------------------------------------------\n");
    printf("| Decimal | Hexadecimal | Octal   | Character |\n");
    printf("-------------------------------------------------\n");

    for (iCnt = 0; iCnt <= 255; iCnt++) 
    {
        if (iCnt < 32 || iCnt == 127) // Non-printable characters
        {
            printf("| %-7d | %-11X | %-7o | Non-print |\n", iCnt, iCnt, iCnt);
        }
        else
        {
            printf("| %-7d | %-11X | %-7o | %-9c |\n", iCnt, iCnt, iCnt, iCnt);
        }
    }
    printf("-------------------------------------------------\n");
}
int main()
{
    DisplayASCII();

    return 0 ;
}


/*
// 2. accpet character from user if character is small display its corresopnding captital character and if its small then display its corresponding capital . in other cases display as its is .
*/
#include<stdio.h>
void Display(char ch)
{
    if(ch>= 'a' && ch <= 'z')
    {
        printf("Corresponding uppercase character :%c\n",ch - 32);
    }
    else if (ch >= 'A' && ch <= 'Z')
    {
        printf("Corresponding lowercase character :%c\n",ch+32);
    }
    else 
    {
        printf("Character as is :%c\n",ch);
    }
}
int main()
{
    char cValue = '\0';

    printf("Enter the character ");
    scanf("%c",&cValue);

    Display(cValue);

    return 0 ; 
}


/*
// 3 .aCCPET CHARACTER FROM USER . IF IT IS Capital then display all the charcter from the input character till Z . if input character is small then print all the character in reverse order till a . In other cases return directly . 
*/
 #include<stdio.h>
void Display(char ch)
{
    if(ch >= 'A' && ch <= 'Z')
    {
        printf("Display characters %c\n",ch +32);
        for(char i = ch ; i<='Z';i++)
        {
            printf("%c ",i);
        }
        printf("\n");
    }

    else if (ch >= 'a' && ch <= 'z' )
    {
        printf("Display character in reverse order %c\n",ch - 32);
        for (char i = ch ; i >= 'a'; i--)
        {
            printf(" %c ",i);
        }
        printf("\n");
    }
    else
    {
        // Display as is
        printf("Invalid input or non - alphabaet character .\n", ch);
    }
}
int main()
{
    char cValue = '\0';

    printf("Enter the character ");
    scanf("%c",&cValue);

    Display(cValue);

    return 0 ; 
}


/* Accept character from user and check  whether it is special symbol or not ( ! ,@ ,#, $, %, ^, & ,*)
*/
#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL ChkSpecial(char ch)
{
    if (ch == '!' || ch == '@' || ch == '#' || ch == '$' || 
        ch == '%' || ch == '^' || ch == '&' || ch == '*')
    {
        return TRUE; // It is a special symbol
    }
    else 
    {
        return FALSE ;
    }
}
int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE ;

    printf("Enter the character ");
    scanf("%c",&cValue);

    bRet = ChkSpecial(cValue);

    if(bRet == TRUE)
    {
        printf("It is special character");
    }
    else 
    {
        printf("it is not special character");
    }
    return 0 ; 
}

/* Accpet  charcte rfrom user and dislay its ASCII value in decimal octal and hexadecimal formate .
*/

void Display (char ch)
{
    // Display ASCII value in decimal, octal, and hexadecimal formats
    printf("Character: %c\n", ch);
    printf("ASCII Value in Decimal: %d\n", ch);
    printf("ASCII Value in Octal: %o\n", ch);
    printf("ASCII Value in Hexadecimal: %X\n", ch);
}
int main()
{
    char cValue = '\0';

    printf("Enter the character ");
    scanf("%c",&cValue);

    Display (cValue);

    return 0 ; 
}