#include <stdio.h>

void update(int *a,int *b) {
    int t1=*a, t2=*b;
    *a = t1+t2;
    *b = abs(t2-t1);  
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
