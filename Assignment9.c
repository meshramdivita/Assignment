/*
// 1. Write a program which accept radius of circle from user and calculate its area. 
// input 5.3 output 88.2026

#include<stdio.h>
double CircleArea(float fRadius)
{
    double PI = 3.14;

    double Area ;
    Area = PI * fRadius * fRadius ;
    return Area ; 
}
int main()
{
    float fValue = 0.0;
    double dRet = 0.0 ; 
     
     printf("Enter Radius :");
     scanf("%f",&fValue);

     dRet = CircleArea(fValue);

     printf("The Area of Circle is :%lf\n",dRet);
    return 0 ; 
}
*/
// 2. Write a program which accept width & height of rectangle from user and calculate its area 
#include<stdio.h>
double RectArea(float fWidth , float fHeight)
{
    float Area ;
    Area = fWidth * fHeight ;
    return Area ;    
}
int main()
{
    float fValue1 = 0.0 , fValue2 = 0.0 ;
    double dRet = 0.0 ; 

    printf("Enter Width : ");
    scanf("%f",&fValue1);


    printf("Enter Height : ");
    scanf("%f",&fValue2);

    dRet = RectArea(fValue1 , fValue2 );
    printf("The area of rectangle : %lf\n", dRet);

    return 0 ; 
}
