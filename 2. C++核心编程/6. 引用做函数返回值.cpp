#include <iostream>

using namespace std;

//// ��Ҫֱ�ӷ��ؾֲ�����������
//// ���������������ڴ�
//int& test01()
//{
//	int a = 10;
//	return a;
//}
//
//int& test02()
//{
//	static int a = 10;
//	return a;
//}
//
//int test03()
//{
//	return 10;
//}
//
//int main()
//{
//	int& a = test01();
//	cout << "a = " << a << endl;	// a = 10
//	cout << "a = " << a << endl;	// �ڴ汻����
//
//	int& b = test02();
//	cout << "b = " << b << endl;	// a = 10
//	cout << "b = " << b << endl;	// a = 10
//
//	// �������ķ���ֵ������ʱ��������Ϊ��ֵ
//	test02() = 1000;
//	cout << "test02() = " << test02() << endl;
//	cout << "b = " << b << endl;
//
//	// ����ֵ�������õĺ����޷���Ϊ��ֵ
//	// test03() = 1000;
//
//	system("pause");
//	return 0;
//}