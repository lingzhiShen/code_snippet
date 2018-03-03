#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    const char *str = "Hello";

//    char *p1 = str;
    const char *p1 = str;
    cout << p1 << endl;

    return 0;
}
