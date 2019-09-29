#include <iostream>

class Example
{
    public:
        Example()
        {
            std::cout << "Start Constructor" << std::endl;
        }

        ~Example()
        {
            std::cout << "Start Destructor" << std::endl;
        }
    private:
        int x, y;
};

int main(int argc, char *argv[])
{
    Example eg;

    return 0;
}

