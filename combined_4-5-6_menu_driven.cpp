/*

Name of the Author: Sanchit Patidar
Date of first Creation: 26/09/2021
Date of Last Modification: 26/09/2021 

Program 7: Write a menu driven program to find class of an IP,
convert binary ip to decimal ip and vice versa.

*/

#include <iostream>
#include <algorithm>
#include <string>
#include <bitset>

using namespace std;

int dotted_decimal_to_binary(long int dec)
{
    int bArr[8] = {0};
    int i = 0;
    while (dec > 0)
    {
        bArr[i] = dec % 2;
        dec /= 2;
        i++;
    }

    int n = sizeof(bArr) / sizeof(bArr[0]);
    reverse(bArr, bArr + n);

    for (int i = 0; i < 8; i++)
    {
        cout << bArr[i];
    }
    cout << " ";
}

void convertIP(long int first, long int second, long int third, long int fourth)
{
    cout << "IP Address in Dotted Decimal Notation: " << first << "." << second << "." << third << "." << fourth;
    if ((0 <= first && first <= 255) && (0 <= second && second <= 255) && (0 <= third && third <= 255) && (0 <= fourth && fourth <= 255))
    {
        cout << "\n IP Address in Binary Notation: ";
        dotted_decimal_to_binary(first);
        dotted_decimal_to_binary(second);
        dotted_decimal_to_binary(third);
        dotted_decimal_to_binary(fourth);
    }
    else
    {
        cout << "\n Invalid Address ";
    }
}

string convertIP_bin_to_Dec(string a, string b, string c, string d)
{

    int p, q, r, s;

    bitset<8> first(a);
    p = first.to_ulong(); // this will convert it into a long long int
    bitset<8> second(b);
    q = second.to_ulong();
    bitset<8> third(c);
    r = third.to_ulong();
    bitset<8> fourth(d);
    s = fourth.to_ulong();

    string ans = to_string(p) + '.' + to_string(q) + '.' + to_string(r) + '.' + to_string(s);

    return ans;
}

void classOfIP(int first, int second, int third, int fourth)
{
    cout << "IP Address in Dotted Decimal Notation: " << first << "." << second << "." << third << "." << fourth;
    if ((0 <= first && first <= 255) && (0 <= second && second <= 255) && (0 <= third && third <= 255) && (0 <= fourth && fourth <= 255))
    {
        if (0 <= first && first <= 127)
        {
            cout << "\n It is a Class A Address ";
        }
        else if (128 <= first && first <= 191)
        {
            cout << "\n It is a Class B Address ";
        }
        else if (192 <= first && first <= 223)
        {
            cout << "\n It is a Class C Address ";
        }
        else if (224 <= first && first <= 239)
        {
            cout << "\n It is a Class D Address ";
        }
        else if (240 <= first && first <= 255)
        {
            cout << "\n It is a Class E Address ";
        }
    }
    else
    {
        cout << "\n Invalid Address ";
    }
}

int main()
{
    cout << "Press 1 to Convert Dotted decimal to IP " << endl;
    cout << "Press 2 to Convert Binary IP to Decimal IP " << endl;
    cout << "Press 1 to Find class on an IP " << endl;
    int x;
    cin >> x;
    if (x == 1)
    {
        long int first, second, third, fourth;
        cout << "Enter the IP Address in Dotted Decimal Notation: " << endl;
        cout << " Enter First Octet: ";
        cin >> first;
        cout << "Enter Second Octet: ";
        cin >> second;
        cout << "Enter Third Octet: ";
        cin >> third;
        cout << "Enter Fourth Octet: ";
        cin >> fourth;

        convertIP(first, second, third, fourth);
    }
    else if (x == 2)
    {
        string a, b, c, d;
        cout << "Enter the Binary for first octet:";
        cin >> a;
        cout << "Enter the Binary for second octet:";
        cin >> b;
        cout << "Enter the Binary for third octet:";
        cin >> c;
        cout << "Enter the Binary for fourth octet:";
        cin >> d;

        cout << "The given IP address is: " << convertIP_bin_to_Dec(a, b, c, d);
    }
    else
    {
        int first, second, third, fourth;
        cout << "Enter the IP Address in Dotted Decimal Notation: " << endl;
        cout << "Enter First Octet: ";
        cin >> first;
        cout << "Enter Second Octet: ";
        cin >> second;
        cout << "Enter Third Octet: ";
        cin >> third;
        cout << "Enter Fourth Octet: ";
        cin >> fourth;

        classOfIP(first, second, third, fourth);
    }

    return 0;
}