#include "ham.h"
int main(){
    int a,b;
    printf("nhap so a:"); scanf("%d",&a);
    printf("nhap so b:"); scanf("%d",&b);
    int k=sum(a,b);
    int f=div(a,b);
    printf("tong cua hai so la: %d\n",k);
    printf("tich  cua hai so la: %d\n",f);
    return 0;
}