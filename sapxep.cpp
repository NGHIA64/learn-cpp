#include<stdio.h>
#include<string.h>
 
int main() {
   char s[4][20];
   char t[20];
   int i, j;
   int size = 4;
 
   printf("\nNhap 4 chuoi bat ky: \n");
   for (i = 0; i < size; i++) {
      scanf("%s", s[i]);
   }
   // sap xep chuoi
   for (i = 1; i < size; i++) {
      for (j = 1; j < size; j++) {
         if (strcmp(s[j - 1], s[j]) > 0) {
            strcpy(t, s[j - 1]);
            strcpy(s[j - 1], s[j]);
            strcpy(s[j], t);
         }
      }
   }
 
   printf("\nSap xep thu tu cua cac chuoi:");
   for (i = 0; i < size; i++) {
      printf("\n%s", s[i]);
   }
   return(0);
}
