#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    int *p1 = new int[10];  //��������������г�ʼ��

    for(int *i = p1; i != p1 + 10; ++i)
    {
        cout << *i << endl;
    }
    cout << endl;

    int *p2 = new int[10]();    //����������Ĭ��ֵ������г�ʼ��
    for(int *i = p2; i != p2 + 10; ++i)
    {
        cout << *i << endl;
    }
    cout << endl;

    cout << "=========end===========" << endl;

    delete[] p1;
    delete[] p2;
    return 0;
}
