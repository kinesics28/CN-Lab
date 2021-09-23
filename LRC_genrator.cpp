/* 
Name of the Author: Sanchit Patidar
Date of first Creation: 23/08/2021
Date of Last Modification: 23/08/2021 

Program 2: Write a program to generate LRC for a given Character.
Input: Character (Any digit or symbol)
(Generate binary according to the ASCII value)
Output: LRC with even/odd parity in 8 bits

C: 67	:		00100110			//8 bits 
E: 69:		    10110010			//8 bits
LRC: 		    00010100		

*/


#include <iostream>
#include <string>
#include<algorithm>
using namespace std;

string DecToBin(int x)
{
    string s;
    while (x > 0)
    {
        if (x % 2 == 1)
        {
            s += '1';
        }
        else
        {
            s += '0';
        }
        x = x / 2;
    }
    int n = s.length();

    for (int i = 0; i < n / 2; i++)
        swap(s[i], s[n - i - 1]);
    return s;
}

int main()
{
    char ch1,ch2;
    cout<<"Enter first character: ";
    cin>>ch1;
    cout<<"Enter second character: ";
    cin>>ch2;

    string c1,c2;
    c1=DecToBin(int(ch1));
    c2=DecToBin(int(ch2));

    if(c1.length()<8)
    {
        reverse(c1.begin(), c1.end());
        int x =(8-c1.length());
        while (x--)
        {
            c1+='0';
        }
        reverse(c1.begin(), c1.end());
    }

    if(c2.length()<8)
    {
        reverse(c2.begin(), c2.end());
        int x =(8-c2.length());
        while (x--)
        {
            c2+='0';
        }
        reverse(c2.begin(), c2.end());
    }
    
    string lrc;

    for (int i = 0; i < 8; i++)
    {
        if (c1[i]==c2[i])
            lrc+='0';
        else
            lrc+='1';
    }
    
    cout<<lrc<<endl;

    return 0;
}