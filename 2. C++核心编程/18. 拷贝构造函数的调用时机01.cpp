//#include <iostream>
//
//using namespace std;
//
//// ��C++�У������ķ���ֵ�ǻ����´���һ����
//// ���������test01(),test02(),test03()��ӡ�ĵ�ַ���ǲ�һ����
//struct structTest 
//{
//	int a;
//};
//
//class Person
//{
//public:
//	Person()
//	{
//		cout << "Person Ĭ�Ϲ��캯��" << endl;
//	}
//
//	Person(const Person& p)
//	{
//		cout << "Person �������캯��" << endl;
//	}
//
//	~Person()
//	{
//		cout << "Person ��������" << endl;
//	}
//};
//
//structTest test01()
//{
//	structTest s1 = { 10 };
//	cout << "struct s1 �ĵ�ַ�� " << (int)&s1 << endl;
//
//	return s1;
//}
//
//Person test02()
//{
//	Person p1;
//	cout << "Person p1 �ĵ�ַ�� " << (int)&p1 << endl;
//
//	return p1;
//}
//
//int test03()
//{
//	int a = 1;
//	cout << "a �ĵ�ַ�� " << (int)&a << endl;
//	return a;
//}
//
//int main()
//{
//	//structTest s2 = test01();
//	//cout << "struct s2 �ĵ�ַ�� " << (int)&s2 << endl;
//
//	Person p2 = test02();
//	cout << "Person p2 �ĵ�ַ�� " << (int)&p2 << endl;
//
//	/*int b = test03();
//	cout << "b �ĵ�ַ�� " << (int)&b << endl;*/
//
//	system("pause");
//	return 0;
//}