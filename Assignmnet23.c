/*
Enter number of rows and columns4
4
*       #       #       #
*       *       #       #
*       *       *       #
*       *       *       *
*/
#include<stdio.h>
void Patten(int iRow,int iCol)
{
    int i = 0 , j = 0; 
    int iValue =  1;
    for (i=1;i<=iRow;i++)
    {
        for(j=1;j<=iCol;j++)
        {
            if(i >= j) // lower + diagonal 
            {
                printf("*\t");
            }
            else if  (i<j) // upper 
            {
                printf("#\t");
            }
            
        }
        printf("\n");
    } 
}
int main()
{
    int iValue1 = 0 , iValue2 = 0 ; 
    printf("Enter number of rows and columns");
    scanf("%d %d", &iValue1,&iValue2);

    Patten(iValue1,iValue2);
    return 0 ; 
}

/*
   *  *  *  *
   *  *  *  #
   *  *  #  #
   *  #  #  #
*/
#include<stdio.h>
void Patten(int iRow,int iCol)
{
    int i = 0 , j = 0; 
    int iValue =  1;
    for (i=1;i<=iRow;i++)
    {
        for(j=1;j<=iCol;j++)
        {
            if  (j<=iCol-i+1) // Diagonal + upper 
            {
                printf("*\t");
            }
            else
            {
                printf("#\t");
            }
            
        }
        printf("\n");
    } 
}
int main()
{
    int iValue1 = 0 , iValue2 = 0 ; 
    printf("Enter number of rows and columns");
    scanf("%d %d", &iValue1,&iValue2);

    Patten(iValue1,iValue2);
    return 0 ; 
}

/*
$  *  *  *   *
*  $  *  *   *
*  *  $  *   *
*  *  *  $   *
*  *  *  *   &
*/
#include<stdio.h>
void Patten(int iRow,int iCol)
{
    int i = 0 , j = 0; 
    int iValue =  1;
    for (i=1;i<=iRow;i++)
    {
        for(j=1;j<=iCol;j++)
        {
            if  (i==j) // Diagonal 
            {
                printf("$\t");
            }
            else if ( i > j)
            {
                printf("*\t");
            }
            else 
            {
                printf("*\t");
            }
            
        }
        printf("\n");
    } 
}
int main()
{
    int iValue1 = 0 , iValue2 = 0 ; 
    printf("Enter number of rows and columns");
    scanf("%d %d", &iValue1,&iValue2);

    Patten(iValue1,iValue2);
    return 0 ; 
}

/*
 enter nymber of row and column 6 
 5 
 *  *  *  *  *
 *  @  @  @  *
 *  @  @  @  *
 *  @  @  @  *
 *  @  @  @  *
 *  *  *  *  *
*/
#include<stdio.h>
void Patten(int iRow,int iCol)
{
    int i = 0 , j = 0; 
    int iValue =  1;
    for (i=1;i<=iRow;i++)
    {
        for(j=1;j<=iCol;j++)
        {
            if  (j == 1 || j == iCol || i==1  ||i == iRow) 
            {
                printf("*\t");
            }
            else
            {
                printf("@\t");
            }
        }
        printf("\n");
    } 
}
int main()
{
    int iValue1 = 0 , iValue2 = 0 ; 
    printf("Enter number of rows and columns");
    scanf("%d %d", &iValue1,&iValue2);

    Patten(iValue1,iValue2);
    return 0 ; 
}
*/

/* row 4 col 4 
1  2  3   4   
1  *  *   4
1  *  *   4
1  2  3   4
*/

#include<stdio.h>
void Patten(int iRow,int iCol)
{
    int i = 0 , j = 0; 
    int iValue =  1;
    for (i=1;i<=iRow;i++)
    {
        for(j=1;j<=iCol;j++)
        {
            if (j == 1 || j == iCol || i==1  ||i == iRow) 
            {
                printf("%d\t",j);
            }
            else
            {
                printf("*\t");
            }
        }
        printf("\n");
    } 
}
int main()
{
    int iValue1 = 0 , iValue2 = 0 ; 
    printf("Enter number of rows and columns");
    scanf("%d %d", &iValue1,&iValue2);

    Patten(iValue1,iValue2);
    return 0 ; 
}
