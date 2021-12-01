/*

Name of the Author: SANCHIT PATIDAR
Date of First Creation: 01/10/2021
Date of Last Modification: 01/10/2021 

Program 7: Write a program to find out the Class, Network Address and Broadcast Address 
of the IP address provided by the user (in classful Addressing).    

*/

#include <iostream>
#include <algorithm>
#include <string>
using namespace std;


//**********to convert into binray
string dotted_decimal_to_binary(long int dec)
{
    string s="";
    int temp[8]={0};
    int i = 0;
    while (dec > 0)
    {
        temp[i]=  dec % 2;
        dec /= 2;
        i++;
    }
    reverse(temp, temp+8);

    for (int i = 0; i < 8; i++)
        s+=to_string(temp[i]);
    
    return s;
}
/* 
string convertIP(long int first, long int second, long int third, long int fourth)
{
        return (dotted_decimal_to_binary(first)+dotted_decimal_to_binary(second)+dotted_decimal_to_binary(third)+dotted_decimal_to_binary(fourth));
} 
*/
//***************************************************

int main()
{
    string s;
    long int first, second, third, fourth;
    cout << "Enter the IP Address in Dotted Decimal Notation: "<<endl;
    cout << " Enter First Octet: ";
    cin >> first;
    cout << "Enter Second Octet: ";
    cin >> second;
    cout << "Enter Third Octet: ";
    cin >> third;
    cout << "Enter Fourth Octet: ";
    cin >> fourth;

    string a= dotted_decimal_to_binary(first);
    string b= dotted_decimal_to_binary(second);
    string c= dotted_decimal_to_binary(third);
    string d= dotted_decimal_to_binary(fourth);
    
    cout<<a<<b<<c<<d;
    //<<convertIP(first,second,third,fourth);

return 0;
}
// 11000000101010000010000000000001
// 11000110101010000010000000000001