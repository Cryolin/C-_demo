//#include <iostream>
//
//using namespace std;
//
//class Person
//{
//public:
//	Person(int age)
//	{
//		// this�÷�01,���������������β����Ա����
//		this->age = age;
//	}
//
//	Person& addAge(int num)
//	{
//		age += num;
//		// this���÷�02��������ʽ����
//		return *this;
//	}
//
//	int age;
//};
//
//int main() {
//	Person p(10);
//	cout << "p.age: " << p.age << endl;
//
//	p.addAge(2).addAge(2).addAge(2);
//	cout << "p.age: " << p.age << endl;
//
//	system("pause");
//	return 0;
//}