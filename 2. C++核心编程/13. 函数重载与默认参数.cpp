#include <iostream>

using namespace std;

void func(int a)
{
	cout << "func(int a)" << endl;
}

void func(int a, int b = 10)
{
	cout << "func(int a, int b)" << endl;
}

int main()
{
	int a = 10;

	// ���´��뱨����Ϊ��������֪��ѡ���ĸ�����ִ��
	// ���Ե��к�������ʱ�������ܲ�Ҫ����Ĭ�ϲ���
	//func(10);

	system("pause");
	return 0;
}