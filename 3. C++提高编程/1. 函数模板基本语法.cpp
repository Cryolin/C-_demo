//#include <iostream>
//
//using namespace std;
//
//// ����ģ��01
//template<typename T>
//void func()
//{
//	cout << sizeof(T) << endl;
//}
//
//// ����ģ��02
//template<class T>
//void mySwap(T& a, T& b)
//{
//	T temp = a;
//	a = b;
//	b = temp;
//}
//
//void test01()
//{
//	int a = 10;
//	int b = 20;
//	char c = 'c';
//	// ����ģ���ʹ�÷�ʽһ���Զ������Ƶ�
//	mySwap(a, b);
//	// ����ģ���ʹ�÷�ʽ������ʾָ������
//	mySwap<int>(a, b);
//
//	// ����ģ���������Ƶ���T���������ͣ����´��뱨��
//	//mySwap(a, c);
//	// ͬ������
//	//mySwap<char>(a, c);
//}
//
//void test02()
//{
//	func<char>();
//
//	// ����ģ���ڲ�ȷ��ʱ���޷�ִ�У����´��뱨��
//	//func();
//}
//
//int main() {
//	test01();
//	test02();
//
//	system("pause");
//	return 0;
//}
