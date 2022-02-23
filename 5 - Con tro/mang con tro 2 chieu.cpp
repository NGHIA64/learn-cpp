#include <iostream>
using namespace std;
#include <stdlib.h>
 
int main() {
    int y , x;
    cout << ("Nhap so hang va so cot cua mang 2 chieu: ");
    cin >> y; 
    cin >>  x;
 
    int *nums2;
    //C?p ph�t b? nh? d?ng cho 1 m?ng g?m y�x ph?n t?
    //G�n d?a ch? m?ng tr�n v�o con tr? nums2
    nums2 = (int*)malloc(sizeof(int) * x * y);
 
    for(int i = 0; i < y; i++) {
        for(int j = 0; j < x; j++) {
             cin >>  nums2[i * x + j];//G�n gi� tr? nh?p t? b�n ph�m v�o ph?n t? 
        }
    }
    
    //In v� ki?m tra m?ng 2 chi?u v?a khai b�o
    cout << ("Mang 2 chieu vua nhap\n");
     for(int i = 0; i < y; i++) {
        for(int j = 0; j < x; j++) {
               if(j < x -1) {
                    cout << nums2[i * x + j] << " " ;
               } else {
                    cout << nums2[i * x + j] <<endl;
               }
        }
    }
    
    // Gi?i ph�ng b? nh?
    free(nums2);
 
    return 0;
}
