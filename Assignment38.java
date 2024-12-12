/* 1. write a java program which accpet number from user and return the count of even digits 

import java.util.*;
class Digit
{
    public int CountEven(int iNo)
    {
        int iCnt = 0 ; 
        int iEvenCount = 0 ; 
        int digit = 0 ; 


        while(iCnt < iNo)
        digit = iNo % 10 ; 
        {
            if(iCnt % 2 == 0)
            {
                iEvenCount++;      
            }
            iNo = iNo / 10 ; 
        }
        return iEvenCount;
    }
}
class Assignment38
{
    public static void main(String Arg[])
    {
        int iRet = 0 ; 
        int iValue = 0 ; 

        Scanner scanner = new Scanner(System.in);
        System.out.println("Enter Number : ");

        int n = scanner.nextInt();
        
        Digit obj = new Digit(); 
        iRet = obj.CountEven(iValue);

        System.out.println("The Output of the even number : "+ iRet);
    }    
}
*/

/*  write a java program which accpet number from user and return the count of odd digits 
import java.util.*;
class Digit
{
    public int CountOdd(int iNo)
    {
        
        int iOddCount = 0 ; 
        int digit = 0 ; 

        while(iNo > 0 )
        {
        digit = iNo % 10 ; 
        
            if(digit % 2!= 0)
            {
                iOddCount++;      
            }
            iNo = iNo / 10 ; 
        }
        return iOddCount;
    }
}
class Assignment38
{
    public static void main(String Arg[])
    {
        int iRet = 0 ; 
        Scanner scanner = new Scanner(System.in);
        System.out.println("Enter Number : ");

        int n = scanner.nextInt();
        
        Digit obj = new Digit(); 
        iRet = obj.CountOdd(n);

        System.out.println("The Output of the odd number : "+ iRet);
    }    
}

*/

/* 3. Write a program which accpet number from user and return the count of digits in betweeen 3 and 7  
import java.util.*;
class Digit
{
    public int CountRange(int iNo)
    {
        
        int Count = 0 ; 
        int digit = 0 ;  

        while(iNo > 0 )
        {
            digit = iNo % 10 ; 
        
            if(digit >= 3 &&  digit <= 7)
            {
                Count++;      
            }
            iNo = iNo / 10 ; 
        }
        return Count;
    }
}
class Assignment38
{
    public static void main(String Arg[])
    {
        int iRet = 0 ; 
        Scanner scanner = new Scanner(System.in);
        System.out.println("Enter Number : ");

        int n = scanner.nextInt();
        
        Digit obj = new Digit(); 
        iRet = obj.CountRange(n);

        System.out.println("The Output of the Range is : "+ iRet);
    }    
}

*/

/* 4.  Write a [rogarm which accpet number from user and return the Multiplication of all digits 
import java.util.*;
class Digit
{
    public int Multiply(int iNo)
    {
        
        int Multiply = 1 ; 
        int iDigit = 0 ;  

        while(iNo > 0 )
        {
            iDigit = iNo % 10 ; 

            Multiply = Multiply * iDigit ; 
    
            iNo = iNo / 10 ; 
        }
        return Multiply;
    }
}
class Assignment38
{
    public static void main(String Arg[])
    {
        int iRet = 0 ; 

        Scanner scanner = new Scanner(System.in);
        System.out.println("Enter Number : ");

        int n = scanner.nextInt();
        
        Digit obj = new Digit(); 
        iRet = obj.Multiply(n);

        System.out.println("The Output of the Multiplication  is : "+ iRet);
    }    
}
*/


/* 5. Write a program which accpet number from user and retur difference between summation of even digits and summation of odd digits  */

import java.util.Scanner;

import java.util.*;
class Digit
{
    public int CountDiff(int iNo)
    {
        
        int EvenDigit = 0 ; 
        int OddDigit = 0 ;  
        int iDigit = 0 ; 

        while(iNo > 0  )
        {
            iDigit = iNo % 10 ; 

            if(iDigit % 2 == 0 )
            {
                EvenDigit = EvenDigit + iDigit; 
            }
            else
            {
                OddDigit = OddDigit + iDigit; 
            }
            iNo = iNo / 10 ; 
        }
        return EvenDigit - OddDigit ;
    }
}
class Assignment38
{
    public static void main(String Arg[])
    {
        int iRet = 0 ; 

        Scanner scanner = new Scanner(System.in);
        System.out.println("Enter Number : ");

        int n = scanner.nextInt();
        
        Digit obj = new Digit(); 
        iRet = obj.CountDiff(n);

        System.out.println("The Output is : "+ iRet);
    }    
}
