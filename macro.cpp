#include <iostream.h>

#define FUNC     void Func(int x, int y) 

FUNC;

int main()
{
    Func(1, 2);
    Func(158, 144);
    return 0;
}

FUNC
{
    cout << "2 * " << x << " + " << y
         << " = " << 2 * x + y << endl;
}