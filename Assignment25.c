/*  row =4 col = 4 
*   *   *   #
*   *   #   *
*   #   *   *
#   *   *   *

#include<stdio.h>
void Patten(int iRow,int iCol)
{
    int i = 0 , j = 0; 
    int iValue =  1;
    for (i=1;i<=iRow;i++)
    {
        for(j=1;j<=iCol;j++)
        {
            if(i+j==iCol+1)
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
*/
/* 
*  *  *  #
*  *  #  @
*  #  @  @
#  @  @  @

#include<stdio.h>
void Patten(int iRow,int iCol)
{
    int i = 0 , j = 0; 
    int iValue =  1;
    for (i=1;i<=iRow;i++)
    {
        for(j=1;j<=iCol;j++)
        {
            if (j <= iCol -i)
            {
                printf("*\t");
            }
            else if ( j == iCol - i + 1)
            {
                printf("#\t");
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
#include<stdio.h>
void Patten(int iRow,int iCol)
{
    int i = 0 , j = 0; 
    int iValue =  1;
    for (i=1;i<=iRow;i++)
    {
        for(j=1;j<=iCol;j++)
        {
           
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


