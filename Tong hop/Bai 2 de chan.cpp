#include <iostream>
#include <cmath>
#include <fstream>

using namespace std;

int max(int s[], int n) {
    int maxx = s[0];
    for (int i = 1; i < n; i++) {
        if (s[i] > maxx) maxx = s[i];
    }
    return maxx;
}

int min(int s[], int n) {
    int minn = s[0];
    for (int i = 1; i < n; i++) {
        if (s[i] < minn) minn = s[i];
    }
    return minn;
}

bool snt(int n) {
    if (n < 2) return false;
    else {
        for (int i = 2; i <= sqrt(n); i++) {
            if (n % i == 0) return false;
        }
    }
    return true;
}

int sum(int s[], int n) {
    int tong = 0;
    for (int i = 0; i < n; i++) {
        if (snt(s[i])) {
            tong += s[i];
        }
    }
    return tong;
}

int demx(int s[], int n, int x) {
    int dem = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == x) {
            dem++;
        }
    }
    return dem;
}

void sapxep(int s[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (s[i] >= s[j]) {
                int temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
    }
}
}

int main() {
    ifstream inp;
    inp.open("songuyen.inp");
    int x, n, s[1000], i = 0;
    inp >> x;
    inp.seekg(2, ios::beg);
    while(!inp.eof()) {
        inp >> n;
        s[i] = n;
        i++;
    }
    inp.close();
    fstream out;
    out.open("songuyen.out");
    out << max(s, i) << " " << min(s, i) << endl;
    out << sum(s, i) << endl;
    out << demx(s, i, x) << endl;
    sapxep(s, i);
    for (int j = 0; j < i; j++) {
        out << s[j] << " ";
    }
    out.close();
    return 0;
}
