//Ho ten: Nguyen Thanh Cong
//MSV: 705105013
//Lop: COMP 267

#include <iostream>
#include <fstream>

using namespace std;

struct HANGHOA
{
    float gt;
    int sl;
};

int sum(HANGHOA a[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i].gt >= 20)
            sum += a[i].gt;
    }
    return sum;
}

float max(HANGHOA a[], int n)
{
    float max = a[0].gt;
    for (int i = 1; i < n; i++)
    {
        if (a[i].gt > max)
        {
            max = a[i].gt;
        }
    }
    return max;
}

int main()
{
    int n;
    fstream f, f1;

    f.open("hanghoa.inp");
    if (f.fail())
    {
        cout << "Mo file hanghoa.inp that bai";
        return 0;
    }

    f1.open("hanghoa.out");
    if (f1.fail())
    {
        cout << "Mo file hanghoa.out that bai";
        return 0;
    }

    f >> n;

    HANGHOA a[n - 1];

    for (int i = 0; i < n; i++)
    {
        f >> a[i].gt;
    }
    for (int i = 0; i < n; i++)
    {
        f >> a[i].sl;
    }

      f1 << sum(a, n);

    float m = max(a, n);
    f1 << endl;
    for (int i = 0; i < n; i++)
    {
        if (a[i].gt == m)
        {

            f1 << a[i].sl << " ";
        }
    }

    f.close();
    f1.close();
    cout << "Chuong trinh ket thuc kiem tra ket qua trong file hanghoa.out";
    return 0;
}