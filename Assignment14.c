/*
#include<stdio.h>
#include<stdlib.h>

int CountFrequency(int Arr[] , int iLenght , int iNo)
{
    int i = 0  ; 
    int Frequency = 0 ;
    for ( i = 0 ; i < iLenght ; i ++)
    {
        if (Arr[i] == iNo)
        {
            Frequency++;
        }
    }
    return Frequency ; 
}
int main()
{
    int iSize = 0 , iRet = 0 , iCnt = 0 , iNumber = 0 ;
    int *p = NULL; 
    int iLenght = 0 ; 

    printf("Enter number of elements : ");
    scanf("%d",&iSize);

    p = (int *) malloc(iSize*sizeof(int));
    
    if(p==NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }
    printf("Enter elements %d : ", iSize);

    for(iCnt = 0 ; iCnt<iSize ; iCnt++)
    {
        printf("Enter element  %d :",iCnt+1);
        scanf("%d",&p[iCnt]);
    }

    printf("Enter the number of find its frequency:");
    scanf("%d", &iNumber);

    iRet = CountFrequency( p , iSize, iNumber);
    printf("Result is %d",iRet);
    free(p);
    return 0 ;
}
 output 
 Enter number of elements: 6
Enter 6 elements:
Enter element 1: 85
Enter element 2: 66
Enter element 3: 3
Enter element 4: 80
Enter element 5: 93
Enter element 6: 88
Enter the number to find its frequency: 11
the frequency of number is : 0;

*/




/*
// 2.  Accpet n number from user and return different diffrence between frequncy of even and off numner .
#include<stdio.h>
#include<stdlib.h>

int CountEven(int Arr[] , int iLenght)
{
    int i = 0  ; 
    int Frequency = 0  , iNo ;
    int iEven = 0 ;
    int iOdd = 0;

    for ( i = 0 ; i < iLenght ; i++)
    {
        if (Arr[i] % 2 == 0)
        {
           iEven++;
        }
        else 
        {
            iOdd++;
        }
    }
    return  iEven - iOdd ; 
}
int main()
{
    int iSize = 0 , iRet = 0 , iCnt = 0 ;
    int *p = NULL; 
    int iLenght = 0 ; 

    printf("Enter number of elements : ");
    scanf("%d",&iSize);

    p = (int *) malloc(iSize*sizeof(int));
    
    if(p==NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }
    printf("Enter %d elements :  ", iSize);

    for(iCnt = 0 ; iCnt<iSize ; iCnt++)
    {
        printf("Enter element  %d :",iCnt+1);
        scanf("%d",&p[iCnt]);
    }
    iRet = CountEven( p , iSize);
    printf("Result is %d",iRet);
    free(p);
    return 0 ;
}
Enter number of element : 7 
enter 7 elements : enter element 1 = 66
85
3
80
93
88
90
result is : 1

 // 3 , Accpet N number from user check whether that number contain 11 in it or not .

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

#define TRUE 1
#define FALSE 0 ; 

typedef int BOOL;

BOOL Check(int Arr[] , int iLenght )
{
    int iCnt = 0 ; 
    int iSize = 0 ;
    for(iCnt = 0 ; iCnt < iLenght ; iCnt ++)
    {
        break;
    }
    if ( Arr[iCnt] == 11)
    {
        return true  ;
    }
    else 
    {
        return false ;
    }
}
int main()
{
    int iSize = 0 , iRet = 0 , iCnt = 0 ;
    int *p = NULL; 
    int iLenght = 0 ; 
    BOOL bRet = FALSE ; 

    printf("Enter number of elements : ");
    scanf("%d",&iSize);

    p = (int *) malloc(iSize*sizeof(int));
    
    if(p==NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }
    printf("Enter elements  %d :", iSize);

    for(iCnt = 0 ; iCnt<iSize ; iCnt++)
    {
        printf("Enter element  %d :",iCnt+1);
        scanf("%d",&p[iCnt]);
    }
    bRet = Check( p , iSize);

    if(bRet == TRUE)
    {
        printf("11 is present");
    }
    else 
    {
        printf("11 is absent ");
    }
    free(p);
    return 0 ;
}

Enter number of elements : 3
Enter elements  3 :Enter element  1 :11
Enter element  2 :22
Enter element  3 :33
11 is present

// 4 . Accept N Number from user and return frequency of 11 from it .
#include<stdio.h>
#include<stdlib.h>

int CountEven(int Arr[] , int iLenght)
{
    int i = 0  ; 
    int Frequency = 0  , iNo ;
    int iEven = 0 ;
    int iOdd = 0;

    for ( i = 0 ; i < iLenght ; i++)
    {
        {
        if (Arr[i] == iNo)
        {
            Frequency++;
       }
    }
    return Frequency ; 
    } 
}
int main()
{
    int iSize = 0 , iRet = 0 , iCnt = 0 ;
    int *p = NULL; 
    int iLenght = 0 ; 

    printf("Enter number of elements : ");
    scanf("%d",&iSize);

    p = (int *) malloc(iSize*sizeof(int));
    
    if(p==NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }
    printf("Enter %d elements :  ", iSize);

    for(iCnt = 0 ; iCnt<iSize ; iCnt++)
    {
        printf("Enter element  %d :",iCnt+1);
        scanf("%d",&p[iCnt]);
    }
    iRet = CountEven( p , iSize);
    printf("Result is %d",iRet);
    free(p);
    return 0 

}

*/

// 5 . Accept N number from user and accept one anotjer number as NO , return frequency of NO from it .

#include<stdio.h>
#include<stdlib.h>

int CountEven(int Arr[] , int iLenght)
{
    int i = 0  ; 
    int Frequency = 0  , iNo ;
    int iEven = 0 ;
    int iOdd = 0;

    for ( i = 0 ; i < iLenght ; i++)
    {
        {
        if (Arr[i] == iNo)
        {
            Frequency++;
       }
    }
    return Frequency ; 
    } 
}
int main()
{
    int iSize = 0 , iRet = 0 , iCnt = 0 ;
    int *p = NULL; 
    int iLenght = 0 ; 

    printf("Enter number of elements : ");
    scanf("%d",&iSize);

    p = (int *) malloc(iSize*sizeof(int));
    
    if(p==NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }
    printf("Enter %d elements :  ", iSize);

    for(iCnt = 0 ; iCnt<iSize ; iCnt++)
    {
        printf("Enter element  %d :",iCnt+1);
        scanf("%d",&p[iCnt]);
    }
    iRet = CountEven( p , iSize);
    printf("Result is %d",iRet);
    free(p);
    return 0 
}
