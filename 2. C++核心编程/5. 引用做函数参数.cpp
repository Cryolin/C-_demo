#include <iostream>

using namespace std;

//// ֱ�Ӵ��룬�޷��޸�
//void swap01(int a, int b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//}
//
//// ͨ��ָ�룬�����޸�
//void swap02(int* a, int* b)
//{
//	int temp = *a;
//	*a = *b;
//	*b = temp;
//}
//
//// ͨ�����ã������޸�
//void swap03(int& a, int& b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//}
//
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//
//	//swap01(a, b);
//	//swap02(&a, &b);
//	swap03(a, b);
//	
//	cout << "a = " << a << endl;	// a = 100
//	cout << "b = " << b << endl;	// c = 100
//
//
//	system("pause");
//	return 0;
//}