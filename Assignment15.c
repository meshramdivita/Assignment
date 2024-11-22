
// 1 .Accpet N number from user and acc[et one another number as NO . check wether No is presnet or not 

#include<stdio.h>
#include<stdlib.h>

#define TRUE 1 
#define FALSE 0 

typedef int BOOL ; 

BOOL Check(int Arr[] , int iLenght , int iNo)
{
    int i = 0 ;
    for(i = 0 ; i < iLenght ; i++)
    {
        if(Arr[i] == iNo )
        {
            return TRUE ;
        }
    }
    return FALSE ;
}
int main()
{
    int iSize = 0, i = 0, iValue = 0;
    int *p = NULL;
    BOOL bRet = FALSE;

    printf("Enter number of elements: ");
    scanf("%d", &iSize);

    p = (int *)malloc(iSize * sizeof(int));
    if (p == NULL)
    {
        printf("Memory allocation failed\n");
        return -1;
    }

    printf("Enter the elements:\n");
    for (i = 0; i < iSize; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &p[i]);
    }

    printf("Enter the number to check: ");
    scanf("%d", &iValue);

    bRet = Check(p, iSize, iValue);

    if (bRet == TRUE)
    {
        printf("Number is present\n");
    }
    else
    {
        printf("Number is not present\n");
    }

    free(p); // Free allocated memory
    return 0;
}

Enter number of elements : 4
Enter the elements :
Enter element 1 : 33
Enter element 2 : 44
Enter the number to check : 33
Number id present 



// 2 . Accept N number from and accept one another number as No , return index of frist occurance of that NO.
#include<stdio.h>
#include<stdlib.h>

int FirstOcc(int Arr[] , int iLenght , int iNo)
{
    int i = 0 ; 
    for(i = 0 ; i< iLenght ; i++)
    {
        if(Arr[i] == iNo)
        {
            return i ;
        }
    }
    return -1;
}
int main()
{
    int iSize = 0, i = 0, iValue = 0;
    int *p = NULL;
    int iRet = 0 ;
    
    printf("Enter number of elements: ");
    scanf("%d", &iSize);

    printf("Enter the number ");
    scanf("%d",&iValue);

    p = (int *)malloc(iSize * sizeof(int));
    if (p == NULL)
    {
        printf("unable to allocate memory");
        return -1;
    }
    printf("Enter the elements:\n");
    for (i = 0; i < iSize; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &p[i]);
    }

    printf("Enter the number to check: ");
    scanf("%d", &iValue);

    iRet = FirstOcc(p, iSize, iValue);

    if (iRet == -1)
    {
        printf("There is no such number \n");
    }
    else
    {
        printf("First occcurrence of number is %d\n",iRet);
    }
    free(p); // Free allocated memory
    return 0;
}



// 3 . Acccpet N number from user and accpet one another number as No , return index of last Occurance of that NO .
#include<stdio.h>
#include<stdlib.h>

#define TRUE 1 
#define FALSE 0 

typedef int BOOL ; 

int LastOcc(int Arr[],int iLenght , int iNo)
{

}
int main()
{
    int iSize = 0 , iRet = 0 , iCnt = 0 , iValue = 0 ;
    int *p = NULL;
    BOOL bRet = FALSE ;

    printf("Enter number of elements :");
    scanf("%d",&iSize);

    printf("Enter the number :");
    scanf("%d",&iValue);

    p = (int *)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Enter elements %d", iLenght);
        return - 1;
    }
    
    printf("Enter %d element",iLenght);

    for(iCnt = 0 ; iCnt , iLeght ; iCnt ++)
    {
        printf("Enter elements : %d",iCnt+1);
        scanf("%d",&p[iCnt]);
    }
    iRet = LastOcc(p,size,iValue);

    if(iRet == -1)
    {
        printf("There is no such number ");
    }
    else 
    {
        printf("Last occurence of Number is %d",iRet);
    }

    free(p)
    return 0 ;
}



// 4 . Accpet N number from user and accept Range , Display all elements from that range 
#include<stdio.h>
#include<stdlib.h>

void Range (int Arr[], int iLenght , int iStart , int iEnd)
{
    int i = 0 ; 
    for (i = 0 ; i < iLenght ; i++)
    {
        if(Arr[i] >= iStart && Arr[i] <= iEnd)
        {
            printf("%d",Arr[i]);
        }
    }
    printf("\n");
}
int main()
{
    int iSize = 0, iRet = 0 , iValue1 = 0 , iValue2 = 0 ;
    int *p = NULL ;
    
    int iCnt = 0 ;

    printf("Enter number of elements ");
    scanf("%d",&iSize);

    printf("Enter the starting point");
    scanf("%d",&iValue1);

    printf("Enter the ending point");
    scanf("%d",&iValue2);

    p = (int *)malloc(iSize * sizeof(int));
    if (p == NULL)
    {
        printf("Unable to allocate memory");
        return -1 ;
    }

    printf("Enter  elements %d " , iSize);
    for (iCnt = 0 ; iCnt < iSize ; iCnt++)
    {
        printf("Enter elements : %d",iCnt+1);
        scanf("%d",&p[iCnt]);
    } 
    Range(p, iSize , iValue1, iValue2);

    free(p);

    return 0 ;
}


// 5 . Accpet N number from user and return product of all odd elements . 

#include<stdio.h>
#include<stdlib.h>

int Product(int Arr[] , int iLenght)
{
    int iCnt; 
    int iProduct = 1 ;
    int hasOdd = 0 ; 

    for(iCnt = 0 ; iCnt < iLenght ; iCnt ++)
    {
        if(Arr[iCnt]%2!=0 )
        {
            iProduct *= Arr[iCnt];
            hasOdd = 1;
        }
    }
    if (hasOdd == 0)
    {
        return 0 ;
    }
    return iProduct;
}
int main()
{
    int iSize = 0 , iRet = 0 , iCnt = 0 ; 
    int *p = NULL ;
    int iLenght ; 

    printf("Enter number of elements");
    scanf("%d",&iSize);

    p = (int *)malloc (iSize * sizeof(int));

    if( p == NULL)
    {
         printf("Enter elements %d ", iLenght);
         return -1 ;
    }
    
    printf("Enter elements %d",iSize);

    for(iCnt = 0 ; iCnt <iSize ; iCnt++)
    {
        printf("Enter elements : %d",iCnt + 1);
        scanf("%d",&p[iCnt]);
    }

    iRet = Product(p ,iSize);

    printf("Product is %d",iRet);

    free(p);

    return 0 ; 
}
Enter number of elements : 6 
enter elements 6 enter elements :15
66
3
70
10
88
product is 45
