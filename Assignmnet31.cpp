/*
 Write a program which accpet string from user and copy that character of that string 
 character of that string into another string in reverse order . */
#include<iostream>
using namespace std ; 

void StrCpyRev(char *src , char *dest)
{
    char *end =src; 

    while(*end!='\0')
    {
         *end++;
        }
        end--;
    
    while(end>=src )
    {
        *dest = *end;
        dest++;
        end--;
    }
    *dest = '\0';
}
int main()
{
    char arr[30]="Marvellous Python";
    char brr[30];

    StrCpyRev(arr,brr);

    cout<< "Reversed string :" <<brr<<endl;

    return 0 ; 
}


/*
2. Write a program which accpet string from user and copy that character of that string into another string 
into another string by removing all white spaces */


#include<iostream>
using namespace std ; 

void StrCpyX(char *src , char *dest)
{
    while(*src!= '\0')
    {
        if(*src != ' ')
        {
            *dest = *src;
            dest++;
        }
        src++;
    }
    *dest ='\0';
}
int main()
{
    char arr[30]="Marvel  lous Pyth  on ";
    char brr[30];

    StrCpyX(arr,brr);

    cout<<"String without space  :"<<brr;
    return  0 ; 
}


/*
3. Write a program which accpet string from user and copy that character of that string into another string 
by converting all small character into capital case .*/

#include<iostream>
using namespace std ; 

void StrCpyCap(char *src , char *dest)
{
    while(*src!='\0')
    {
        if(*src>='a' && *src<='z')
        {
            *dest = *src - 32;
        }
        else 
        {
            *dest = *src;
        }
        src++;
        dest++;
    }
    *dest = '\0'; 
} 
int main()
{
    char arr[30] = "Marvellous Python 2";
    char brr[30];

    StrCpyCap(arr,brr);

    cout<< "Small character into capital case :"<<brr;

    return 0 ; 
}


/*
4.Write a program which accpet string from user and copy that character of that string into another 
string by converting all capital character into small case .*/

#include<iostream>
using namespace std ; 

void StrCpySmall(char *src,char *dest)
{
    while(*src!='\0')
    {
        if(*src >='A' &&  *src <="Z")
        {
            *dest = *src + 32;
        }
        else 
        {
            *dest = *src;
        }
        src++;
        dest++;
    }
    *dest = '\0';
}
int main()
{
    char arr[30] = "Marvellous Python 2";
    char brr[30];

    StrCpySmall(arr , brr);

    cout<<"String convert small character :"<<brr;
    return 0 ; 
}


/* Write a program which accpet string from user and copy that character of that string into another 
string by toggling the case .
 */

#include<iostream>
using namespace std;

void StrCpyToggle(char *src , char *dest)
{
    while (*src != '\0') // Traverse the source string until the null character
    {
        if (*src >= 'A' && *src <= 'Z') // If uppercase, convert to lowercase
        {
            *dest = *src + 32;
        }
        else if (*src >= 'a' && *src <= 'z') // If lowercase, convert to uppercase
        {
            *dest = *src - 32;
        }
        else // Copy other characters as is
        {
            *dest = *src;
        }

        src++;  // Move to the next character in source
        dest++; // Move to the next position in destination
    }
    *dest = '\0';
}

int main()
{
    char arr[30] = "Marvellous Python 2";
    char brr[30];

    StrCpyToggle(arr,brr)

    cout<<"String by Toggling the case :"<<brr;

    return 0 ; 
}