/* Write a program which accpet one number from user and count number of ON(1) bit in it without using % and / operator  
#include<iostream>
using namespace std ; 

int OffBit(int iNo)
{
    int iMask = 1 ;
    int iCount = 0 ; 

   while(iNo!=0)
   {
    if((iNo & iMask)!=0)
    {
        iCount++;
    }
    iNo = iNo >> 1 ;
   }
    return iCount ;
}
int main()
{
    int iValue = 0 ; 
    int iRet = 0 ; 

    cout<<"Enter the number ";
    cin>>iValue;

    iRet = OffBit(iValue);

    cout<<"The Number of ON bit are :"<< iRet;

    return 0 ;         
}
*/

/* 2. Write a program which accpet two number from user and display position of 
common ON bits from that two Numbers 

#include <iostream>
using namespace std;

// Function to display positions of common ON bits
void CommonBits(int iNo1, int iNo2)
{
    int iResult = iNo1 & iNo2; // Perform bitwise AND to find common ON bits
    int iPosition = 1;         // Start with the first bit
    cout << "Common ON bit positions: ";
    
    while (iResult != 0)
    {
        if (iResult & 1) // Check if the least significant bit is ON
        {
            cout << iPosition << " ";
        }
        iResult = iResult >> 1; // Shift right to check the next bit
        iPosition++;            // Move to the next position
    }
    cout << endl;
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    cout << "Enter the first number: ";
    cin >> iValue1;

    cout << "Enter the second number: ";
    cin >> iValue2;

    CommonBits(iValue1, iValue2); // Call the function to display common ON bit positions

    return 0;
}
*/