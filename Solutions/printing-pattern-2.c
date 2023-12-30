#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    int n;
    scanf("%d", &n);
  	int i, j;
    for (i = 1; i < 2 * n; i++)
    {
        for (j = 1; j < 2 * n; j++)
        {
            int val;
            if (abs(i - n) > abs(j - n))
            {
                val = 1 + abs(i - n);
            }
            else
            {
                val = 1 + abs(j - n);
            }
            printf("%d ", val);
        }
        printf("\n");
    }
    return 0;
}