#include <iostream.h>

// int array[]とint* arrayは同じ
void Display(int array[])
{
    int i;
    for(i = 0; i < 5; i++)
        cout << array[i] << endl;
}

// arrayは &a[0]とaは同じ
int main()
{
    int i;
    int n[5];

    for(i = 0; i < 5; i++)
        n[i] = i * 5;
    Display(n);

    return 0;
}