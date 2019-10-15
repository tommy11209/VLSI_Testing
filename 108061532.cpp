#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>

int main()
{

    bool x1[8], x2[8], x3[8];
    bool a[8], b[8];
    bool z[8];

    x1[0] = 0;
    x2[0] = 0;
    x3[0] = 0;

    x1[1] = 0;
    x2[1] = 0;
    x3[1] = 1;

    x1[2] = 0;
    x2[2] = 1;
    x3[2] = 0;

    x1[3] = 0;
    x2[3] = 1;
    x3[3] = 1;

    x1[4] = 1;
    x2[4] = 0;
    x3[4] = 0;

    x1[5] = 1;
    x2[5] = 0;
    x3[5] = 1;

    x1[6] = 1;
    x2[6] = 1;
    x3[6] = 0;

    x1[7] = 1;
    x2[7] = 1;
    x3[7] = 1;

    for(int i = 0; i < 8; i++ )
    {
        a[i] = !(x1[i] && x2[i]);
        b[i] = !(x2[i] || x3[i]);
        z[i] = !(a[i] || b[i]);
    }

    for(int i = 0; i < 8; i++)
    {
        std::cout << "x1 = " << x1[i];
        std::cout << " x2 = " << x2[i];
        std::cout << " x3 = " << x3[i] << std::endl;         
    }

    for(int i = 0; i < 8; i++ )
    {
        std::cout << "a = " << a[i];
        std::cout << " b = " << b[i];
        std::cout << " z = " << z[i] << std::endl;
    }

}
