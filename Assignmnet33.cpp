/*1.write a program which Accpet one number from user and off 7th bit of that number if it is on
return modified number
*/
#include<iostream>
using namespace std ; 

int offBit(int iNo)
{
    int iMask = ~0x40;
    int iResult = 0 ; 

    iResult = iNo & iMask ; 
    return iResult ; 
}
int main()
{
    int iValue = 0 ; 
    int iRet = 0 ; 

    cout<<"Enter the Number :";
    cin>>iValue ; 

    iRet = offBit(iValue);

    
     cout<<"The number after tuning off the 7th bit :"<<iRet;
    return 0 ; 
}


/* 2.  Write a program which accpet one number from user and off 7th and 10th 
bit of that number . Return modifierd number 

#include <iostream>
using namespace std;

bool CheckBits(int iNo)
{
    int iMask = 0x00000240; // Bitmask to check 7th (0x40) and 10th (0x200) bits
    int iResult = 0;

    iResult = iNo & iMask; // Perform bitwise AND to isolate 7th and 10th bits

    return (iResult == iMask); // Check if both bits are ON
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    cout << "Enter the number: ";
    cin >> iValue;

    bRet = CheckBits(iValue);

    if (bRet)
    {
        cout << "Both 7th and 10th bits are ON." << endl;
    }
    else
    {
        cout << "Either 7th or 10th bit is OFF." << endl;
    }

    return 0;
}
*/



/* 3.Write a program which accpet one number from user and toggle 7th bit of that number . Return modifier number .

#include<iostream>
using namespace std ; 
int ToggleBit(int iNo)
{
    int iMask = 0 ; 
    int iResult = 0 ; 

    iResult = iNo ^ iMask; 
    return iResult ; 
}
int main()
{
    int iValue = 0 ; 
    int iRet = 0 ; 

    cout<<"Enter number :";
    cin>>iValue ; 

    iRet = ToggleBit(iValue);

    cout<<"After Togglr the Bit :"<<iRet;

    return 0 ; 
}

*/

/* 4.Write a program which accpet one number from user and toggle 7th and 10 bit of that number . return modifier number  

#include<iostream>
using namespace std ; 
int ToggleBit(int iNo)
{
    int iMask = 0x00000240 ; 
    int iResult = 0 ; 

    iResult = iNo ^ iMask ; 

    return iResult ; 
}

int main()
{
    int iValue = 0 ; 
    int iRet = 0 ; 

    cout<<"Enter the number :";
    cin>>iValue ; 

    iRet = ToggleBit(iValue);

    cout<<"After the Toogle 7th Bit and 10th  :" <<iRet ;
    return 0 ; 
}
*/

/* 5. Write a program which accpet oen number form user and on its first 4 bits . 
Return modified number 

#include<iostream>
using namespace std ; 

int ToggleBit(int iNo)
{
    int iMask = 0x000F;
    int iResult = 0 ; 

    iResult = iNo | iMask;

    return iResult ;  
}
int main()
{
    int iValue = 0 ; 
    int iRet = 0 ; 

    cout<<"Enter the Number :";
    cin>>iValue ; 

    iRet = ToggleBit(iValue);

    cout<<"The first 4 Bit are On :"<<iRet ; 

    return 0 ; 
}

*/