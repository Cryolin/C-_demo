//#include <iostream>
//
//using namespace std;
//
//class Father
//{
//public:
//	static void speak()
//	{
//		cout << "I'm father" << endl;
//	}
//
//	static int age;
//};
//
//class Son : public Father
//{
//public:
//	static void speak()
//	{
//		cout << "I'm son" << endl;
//	}
//	static int age;
//};
//
//int Father::age = 30;
//int Son::age = 10;
//
//void test01()
//{
//	Son son;
//
//	son.age;
//	// ���ʸ��ྲ̬��Ա����
//	// ͨ���������
//	son.Father::age;
//	// ͨ����������
//	Son::Father::age;
//
//	son.speak();
//	// ���ʸ��ྲ̬��Ա����
//	// ͨ���������
//	son.Father::speak();
//	// ͨ����������
//	Son::Father::speak();
//}
//
//int main() {
//	test01();
//
//	system("pause");
//	return 0;
//}