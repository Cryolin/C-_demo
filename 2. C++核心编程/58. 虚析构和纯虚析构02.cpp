//#include <iostream>
//
//using namespace std;
//
//class Animal
//{
//public:
//	Animal()
//	{
//        cout << "���๹�캯��" << endl;
//	}
//
//	virtual ~Animal()
//	{
//        cout << "������������" << endl;
//	}
//};
//
//class Dog : public Animal
//{
//public:
//	Dog()
//	{
//		cout << "���๹�캯��" << endl;
//		name = new string("Jack");
//	}
//
//	~Dog()
//	{
//		cout << "������������" << endl;
//		if (name != NULL)
//		{
//			delete name;
//			name = NULL;
//		}
//	}
//	string* name;
//};
//
//void test()
//{
//	Animal* animal = new Dog();
//	delete animal;
//}
//
//int main() {
//	test();
//
//	system("pause");
//	return 0;
//}