#include<iostream>

class Example
{
    private:
        int x, y;
    public:
        void setXY(int a, int b)
        {
            x = a;
            y = b;
        }

        void printXY()
        {
            std::cout << "x = " << x << std::endl;
            std::cout << "y = " << y << std::endl;
        }
};

int main(int argc, char *argv[])
{
    Example eg;
    eg.setXY(4, 5);
    eg.printXY();
    return 0;
}

