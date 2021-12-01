/*
Name of the Author: SANCHIT PATIDAR
Date of First Creation: 07/10/2021
Date of Last Modification: 07/10/2021 

Program 7: Write a program to find out the Class, Network Address and Broadcast Address 
of the IP address provided by the user (in classful Addressing).    
*/

#include <iostream>
#include <math.h>
using namespace std;
void IPClass(long long int hosts)
{
    if (hosts <= (pow(2, 8) - 2))
    {
        cout << "\n Suggested IP address Class/Classes: Class C";
    }
    else if (hosts <= (pow(2, 16) - 2))
    {
        cout << "\n Suggested IP address Class/classes: Class B";
    }
    else if (hosts <= (pow(2, 24) - 2))
    {
        cout << "\n Suggested IP address Class/Classes: Class A";
    }
    else
    {
        cout << "\n Invalid number of hosts";
    }
}
int main()
{
    long long int hosts;
    cout << "\n Enter number of hosts: ";
    cin >> hosts;

    IPClass(hosts);

    return 0;
}
