//#include <iostream>
//
//using namespace std;
//
//class Animal
//{
//public:
//	virtual void speak()
//	{
//		cout << "�����" << endl;
//	}
//};
//
//class Dog : public Animal
//{
//public:
//	void speak()
//	{
//		cout << "������" << endl;
//	}
//};
//
//// ��̬�������������ý����������
//void test(Animal& animal)
//{
//	animal.speak();
//}
//
//// ��̬����������ָ������������
//void test(Animal* animal)
//{
//	animal->speak();
//}
//
//int main() {
//	Dog dog;
//	test(dog);
//	test(&dog);
//
//	system("pause");
//	return 0;
//}