/*Write a program which accpet one number and position from user and check wether bit at that position is on or off
if bit is one return True other wise return false .*/
#include<iostream>
using namespace std ; 
bool ChkBit(int iNo , int iPos)
{
   int iMark = 1;
   int iResult = 0 ; 

   iMark = iMark << (iPos-1 );
   iResult = iMark & iNo ; 

   if(iResult == iMark)
   {
    return true; 
   }
   else 
   {
    return false ; 
   }
}
int main()
{
    int iValue = 0 ;
    int iLocation = 0 ; 
    bool iRet = false ; 

    cout<<"Enter the number :";
    cin>>iValue;

    cout<<"Enter the position :";
    cin>>iLocation; 

    iRet = ChkBit(iValue , iLocation);

    if(iRet == true)
    {
        cout<<"The bit is On";
    }
    else 
    {
        cout<<"The Bit is OFF";
    }
    return 0 ; 
}


/* 2. Write a program which accpet one number and position from user and off that bit */
return modified number .
#include<iostream>
using namespace std;

int OffBit(int iNo, int iPos)
{
    int iMask = 0x1;
    int iResult = 0;
    
    iMask = iMask << (iPos -1);
    iMask = ~iMask;
    
    iResult = iNo & iMask;
    return iResult;
}
int main()
{
    int iValue = 0, iRet = 0, iLocation = 0;

    cout<<"Enter the number : \n";
    cin>>iValue;

    cout<<"Enter the position : \n";
    cin>>iLocation;

    iRet = OffBit(iValue,iLocation);

    cout<<"Number after bit OFF : "<<iRet<<"\n";
    
    return 0;
}


/* 3. Write a porgram which accpet one number and position from user and on that bit .*/
 return number

 #include<iostream>
using namespace std;

int OnBit(int iNo, int iPos)
{
    int iMask = 0x1;
    int iResult = 0;
    iMask = iMask << (iPos -1);
    iResult = iNo | iMask;
    return iResult;
}
int main()
{
    int iValue = 0, iRet = 0, iLocation = 0;

    cout<<"Enter the number : \n";
    cin>>iValue;

    cout<<"Enter the position : \n";
    cin>>iLocation;

    iRet = OnBit(iValue,iLocation);

    cout<<"Number after bit ON : "<<iRet<<"\n";
    
    return 0;
}


/* 4.Write a program whcih accpet one number and position from user and toggle that bit . Return modified number .*/

#include<iostream>
using namespace std ; 

int ToggleBit(int iNo , int iPos)
{
    int iMask = 0x10;
    int iResult = 0 ; 

    iMask = iMask <<(iPos -1);
    iResult =  iNo ^ iMask ; 
    return iResult ; 
}
int main()
{
    int iValue = 0, iRet = 0, iLocation = 0;

    cout<<"Enter the number : \n";
    cin>>iValue;

    cout<<"Enter the position : \n";
    cin>>iLocation;

    iRet = ToggleBit(iValue,iLocation);

    cout<<"Number after Bit Toggle  : "<<iLocation <<iRet<<"\n";
    
    return 0;
}



/* 5. Write a program which accpet one number from user and toggle contents of first and last nibble of the number 
Return modified number (nibble is group of 4 digit number )*/

#include<iostream>
using namespace std ; 

int ToggleBit(int iNo)
{

 int FirstNibbleMask = 0xF0000000;
 int LastNibbleMask = 0x0000000F;

iNo ^= FirstNibbleBit; 
iNo ^= LastNibbleBit;

return iNo ; 
}

int main()
{
    int iValue = 0, iRet = 0;

    cout<<"Enter the number : \n";
    cin>>iValue;

    iRet = ToggleBit(iValue);

    cout<<"Number after the toggle Bit \n"<<iRet ;
    
    return 0;
}



