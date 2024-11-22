/*
  row = 4 col = 4
  *
  *    *
  *    *    *
  *    *    *    *
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
            if  (i>=j)  // Diagonal
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
// row = 4 icol = 4 
*   *   *   *
*   *   *
*   *
*
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
            if  (i<=j)  // Diagonal
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
irow = 5 icol = 5 
$   *   *   *   *
#   $   *   *   *
#   #   $   *   *
#   #   #   $   *
#   #   #   #   $
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
            if  (i==j)  // Diagonal
            {
                printf("$\t");
            }
            else if (i > j)
            {
                printf("#\t");
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
 row 4 col 4 
 1  2   3   4
    2   3   4
        3   4
            4
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
            if(j>=i)                              
            {
                printf("%d\t",j);
            }
            else 
            {
                printf("\t");
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
Row =  6 Col = 6 
*  *  *  *  *  *
*  *           *
*      *       *
*         *    *
*          *   *
*   *   *  *   *
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
            if (i==j)  // Diagonal
            {
                printf("*\t");
            }  
            else if (j == 1 || j == iCol) 
            {
                printf("*\t");
            } 
            else if (i == 1  || i == iRow )
            {
                printf("*\t");
            }  
            else 
            {
                printf("\t");
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
