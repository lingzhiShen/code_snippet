#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    const char *cp = "C++";
    const char *cp2 = "Hello";
    char cp3[10];

    strcpy(cp3, cp);

    cout << cp3;

    cout << strcmp(cp, cp2);

    return 0;
}
