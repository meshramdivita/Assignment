/*
Enter number of rows and columns4
4
1       2       3       4
5       6       7       8
9       1       2       3
4       5       6       7

#include<stdio.h>
void Patten(int iRow,int iCol)
{
    int i = 0 , j = 0; 
    int iValue =  1;
    for (i=1;i<=iRow;i++)
    {
        for(j=1;j<=iCol;j++)
        {
            printf("%d\t",iValue);
            iValue ++;
            {
                if(iValue > 9)
                {
                    iValue = 1 ;
                }
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

/* 2  4 6 8 10 
   1  3 5 7 9
   2  4 6 8 10 
   1  3 5 7 9

#include<stdio.h>
void Patten(int iRow,int iCol)
{
    int i = 0 , j = 0; 
    int iValue =  1;
    int odd =1 , even = 2;
    for (i=1;i<=iRow;i++)
    {
        for(j=1;j<=iCol;j++)
        {
            {
                if (i%2==0)
                {
                    printf("%d\t",odd);  // print even 
                    odd+=2;
                }
                else
                {
                    printf("%d\t",even);  // print odd
                    even+=2; 
                }
            }
        }
        even = 2  ;
        odd = 1 ;
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
    char ch = 'a';
    int iValue = 1 ;

    for (i=1;i<=iRow;i++)
    {
        for(j=1;j<=iCol;j++)
        {
            {
                if (i%2==0)
                {
                    printf("%d\t",iValue); 
                    iValue++;
                }
                else
                {
                    printf("%c\t",ch);
                    ch++;
                }
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
