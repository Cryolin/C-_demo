//#include <iostream>
//
//using namespace std;
//
//// ��ֵ��������أ�ǳ��������
//class Person
//{
//public:
//	Person(int age)
//	{
//		this->age = new int(age);
//	}
//
//	~Person()
//	{
//		if (age != NULL)
//		{
//			delete age;
//			age = NULL;
//		}
//	}
//
//	int* age;
//};
//
//int main() {
//	Person p1(10);
//	Person p2(20);
//
//	// ��ֵ������ִ��ʱ���쳣
//	p2 = p1;
//
//	system("pause");
//	return 0;
//}