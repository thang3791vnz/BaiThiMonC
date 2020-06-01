#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
   char string[100];
  
   printf("Nhap chuoi ky tu in hoa: \n");
   gets(string);
  
   strlwr(string);
   printf("Chuoi chu in thuong la: %s\n", string);
  
   return (0);
}
