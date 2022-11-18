#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int **range;
    int a;
    int *ptr_a;
    int max;
    int min;
    int i;

    a = 10;
    //ptr_a = &a;
    //range = &ptr_a;
    printf("a : %d\n", a);
    //printf("*ptr_a : %d\n", *ptr_a);
    //printf("range[0] : %d\n", *range[0]);
    min = 1;
    max = 10;
    
    ptr_a = malloc((sizeof(int) * (max - min)));
    range = &ptr_a;
    i = 0;
    while (i < (max - min))
    {
        ptr_a[i] = min + i;
        
        printf("*ptr_a[%d] : %d\n",i,ptr_a[i]);
        
        i++;
    }
    printf("*range[%d] : %d\n",0,*(*(range)));
    i = 0;
    while (i < (max - min))
    {
        //*range[i] = min + i;
        printf("*range[%d] : %d\n",i,ptr_a[i]);
        i++;
    }
    free(ptr_a);
    return (0);
}