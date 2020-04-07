#include <iostream>
using namespace std;

class A
{
    int i;
    void PrivateFunc()
    {
        cout << "This is a private function of base class" << endl;
    }

public:
    A() { i = 5; }
    int GetI()
    {
        return i;
    }
    void UserPrivateFunc()
    {
        PrivateFunc();
    }
};

class B : public A
{
public:
    void PritBaseI()
    {
        cout << GetI() << endl;
    }
    void UserPrivateFunction()
    {
        UserPrivateFunc();
    }
};

int main(int argc, char const* argv[])
{
    B b;
    b.PritBaseI();
    b.UserPrivateFunc();
    return 0;
}
