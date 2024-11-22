/*
Input : 5
OUtput : A B C D E

Enter number of elements : 5
A B C D E 

// 1 .
#include<stdio.h>
void Patten(int iNo)
{
    int iCnt = 0 ; 
    char ch = 'A';
    for (iCnt = 0 ; iCnt < iNo ; iCnt ++)
    {
        printf(" %c ",ch);
        ch++;
    }
}
int main()
{  
    int iValue = 0 ; 

    printf("Enter number of elements ");
    scanf("%d",&iValue);

    Patten(iValue);

    return 0 ;     
}
*/


/* 
Input : 5
Output 5 # 4 # 3 # 2 # 1 #


#include<stdio.h>
void Patten(int iNo)
{
    int iCnt = 0 ; 
    for (iCnt = iNo ; iCnt >= 1 ; iCnt --)
    {
        printf("%d#\t",iCnt);
    }
}
int main()
{
    int iValue = 0 ; 
    printf("Enter number of elements ");
    scanf("%d",&iValue);

    Patten(iValue);

    return 0 ; 
}
*/


/*
// Aceept number from user and display below patten
Enter Number of elemsnts : 5
1* 2* 3* 4* 5*
#include<stdio.h>
void Patten(int iNo)
{
    int iCnt = 0 ; 
    for (iCnt = 1 ; iCnt <= iNo ; iCnt ++)
    {
        printf(" %d *\t",iCnt);
    }
}
int main()
{
    int iValue = 0 ; 
    printf("Enter number of elements :");
    scanf("%d",&iValue);
    Patten(iValue);
    return 0 ; 
}
*/

/*
4 Accpet number from user and display below patten 
Enter number of elements : 4
# 1 * # 2 * # 3 * # 4 *

#include<stdio.h>
void Patten(int iNo)
{
    int iCnt = 0 ; 
    for(iCnt = 1 ; iCnt <= iNo ; iCnt ++)
    {
        printf("# %d * ",iCnt);
    }
}
int main()
{
    int iValue = 0 ; 
    printf("Enter number of elements :");
    scanf("%d",&iValue);
    Patten(iValue);
    return 0 ; 
}
*/

// 5 . Accpet number from user nad display below patten

#include<stdio.h>
void Patten(int iNo)
{
    int iCnt = 0 ; 
    for(iCnt = 1 ; iCnt <= iNo ; iCnt ++)
    {
        printf(" %d ",iCnt*2);
    }
}
int main()
{
    int iValue = 0 ; 
    printf("Enter number of elements :");
    scanf("%d",&iValue);

    Patten(iValue);

    return 0 ; 
}