//#include <iostream>
//
//using namespace std;
//
//// ��ֵ��������أ����ǳ��������
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
//	// ��ֵ���������01��ʹ�ó�Ա����
//	Person& operator=(Person& p)
//	{
//		// ���
//		age = new int(*p.age);
//		return *this;
//	}
//
//	int* age;
//};
//
//// ��ֵ��������ر���Ϊ��Ա������������ȫ�ֺ���
//// ���´��뱨��
////Person& operator=(Person& p1, Person& p2)
////{
////}
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