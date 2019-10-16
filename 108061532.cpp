
#include <iostream>

int main()
{
    std::cout << "=================================" << std::endl;
    std::cout << std::endl;
    std::cout << "Truth table = " << std::endl;
    std::cout << std::endl;
    int x1, x2, x3;
    int a = 0, b = 0, z = 0;
    for(int x1 = 0; x1 < 2; x1++)
    {
        for(int x2 = 0; x2 < 2; x2++)
        {
            for(int x3 = 0; x3 < 2; x3++)
            {
                a = !(x1 && x2);
                b = !(x2 || x3);
                z = !(a || b);
                std::cout << "x1 = " << x1 << " x2 = " << x2 << " x3 = " << x3;
                std::cout << " a = " << a << " b = " << b << " z = " << z << std::endl;
                std::cout << std::endl;
            }
        }
    }
    std::cout << std::endl;
    std::cout << std::endl;



    a = 0, b = 0, z = 0;
    int stuck_a0 = 0;
    int counter = 0, fault_a = 0;

    std::cout << "All input vectors that can test signal 'a' stuck-at-0 fault" << std::endl;
    for(int x1 = 0; x1 < 2; x1++)
    {
        for(int x2 = 0; x2 < 2; x2++)
        {
            for(int x3 = 0; x3 < 2; x3++)
            {
                a = !(x1 && x2);
                b = !(x2 || x3);
                z = !(a || b);
                fault_a = !(stuck_a0 || b);
                std::cout << "x1 = " << x1 << " x2 = " << x2 << " x3 = " << x3 ;
                std::cout << " a = " << a << " b = " << b << " z = " << z << " fault_a = " << fault_a;
                if((z != fault_a) && (a != stuck_a0))
                {
                    counter ++;
                    std::cout << "  This input vector can test ";
                }
                std::cout << std::endl;
            }
        }
    }
    std::cout << "Total number of test vectors = " << counter;
    std::cout << std::endl;
    std::cout << std::endl;


    int fault_and = 0, fault_or = 0;
    counter = 0;
    a = 0, b = 0, z = 0;
    std::cout << "AND-bridging fault occurring between signals a and signal b " << std::endl;
    for(int x1 = 0; x1 < 2; x1++)
    {
        for(int x2 = 0; x2 < 2; x2++)
        {
            for(int x3 = 0; x3 < 2; x3++)
            {
                a = !(x1 && x2);
                b = !(x2 || x3);
                z = !(a || b);
                fault_and = !((a && b) || (a && b));
                std::cout << "x1 = " << x1 << " x2 = " << x2 << " x3 = " << x3;
                std::cout << " a = " << a << " b = " << b << " z = " << z << " fault z = " << fault_and ;
                if(z != fault_and)
                {
                    counter ++ ;
                    std::cout << "  This input vector can test";
                }
                std::cout << std::endl;
            }
        }
    }
    std::cout << "Total number of test vectors = " << counter << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;

    a = 0, b = 0, z = 0;
    counter = 0;
    std::cout << "OR-bridging fault occurring between signals a and signal b " << std::endl;
    for(int x1 = 0; x1 < 2; x1++)
    {
        for(int x2 = 0; x2 < 2; x2++)
        {
            for(int x3 = 0; x3 < 2; x3++)
            {
                a = !(x1 && x2);
                b = !(x2 || x3);
                z = !(a || b);
                fault_or = !((a || b) || (a || b));
                std::cout << "x1 = " << x1 << " x2 = " << x2 << " x3 = " << x3;
                std::cout << " a = " << a << " b = " << b << " z = " << z << " fault z = " << fault_or ;
                if(z != fault_or)
                {
                    counter ++ ;
                    std::cout << "  This input vector can test ";
                }
                std::cout << std::endl;
            }
        }
    }
    std::cout << "Total number of test vectors = " << counter;
    std::cout << std::endl;
    std::cout << std::endl;


}
