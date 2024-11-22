//1 Accept N number from user and return difference between summation of even and summation of odd elements .

#include<stdio.h>
#include<stdlib.h>

int Difference(int Arr[],int iLenght)
{
    int iSumEven = 0 , iSumOdd = 0 ; 
    
    for (int i = 0 ; i < iLenght ; i++)
    {
        if (Arr[i] % 2 == 0)
        {
            iSumEven += Arr[i];
        }
        else 
        {
            iSumOdd +=Arr[i];
        }
    }
    return iSumEven - iSumOdd;
}
int main()
{
    int iSize = 0 , iRet = 0 , iCnt = 0 ;
    int *p = NULL; 

    printf("Enter number of elements");
    scanf("%d",&iSize);

    p = (int *) malloc(iSize*sizeof(int));
    
    if(p==NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }
    printf("Enter %d elements :\n ",iSize);

    for(iCnt = 0 ; iCnt<iSize ; iCnt++)
    {
        printf("Enter element : %d",iCnt+1);
        scanf("%d",&p[iCnt]);
    }
    iRet = Difference(p,iSize);

    printf("Result is %d\n",iRet);

    free(p);

    return 0 ;
}


// 2 . Accpet N number form user and display all such elements ehich are divisinle by 5.
#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[] , int iLenght)
{
    int i ;
    printf("Element divisible by 5 are :\n");
    for ( i = 0 ; i < iLenght ; i++)
    {
        if (Arr[i] % 5 == 0)
        {
            printf("%d",Arr[i]);
        }
    }
    printf("\n");
}
int main() {
    int iSize = 0, i = 0;
    int *p = NULL;

    printf("Enter number of elements: ");
    scanf("%d", &iSize);

    p = (int *)malloc(iSize * sizeof(int));
    if (p == NULL) {
        printf("Unable to allocate memory\n");
        return -1;
    }

    printf("Enter %d elements:\n", iSize);
    for (i = 0; i < iSize; i++) { // Correct loop condition
        printf("Enter element %d: ", i + 1);
        scanf("%d", &p[i]);
    }

    Display(p, iSize);

    free(p); // Free allocated memory
    return 0;
}



// 3 . which are ven and divisible by 5 .

#include<stdio.h>
#include<stdlib.h>

void Display (int Arr[] , int iLenght)
{
int i ;
printf("Elements that are even and divisible by 5 are:\n");
for(i = 0 ; i< iLenght ; i++)
{
    if(Arr[i] % 2==0 && (Arr[i] % 5==0))
    {
        printf("%d",Arr[i]);
    }
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
    printf("Enter %d elements :  ",iSize);

    for(iCnt = 0 ; iCnt<iSize ; iCnt++)
    {
        printf("Enter element  %d :",iCnt+1);
        scanf("%d",&p[iCnt]);
    }

   Display(p,iSize);

    free(p);

    return 0 ;
}

output 
Enter number of elements:6
Enter 6 elements: Enter element 1:85
Enter element 2:66
Enter element 3:3
Enter element 4:80
Enter element 5:93
Enter element 6:88
Elements that are even and divisible by 5 are:
80



// 4 . which are divisbile by 3 and 5 . 

#include<stdio.h>
#include<stdlib.h>
void Display (int Arr[] , int iLenght)
{    
    int i ; 
    printf("Enter the which are divisible by 3 and 5 are : ");
    for (i = 0 ; i < iLenght ; i++)
    {
        if( Arr[i] % 3 == 0 && (Arr[i] % 5 == 0))
        {
            printf("%d",Arr[i]);
        }
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
    printf("Enter %d elements :  ",iSize);

    for(iCnt = 0 ; iCnt<iSize ; iCnt++)
    {
        printf("Enter element  %d :",iCnt+1);
        scanf("%d",&p[iCnt]);
    }

   Display(p,iSize);
    free(p);
    return 0 ;
}
output output 
Enter number of elements:6
Enter 6 elements: Enter element 1:85
Enter element 2:66
Enter element 3:3
Enter element 4:80
Enter element 5:93
Enter element 6:88
Enter the which are divisible by 3 and 5 are : 15


// 5. 
#include<stdio.h>
#include<stdlib.h>

void Display (int Arr[] , int iLenght)
{
    int i ;
    printf("Elemnet are multiple by 11 are : ");
    for(i = 0 ; i < iLenght ; i++)
    {
        if (Arr[i] % 11 == 0 )
        {
            printf("%d",Arr[i]);
        }
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
    printf("Enter %d elements :  ",iSize);

    for(iCnt = 0 ; iCnt<iSize ; iCnt++)
    {
        printf("Enter element  %d :",iCnt+1);
        scanf("%d",&p[iCnt]);
    }

   Display(p,iSize);
    free(p);
    return 0 ;
}

// output 
output 
Enter number of elements:6
Enter 6 elements: Enter element 1:85
Enter element 2:66
Enter element 3:3
Enter element 4:55
Enter element 5:93
Enter element 6:88
Enter the which are divisible by 11 : 665588
