//#include <iostream>
//
//using namespace std;
//
//// �ȿ�һ����ĳ�Ա������ָ�������
//class Person
//{
//public:
//	Person(string name, int age)
//	{
//		this->name = name;
//		this->age = &age;
//	}
//
//	~Person()
//	{
//	}
//
//	string name;
//	int* age;
//};
//
//void test()
//{
//	Person p1 = { "john", 18 };
//	Person p2 = p1;
//	p1.name = "xixi";
//	*p1.age = 20;
//
//	cout << "p1�����֣�" << p1.name << " p1�����䣺" << *p1.age << endl;
//	cout << "p2�����֣�" << p2.name << " p2�����䣺" << *p2.age << endl;
//}
//
//int main()
//{
//	test();
//	system("pause");
//	return 0;
//}