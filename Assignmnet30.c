/*
// Accpet charcater from user and check wether is ts apphabet or not 
#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL ;
BOOL ChkAlpha(char ch)
{   
    if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    {
        return TRUE ;         
    }
    else 
    {
        return FALSE ;
    }
}
int main()
{
    char value = '\0';
    BOOL bRet = FALSE ; 

    printf("Enter the character :");
    scanf("%c",&value);

    bRet = ChkAlpha(value);

    if(bRet == TRUE)
    {
        printf("It is character :");
    }
    else 
    {
        printf("It is not a character ");
    }
    return 0 ; 
}
*/

/*

// 2. Accpet character from user and check whether it is capital or not (A-Z)
#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkCapital(char ch)
{
    if((ch >= 'A') && (ch <= 'Z'))
    {
        return TRUE ; 
    }
    else 
    {
        return FALSE ; 
    }
}
int main()
{
    char value = '\0';
    BOOL bRet = FALSE ;

    printf("Enter the character :");
    scanf("%c",&value);

    bRet = ChkCapital(value);

    if(bRet == TRUE)
    {
        printf("It is capital character ");
    }
    else 
    {
        printf("It is not c capital character ");
    }
    return 0 ; 
}
*/

/*
//  3. Accpet character from user and check whether it is digit or not (0 - 9)
#include<stdio.h>
#define TRUE 1
#define FALSE 0  

typedef int BOOL ; 

BOOL ChkDigit(char ch)
{
    if (ch >= '0'  && ch <= '9')
    {
        return TRUE;
    }
    else 
    {
        return FALSE ; 
    } 
}
int main()
{
    char value = '\0';
    BOOL bRet = FALSE ; 
    
    printf("eNTER THE CHARACTER :");
    scanf("%c",&value);

    bRet = ChkDigit(value);

    if(bRet == TRUE);
    {
        printf("it is digit");
    }
    else 
    {
        printf("It is not a Digit");
    }
    return 0 ; 
}
*/

/*

// 4. Accpet character from user and check wether it is small case or not (a-z)
#define TRUE 1
#define FALSE 0

typedef int BOOL ;

BOOL ChkSmall(char ch)
{
    if((ch >= 'a') && (ch <= 'z'))
    {
        return TRUE;
    }
    else 
    {
        return FALSE ;
    }

}

int main()
{
    char value = '\0';
    BOOL bRet = FALSE ; 

    printf("Enter the character ");
    scanf("%c",&value);

    bRet = ChkSmall(value);

    if(bRet == TRUE)
    {
        printf("it is small case character ");
    }
    else 
    {
        printf("It is not small case character ");
    }
        return 0 ; 
}
*/


//5. Accpet division of student from user and depends on the division display exam timing . there are 4 division in school 
 // as A , B, C,D exam of division A ar 7AM , B at 8.30 AM , C at 9.20 AM And D at 10.3- AM . 

#include<stdio.h>
#include<stdlib.h>
void DisplaySchedule(char ChDiv)
{
    if (ChDiv == 'A')
    {
         printf("Exam for Division A is at 7:00 AM\n");
    }
    else if (ChDiv == 'B')
    {
         printf("Exam for Division B is at 8.30 AM\n");
    }
    else if ( ChDiv == 'C')
    {
         printf("Exam for Division C is at 9.20 AM\n");
    }
    else if (ChDiv == 'D')
    {
         printf("Exam for Division D is at 10.30 AM\n");
    }
}
int main()
{
    char value = '\0';

    printf("Enter tour devision ");
    scanf("%c",&value);

     DisplaySchedule(value);

    return 0 ; 
}
