//#include <iostream>
//
//using namespace std;
//
//// C++��ʽ����ת����˵��
//class Animal
//{
//public:
//	virtual void speak() = 0;
//};
//
//class Cat : public Animal
//{
//public:
//	void speak()
//	{
//		cout << "miao miao" << endl;
//	}
//};
//
//// ��ʽ����ת��01����̬
//void test01(Animal& animal)
//{
//	animal.speak();
//}
//
//// ��ʽ����ת��02���������Զ������ݽ�����ת��
//void test02(int i)
//{
//	cout << i << endl;
//
//	int a = 10;
//	double b = 1.0;
//	a + b; // int�Զ�ת��Ϊdouble
//}
//
//int main() {
//
//	Cat cat;
//	test01(cat);
//
//	// ������char���ͣ��Զ�ת��Ϊint����
//	test02('c');
//
//	system("pause");
//	return 0;
//}
