#include <stdio.h>
#include<math.h>
void update(int *a,int *b) {
    int sum,difference;
    sum=*a+*b  ;
    difference=abs(*a-*b);
    *a=sum;*b=difference;
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
