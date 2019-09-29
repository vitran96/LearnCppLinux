#include <iostream>

int main (int argc, char *argv[])
{
    int a;
    int *p; // Pointer
    int i;

    std::cout << "Array size: ";
    std::cin >> a;
    
    // How to allocate
    // In C: var = (int *) malloc(sizeof(int) * n);
    // In C++: var = new int(n);
    p = new int(a);

    for(i = 0; i < a; i++)
    {
        p[i] = i*i;
    }

    for(i = 0; i < a; i++)
    {
        std::cout << "p[" << i << "] = " << p[i] << std::endl;
    }

    // Free memory
    // In C: free(p)
    // In C++: delete() p;
    delete[] p;
    
    return 0;
}

