//Ho ten: Nguyen Thanh Cong
//MSV: 705105013
//Lop: COMP 267

#include <iostream>
#include <string>

using namespace std;

bool check(string s)
{
    string s1 = "";
    for (int i = s.length() - 1; i >= 0; i--)
    {
        s1 += s[i];
    }
    if (s1 == s)
        return true;

    return false;
}

void uppercase(string &a)
{
    for (int i = 0; i <= a.length(); i++)
    {
        if (a[i] >= 'a' && a[i] <= 'z')
        {
            a[i] -= 32;
        }
    }
}

int main()
{
    string s;
    cout << "Nhap  xau: ";
    getline(cin, s);
    check(s) ? cout << "Xau S la xau doi xung " << endl : cout << "Xau S khong la xau doi xung " << endl;
    uppercase(s);
    cout << "Xau sau khi chuyen thanh chu in hoa la: " << s;
    return 0;
}