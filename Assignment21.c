// input iRow = 4  

Enter number of rows and columns4
4
A  B  C  D 
A  B  C  D 
A  B  C  D
A  B  C  D

#include<stdio.h>
void Patten(int iRow,int iCol)
{
    int i = 0 , j = 0; 
    char ch = 'A';
    for (i=1 ; i<=iRow ; i++)
    {  
        for(j=1 ,ch='A'; j<=iCol ; j++)
        {
            printf("%c\t",ch);
            ch++;
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

 /* Enter number of rows and columns4
4
A       B       C       D
a       b       c       d
A       B       C       D
a       b       c       d
*/
#include<stdio.h>
void Patten(int iRow,int iCol)
{
    int i = 0 , j = 0; 

    for ( i = 1 ; i<=iRow ; i++ )
    {  
        for( j=1 ; j<=iCol ; j++ )
        {
            if(i%2==1)
            {
                printf("%c\t",'A'+(j-1));
            }
            else 
            {
                printf("%c\t",'a'+(j-1));
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

 
roe 3 col = 5 
A A A A A 
B B B B B
C C C C C

#include<stdio.h>
void Patten(int iRow,int iCol)
{
    int i = 0 , j = 0; 
    char ch = 'A';

    for ( i = 1 ,ch ='A'; i<=iRow ; i++ )
    {  
        for( j=1 ; j<=iCol ; j++ )
        {
            printf("%c\t",ch);   
        }
        printf("\n");
        ch++;
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

#include<stdio.h>
void Patten(int iRow,int iCol)
{
    int i = 0 , j = 0; 

    for (i = 1 ; i > iRow ; i--)
    {
        for ( j = 1 ; j > iCol ; j--)
        {
            printf("%d\t",j);
        }
        printf("/n");
    }
}
int main()
{
    int iValue1 = 0 , iValue2 = 0 ; 

    printf("Enter number of rows and columns :");
    scanf("%d %d", &iValue1,&iValue2);

    Patten(iValue1,iValue2);
    return 0 ; 
}

*/
/*
 iRow = 4 , iCol = 4
 output 1 2 3 4 
        5  6 7 8 
        9 10 11 12 

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
            printf("%d\t",iValue);
            iValue ++;
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