
// 1. write a program which accept radius of circle from user and calculate its area. consider value of p1 as 3.14 (Area = P1 * Radius * Radius ) 
#include<stdio.h>

double CircleArea (float radius)
{
    const float pi = 3.14;
    
    double Area = pi * radius * radius ;
    
    return  Area ;
}
int main()
{
    float fValue = 0.0 ;
    double dRet = 0.0 ; 

    printf("Enter radius ");
    scanf("%f",& fValue );

    dRet = CircleArea(fValue);

    printf("Area of Circle is : %2lf\n",dRet );

    return 0 ; 
}

// 2. Write a program which accept width & height of triangle from user and calculate its area (Area = width * height )
# include<stdio.h>
double RectArea(float fWidth , float fHeight )
{
    double Area ;
    Area = fWidth * fHeight ;
    return Area;
}
int main()
{
    float fValue1 = 0.0 , fValue2 = 0.0 ; 
    double dRet = 0.0 ; 

    printf("Enter width : ");
    scanf("%f",&fValue1);

    printf("Enter height : ");
    scanf("%f", &fValue2);

    dRet = RectArea(fValue1 , fValue2);

    printf("The Area of Triangle is :%2lf\n", dRet);

    return 0 ; 
}

// 3 . Write a program which accept distance in kilometer and convert it into meter ( 1 kilometer = 1000 Meter )
// input = 5 , output = 5000
#include<stdio.h>

int KMtoMeter(int iNo)
{
    int Kilometer = 5  , Meter ;
    Meter =   Kilometer * 1000 ;
    return Meter ;

}
int main()
{
    int iValue = 0 , iRet = 0 ; 

    printf("Enter Distance :");
    scanf("%d", &iValue);

    iRet = KMtoMeter(iValue);

    printf("The meter is : %d\n", iRet);

    return 0 ;
}


// 4 . Write a Program which accept temprature in Fahrenheit  and convert into  celsius . (1 celsius = (Fahrenheit - 32 ) * (5/9))
#include<stdio.h>
 double FhtoCs(float fTemp)
 {  double celsius ;
    celsius = (fTemp - 32)*(5.0 / 9.0);
    return celsius ; 
 } 
 int main()
 {  
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter temprature in Fahrenheit ");
    scanf("%d",&fValue);
    dRet = FhtoCs(fValue);

    printf("The celsius is :%2lf\n",dRet);

    return 0 ; 
 }
*/
// 5. write a program which aceept in square feet and convert it into square meter . (1 square feet = 0.0929 square meteer )

#include<stdio.h>
double SquareMeter(int iValue)
 {  
    double squarefeet ;
    double squaremeter; 

    squaremeter = iValue * 0.0929  ;

    return squaremeter ; 
 }
 int main()
 {
    int iValue = 0 ; 
    double dRet= 0.0 ;

    printf("Enter arear in square feet ");
    scanf("%d",&iValue);

    dRet = SquareMeter(iValue);

    printf("The square Meter is : %2lf\n", dRet);

    return 0 ; 
 }