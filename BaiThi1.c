#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(){
    int n;
    int sotachra;
    int s = 0;
    printf("Nhap n: ");
    scanf("%d",&n);
    for(;n!=0;){
        sotachra = n % 10;
        s += sotachra;
        n /= 10;
    }    
    printf("%d",s);
}
