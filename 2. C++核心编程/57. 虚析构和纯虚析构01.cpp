//#include <iostream>
//
//using namespace std;
//
//class Animal
//{
//public:
//	Animal()
//	{
//		cout << "���๹�캯��" << endl;
//	}
//
//	~Animal()
//	{
//		cout << "������������" << endl;
//	}
//
//	virtual void speak() = 0;
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
//	// �����д��ڴ��麯������������д����������Ҳ�ǳ�����
//	void speak()
//	{
//		cout << "������" << endl;
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
//	animal->speak();
//	delete animal;
//}
//
//int main() {
//	test();
//
//	system("pause");
//	return 0;
//}