#include <iostream>
using namespace std;

inline const char* num_check(int v)
{
    return (v % 2 > 0) ? "��" : "ż";
}

int main()
{
    int i;
    for (i = 0; i < 100; i++)
    {
        cout << i << " �� " << num_check(i) << " ��" << endl;
    }

	system("pause");
}