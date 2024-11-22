/* 1.
Enter number of rows and columns4
3
*       *       *
*       *       *
*       *       *
*       *       *
*/

#include<stdio.h>
void Patten(int iRow,int iCol)
{
    int i = 0 , j = 0; 
    for (i=1;i<=iRow;i++)
    {
        for(j=1;j<=iCol;j++)
        {
            printf("*\t");
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
   Enter number of rows and columns4
3
1       2       3
1       2       3
1       2       3
1       2       3
*/
#include<stdio.h>
void Patten(int iRow,int iCol)
{
    int i = 0 , j = 0; 
    for (i=1;i<=iRow;i++)
    {
        for(j=1;j<=iCol;j++)
        {
            printf("%d\t",j);
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

// 3
Enter number of rows and columns3
5
1       2       3       4       5
1       2       3       4       5
1       2       3       4       5
*/
#include<stdio.h>
void Patten(int iRow,int iCol)
{
    int i = 0 , j = 0; 
    for (i=1;i<=iRow;i++)
    {
        for(j=1;j<=iCol;j++)
        {
            printf("%d\t",j);
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


// 4. 
/*
Enter number of rows and columns3
4
#       *       #       *
#       *       #       *
#       *       #       *
*/

#include<stdio.h>
void Patten(int iRow,int iCol)
{
    int i = 0 , j = 0; 
    for (i=1;i<=iRow;i++)
    {
        for(j=1;j<=iCol;j++)
        {
            if(j%2==0)
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


// 5.
/*




*/

#include<stdio.h>
void Patten(int iRow,int iCol)
{
    int i = 0 , j = 0; 
    for (i=1  ; i<=iRow ; i++)
    {
        for(j=1 ; j<=iCol ; j++)
        {
            printf("%d\t",i);
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
