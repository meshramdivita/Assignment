/*1. Write java program which acccpet N number from user and accpet one another number as NO , 
 * check wether NO , check wether NO is present or Not.
 

 import java.util.*;
 class Number
 {
    boolean Check(int Arr[],int iNo)
    {
        int iCnt = 0 ; 
        for(iCnt  = 0 ; iCnt <= Arr[iCnt]; iCnt++)
        {
            if(Arr[iCnt] == iNo)
            {
                return true ;
            }
        }
        return false ; 
    }
 }
     class Assignment39
     {
        public static void  main (String Arg[])
        {
            Scanner scanner = new Scanner (System.in);
            System.out.println("Enter the Number (n) :");
            int n = scanner.nextInt();

            int[] arr = new int[n];
            System.out.println("Enter the elements  :" );

            
            for(int i = 0 ; i < n ;i++)
            {
                arr[i] = scanner.nextInt();
            }
            System.out.println("Enter the number to check (NO):");
            int no = scanner.nextInt();


            Number obj = new Number();
            boolean isPresent = obj. Check(arr,no);

            if (isPresent) {
                System.out.println("Number " + no + " is present in the array.");
            } else 
            {
                System.out.println("Number " + no + " is not present in the array.");
            }
    
        }   
 }
*/

/* 2. Write java program which accpet N numbers from and accpet one another as NO , return index of first occurance of that No 
import java.util.*;
class Number 
{
    public int FirstOcc(int Arr[] , int iNo)
    {
        int iCnt = 0 ; 
        for(iCnt = 0 ; iCnt < Arr.length ; iCnt ++ )
        {
            if(Arr[iCnt] == iNo)
            {
                return iCnt;
            }
        }
        return -1;
    }
}
class Assignment39
{
    public static void main (String Arg[])
    {
        int iRet = 0 ; 
        Scanner scanner = new Scanner(System.in);

        System.out.println("Enter the Number (N): ");
        int n = scanner.nextInt();


        int[] arr = new int[n];
        System.out.println("Enter the elements  :" );


        for(int i = 0 ; i < n ; i++)
        {
            arr[i] = scanner.nextInt();
        }
        System.out.println("Enter the elements (No) :");
        int No = scanner.nextInt();


        Number obj = new Number();
        iRet = obj.FirstOcc(arr,No);


        if (iRet != -1) {
            System.out.println("The first occurrence of number " + No + " is at index: " + iRet);
        } else {
            System.out.println("The number " + No + " is not present in the array.");
        }

    }
}
*/


/* 3.Write java program which accpet N number from user and accapet one enother as NO , return index of last occurance of that NO 
import java.util.*;
class Number
{
    public int LastOcc(int Arr[] , int iNo)
    {
        int iCnt = 0 ; 
        for(iCnt = 0 ; iCnt < Arr.length;iCnt++)
        {
            if(Arr[iCnt] == iNo)
            {
                return iCnt;
            }
        }
        return 1;
    }
}
class Assignment39
{
    public static void main(String Arg[])
    {
        int iRet = 0 ; 
        Scanner scanner = new Scanner (System.in);
        System.out.println("Enter the number (N) :");
        int n = scanner.nextInt();

        int[]arr = new int[n];
        System.out.println("Enter the elements :");


        for(int iCnt = 0 ; iCnt < n ; iCnt++)
        {
            arr[iCnt] = scanner.nextInt();
        }
        System.out.println("Enter the No (No):");
        int No = scanner.nextInt();

        Number obj = new Number();
        iRet = obj.LastOcc(arr,No);


        if (iRet != 1) {
            System.out.println("The first occurrence of number " + No + " is at index: " + iRet);
        } else {
            System.out.println("The number " + No + " is not present in the array.");
        }
    
    }
}
    */


/* 4. Write java program which accpet N number from user and accpet Range , Display all elements from that range 

import java.util.*;
class Number
{
    public void Display(int Arr[] , int iStart ,int iEnd)
    {
        int iCnt = 0 ; 

        System.out.println("Enter with in the range  "+ iStart + " to " + iEnd + " are");

        for(iCnt = 0 ; iCnt < Arr.length;iCnt++)
        {
            if(Arr[iCnt] == iStart && Arr[iCnt] == iEnd);
            {
                System.out.println(Arr[iCnt] + " ");
            }
        }
        System.out.println();
    }
}
class Assignment39
{
    public static void main(String Arg[])
    {
        int iRet = 0 ; 
        Scanner scanner = new Scanner (System.in);
        System.out.println("Enter the number (N) :");
        int n = scanner.nextInt();

        int[]arr = new int[n];
        System.out.println("Enter the elements :");


        for(int iCnt = 0 ; iCnt < n ; iCnt++)
        {
            arr[iCnt] = scanner.nextInt();
        }


        System.out.println("Enter the Starting point :");
        int Starting = scanner.nextInt();

        System.out.println("Enter the Ending point :");
        int Ending = scanner.nextInt();


        Number obj = new Number();
        obj.Display(arr,Starting ,Ending);
    
    }
}
    */

/* 5 . Write a java program which accpet N number from user and return product of all odd elements  */

import java.util.Scanner;

class Number {
    // Method to calculate the product of all odd elements
    public int ProductOfOdd(int Arr[]) {
        int product = 1; // Variable to store the product of odd numbers
        boolean hasOdd = false; // Flag to check if there are any odd numbers

        for (int iCnt = 0; iCnt < Arr.length; iCnt++) {
            if (Arr[iCnt] % 2 != 0) { // Check if the number is odd
                product *= Arr[iCnt];
                hasOdd = true; // Set flag to true if an odd number is found
            }
        }

        return hasOdd ? product : 0; // Return product if odd numbers exist, otherwise return 0
    }
}

public class Assignment39 {
    public static void main(String Arg[]) {
        Scanner scanner = new Scanner(System.in);

        // Accept the number of elements
        System.out.print("Enter the number of elements (N): ");
        int n = scanner.nextInt();

        int[] arr = new int[n];
        System.out.println("Enter the elements:");

        // Accept N elements from the user
        for (int iCnt = 0; iCnt < n; iCnt++) {
            arr[iCnt] = scanner.nextInt();
        }

        Number obj = new Number();
        int product = obj.ProductOfOdd(arr); // Call the method to calculate the product

        if (product != 0) {
            System.out.println("The product of all odd elements is: " + product);
        } else {
            System.out.println("No odd elements found in the array.");
        }
    }
}
