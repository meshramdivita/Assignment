/*
// Accpet N number from user and return the largest number .
#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0 

typedef int BOOL ; 

int Maximum (int Arr[] , int iLenght)
{
    int i , Max =Arr [0] ;
    for(i = 0 ; i < iLenght ; i++)
    {
        if(Arr[i] < Max)
        {
           Max = Arr[i];
        }
        return Max ;
    }
}
int main()
{
    int iSize = 0 , iRet = 0 , i = 0 , value ;
    int *p = NULL;
    
    printf("Enter number of elements ");
    scanf("%d",&iSize);

    p = (int *)malloc(iSize *sizeof(int));
    if(p == NULL)
    {
        printf("Unable to allocate memory");
        return -1 ;
    }
    
    printf("Enter %d elements :\n",iSize);
    for(i= 0 ; i < iSize ; i++)
    {
        printf("Enter element : %d",i+1);
        scanf("%d",&p[i]);
    }

    iRet = Maximum(p,iSize);

    printf("Largest Number is : %d\n ",iRet);

    free(p);
    return 0 ; 
}
Enter number of elements 6 
enter 6 elements :
enter elements : 85
enter elements : 88
enter elements : 90
enter elements : 87
enter elements : 3
enter elements : 81
Largest Number is : 85



// Accpet N number from user and return the largest number .
#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0 

typedef int BOOL ; 

int Minimun (int Arr[] , int iLenght)
{
    int i , Min = Arr [0] ;
    for(i = 0 ; i < iLenght ; i++)
    {
        if(Arr[i] > Min)
        {
           Min = Arr[i];
        }
        return Min ;
    }
}
int main()
{
    int iSize = 0 , iRet = 0 , i = 0 , value ;
    int *p = NULL;
    
    printf("Enter number of elements ");
    scanf("%d",&iSize);

    p = (int *)malloc(iSize *sizeof(int));
    if(p == NULL)
    {
        printf("Unable to allocate memory");
        return -1 ;
    }
    
    printf("Enter %d elements :\n",iSize);
    for(i= 0 ; i < iSize ; i++)
    {
        printf("Enter element : %d",i+1);
        scanf("%d",&p[i]);
    }

    iRet = Minimun(p,iSize);

    printf("Smallest Number is : %d\n ",iRet);

    free(p);
    return 0 ; 
}
Enter number of element 3 
enter element : 45
55
66
smallest Number is : 45


// 3. Accpet N number from user and return the difference between largest and smallest number 

#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL ; 

int Difference (int Arr[] , int iLenght)
{
    int i ;
    int Min , Max ;

    Min = Max = Arr[0];

    for(i = 0 ; i < iLenght ; i++)
    {
        if(Arr[i] > Max)
        {
             Max = Arr[i];
        }
        if (Arr[i] < Min)
        {
            Min = Arr[i];
        } 
    }
    return Max - Min ;
}
int main()
{
    int iSize = 0 , iRet = 0 , i = 0 , iValue = 0  ;
    int *p = NULL;

    printf("Enter number of elements ");
    scanf("%d",&iSize);

    p = (int *)malloc(iSize *sizeof(int));
    if(p == NULL)
    {
        printf("Unable to allocate memory");
        return -1 ;
    }
    
    printf("Enter elements  %d :",iSize);
    for(i= 0 ; i < iSize ; i++)
    {
        printf("Enter element : %d",i+1);
        scanf("%d",&p[i]);
    }

    iRet = Difference(p,iSize);

    printf("Difference is : %d\n ",iRet);

    free(p);
    return 0 ; 
}
*/

// Accpet N number from user and dispay all such number which contains 3 digits in it 

#include<stdio.h>
#include<stdlib.h>

void Digits(int Arr[] , int iLenght)
{
    int i = 0 , iNo ; 
    for(i = 0 ; i < iLenght ; i++)
    {
        int iNo = Arr[i];

        if ((iNo >= 100 && iNo <= 999) || (iNo <= -100 && iNo >= -999))
        {
            printf("%d ", iNo);
        }
        printf("\n");
    }
}
int main()
{
    int iSize = 0 , iRet = 0 , i = 0 , iValue = 0  ;
    int *p = NULL;

    printf("Enter number of elements ");
    scanf("%d",&iSize);

    p = (int *)malloc(iSize *sizeof(int));
    if(p == NULL)
    {
        printf("Unable to allocate memory");
        return -1 ;
    }
    printf("Enter elements  %d :",iSize);
    for(i= 0 ; i < iSize ; i++)
    {
        printf("Enter element : %d",i+1);
        scanf("%d",&p[i]);
    }
    Digits(p,iSize);
    free(p);
    return 0 ; 
}