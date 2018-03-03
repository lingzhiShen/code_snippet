#include <iostream>

using namespace std;

namespace space1{
    template<typename T> class MyClass{
    public:
        MyClass(T v)
        {
            val = v;
        }
        MyClass()
        {

        }
        void print()
        {
            cout << "This is space1 MyClass!" << endl;
            cout << "The value of variable \' val \' is " << val << endl;
        }
    private:
        T val;
    };
};

namespace space2{
    template<typename T> class MyClass{
    public:
        MyClass(T v)
        {
            val = v;
        }
        void print()
        {
            cout << "This is space2 MyClass!" << endl;
            cout << "The value of variable \' val \' is " << val << endl;
        }
    private:
        T val;
    };
};

template<typename T>
void function(T a, T b)
{
    if (a > b)
        cout << "a > b" << endl;
    else
        cout << "a < b" << endl;
}

template<class T>
void function1(T a, T b)
{
    if (a > b)
        cout << "a > b" << endl;
    else
        cout << "a < b" << endl;
}

int main(void)
{
    function(1, 2);
    function(2, 1);

    function(2.3, 4.3);

    function1(1, 0);

    space1::MyClass<int> *myclass1 = new space1::MyClass<int>;
    myclass1->print();

    space2::MyClass<int> *myclass2 = new space2::MyClass<int>(1);
    myclass2->print();

    return 0;
}
