#include <stdio.h>
int show();
void main(){
    int a;
    printf("PISTA COUNT=");
    a=show();
    printf("%d", a);
}
int show(){
    return 10;
}