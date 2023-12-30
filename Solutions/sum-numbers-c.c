#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int a, b, s1, d1;
    float c, d, s2, d2;
    scanf("%d %d", &a, &b);
    scanf("%f %f", &c, &d);
    s1 = a + b;
    s2 = c + d;
	d1 = a-b;
    d2 = c-d;
    printf("%d %d\n", s1, d1);
    printf("%.1f %.1f", s2, d2);
    return 0;
}
