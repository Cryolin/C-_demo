#include <iostream>

using namespace std;

// ���������ã�ת��Ϊint* const ref = &a
void func(int& ref)
{
	// ref�����ã�ת��Ϊ*ref = 100
	ref = 100;
}

int main()
{
	int a = 10;

	// ���������ã��Զ�ת��Ϊint* const ref = &a
	// refָ��ĵ�ַ�����޸ģ�Ҳ˵��Ϊʲô���ò����޸�
	int& ref = a;

	// ref�����ã��Զ�ת��Ϊ*ref = 20;
	ref = 20;

	system("pause");
	return 0;
}