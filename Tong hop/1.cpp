#include <bits/stdc++.h>

using namespace std;

int main()
{

    fstream f, f1;
    int count = 0;
    string a[100];

    // open
    f.open("demtu.inp");
    if (f.fail())
        return 0;
    f1.open("demtu.out");
    if (f1.fail())
        return 0;

    // k can so dau tien
    f.ignore();
    f.ignore();

    // nhap string
    int index = 0;
    while (!f.eof())
    {
        f >> a[index];
        index++;
    }

    // check chu cai dau
    for (int i = 0; i < index; i++)
    {
        if ((a[i][0] >= 65 && a[i][0] <= 90) || (a[i][0] >= 97 && a[i][0] <= 122))
            count++;
    }
    f1 << count;

    f.close();
    f1.close();
    cout << "Chuong trinh ket thuc, kiem tra ket qua trong demtu.out";

    return 0;
}
