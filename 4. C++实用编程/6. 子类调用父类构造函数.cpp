//#include <iostream>
//using namespace std;
//
//class Father
//{
//public:
//	Father()
//	{
//		cout << "Father �޲ι��캯��" << endl;
//	}
//
//	Father(string name)
//	{
//		cout << "Father �вι��캯��" << endl;
//		this->name = name;
//	}
//
//	string name;
//};
//
//class Son : public Father
//{
//public:
//	// ���ø��๹�캯��
//	Son() : Father(), age(10)
//	{
//		cout << "Son �޲ι��캯��" << endl;
//	}
//
//	// ���ø����вι��캯��
//	Son(string name) : Father(name), age(10)
//	{
//		cout << "Son �вι��캯��" << endl;
//	}
//	int age;
//};
//
//void test()
//{
//	Son son;
//	Son son2("Tom");
//}
//
//int main()
//{
//	test();
//
//	system("pause");
//}