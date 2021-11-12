#include <iostream>

using namespace std;

class Test
{
private:
    int x;
    int y;
public:
    Test(int x = 0, int y = 0)
    {
        this->x = x;
        this->y = y;
    }
    Test& setX(int x)
    {
        this->x = x;
        return *this;
    }
    Test& setY(int y)
    {
        this->y = y;
        return *this;
    }
    void print()
    {
        cout << "x = " << x << ", y = " << y << " . \n";
    }
};

int main()
{
    Test obj1(5, 10);
    obj1.print();
    obj1.setX(9).setY(19);
    obj1.print();
    return 0;
}