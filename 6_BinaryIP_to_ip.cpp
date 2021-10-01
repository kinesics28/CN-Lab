/*

Name of the Author: Sanchit Patidar
Date of first Creation: 17/09/2021
Date of Last Modification: 17/09/2021 

Program 6: Write a program to convert IP address provided by the user in Binary notation to Dotted Decimal Notation entered by the user.
Sample Input: 
Enter the IP Address in Dotted Decimal Notation: 
Enter the Binary for first octet: 10001001 
Enter the Binary for second octet: 01111011 
Enter the Binary for third octet: 10000000 
Enter the Binary for fourth octet: 11111011
Sample Output: The given IP address is: 137.123.128.251
*/


#include <iostream>
#include<string>
#include<bitset>
using namespace std;


string convertIP_bin_to_Dec(string a, string b, string c, string d){


    int p,q,r,s;
    
    bitset<8> first(a);
    p = first.to_ulong(); // this will convert it into a long long int 
    bitset<8> second(b);
    q = second.to_ulong();
    bitset<8> third(c);
    r = third.to_ulong();
    bitset<8> fourth(d);
    s = fourth.to_ulong();

    string ans=to_string(p)+'.'+to_string(q)+'.'+to_string(r)+'.'+to_string(s);

    return ans;
}

int main()
{
    string a,b,c,d;
    cout<<"Enter the Binary for first octet:";
    cin>>a;
    cout<<"Enter the Binary for second octet:";
    cin>>b;
    cout<<"Enter the Binary for third octet:";
    cin>>c;
    cout<<"Enter the Binary for fourth octet:";
    cin>>d;

   
    cout<<"The given IP address is: "<<convertIP_bin_to_Dec(a,b,c,d);

    
return 0;
}
// 10001001   
// 01111011
// 10000000
// 11111011