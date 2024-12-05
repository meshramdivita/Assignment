/*  Write a program check the 15th bit is on or off */
#include<iostream>
using namespace std ;
bool ChkBit(int iNo)
{
    int iMask= 0x400 ;
    int iResult = 0 ;
    iResult = iNo & iMask ;

    if(return == iMask )
    {
        return true ;
    }
    else 
    {
        return false ;
    }
}
int main()
{
    int iValue = 0 ; 

    bool bRet = false ; 

    cout<<"Enter the number :\n";
    cin>>iLocation ;

    bRet = ChkBit (iValue , iLocation );

    if(bRet == true )
    {
        cout<<"Bit is On\n";
    }
    else 
    {
        cout<<"Bit is OFF\n";
    }
    return 0 ; 
}


/*
 2. Write a program ehich check wether  5th and 18th bit is on or off */

#include<iostream>
using namespace std ; 

bool ChkBit(int iNo )
{

    int iResult = 0 ; 
    int iMask = 0x20010;

    iResult = iNo & iMask;

    if(iResult == iMask )
    {
        return true ;
    }
    else 
    {
        return false ; 
    }
}
int main()
{
    int iValue = 0 ; 
    bool bRet = false  ; 

    cout<<"Enter number \n :";
    cin>>iValue ; 

    bRet = ChkBit(iValue);

    if(bRet == true) 
    {
        cout<<"Bit is on \n";
    }
    else 
    {
        cout<<"Bit is off \n";
    }
    return 0 ; 
}


/* 3. Write a program which Check wether 7th 5th 21th 28th bit is on or off*/

#include<iostream>
using namespace std ; 

bool ChkBit(int iNo)
{
    int iResult = 0 ;
    int iMask = 0x8104040 ;

    iResult = iNo & iMask;

    if(iResult == iMask)
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
    bool bRet = false ; 

    cout<<"Enter the number :";
    cin>>iValue;

    bRet = ChkBit(iValue);

    if(bRet == true)
    {
        cout<<"The bit is on";
    }
    else 
    {
        cout<<"The bit id off"; 
    }
    return 0 ; 
}


/* Write a program which check wether 7th 8th 9th bit 
is on or off*/

#include<iostream>
using namespace std ; 

bool ChkBit(int iNo)
{
    int iMask = 0 ; 
    int iResult = 0 ; 

    iResult = iNo & iMask ;
    if(iResult = iMask)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int iValue = 0 ; 
    bool bRet = false ; 

    cout<<"Enter the number :";
    cin>>iValue ;

    bRet = ChkBit(iValue);

    if(bRet = true )
    {
        cout<<"The bit is ON";
    }
    else 
    {
        cout<<"The bit is OFF";
    }
    return 0 ; 
}

/* 5. Write a program which check wether first and last bit is on or off
First bit menas bit number 1 and last bit menas bit no 2 */

#include<iostream>
using namespace std ; 

bool ChkBit(int iNo)
{
    int iMask = 0x20000001;
    int iResult = 0 ; 

    if(iResult = iMask)
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
    bool iRet = false ; 

    cout<<"Enter the number :";
    cin>>iValue;

    iRet = ChkBit(iValue);

    if(iRet = true)
    {
        cout<<"The bit is ON";
    }
    else 
    {
        cout<<"The bit is OFF";
    }
    return 0 ; 
}