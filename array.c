#include <stdio.h>
void set_array(int array[]);
void set_int(int * x);
int main(void)
{
    int arr[4] = {1, 2, 3, 4};
    int a = 8;
    set_array(arr);
    set_int(&a);
    printf("%d %d", arr[0], a);
    printf("\n");

}

void set_array(int array[])
{
    array[0] = 56;
}
void set_int(int * x)
{
    *x = 2;
}