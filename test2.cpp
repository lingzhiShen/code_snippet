// TODO (Root#1#):
//const char * <==> char const * 指向const char类型对象的指针 ...
//
//char * const 指向char类型的const指针

#include <iostream>
#include <cstring>

using namespace std;

typedef char * mytype;

int  main()
{
    const char *str1 = "hello";
    const char *str2 = "world";

    const char *p1 = str1;
    cout << p1 << endl;
    p1 = str2;
    cout << p1 << endl;

    cout << "========= p1 ========" << endl;

    //char *const str3 = "mytest";
    char *const p2 = (char *const )"the";
    cout << p2 << endl;
//    p2 = "change";
//    cout << p2 << endl;

    cout << "========= p2 =========" << endl;

    char const *p3 = str1;
    cout << p3 << endl;
    p3 = str2;
    cout << p3 << endl;

    cout << "========== p3 ========" << endl;

    const mytype p4 = (char * const )"P4";
    cout << p4 << endl;
//    p4 = (char * const)"p000000000000";

    cout << "========== p4 =========" << endl;

    return 0;
}
