//#include <iostream>
//
//using namespace std;
//
//// 1�����캯���ķ���
//class Person
//{
//public:
//	// �޲ι��죨Ĭ�Ϲ��죩
//	Person()
//	{
//		cout << "Person���޲ι��캯����ӡ" << endl;
//
//	}
//
//	// �вι���
//	Person(int age)
//	{
//		cout << "Person���вι��캯����ӡ" << endl;
//		this->age = age;
//	}
//
//	Person(string name, int age)
//	{
//		cout << "Person�Ķ�������캯����ӡ" << endl;
//		this->name = name;
//		this->age = age;
//	}
//
//	// �������캯��
//	// ʹ��const���ã�һ�����ڸ���ĳ�����ж���
//	Person(const Person& p)
//	{
//		cout << "Person�Ŀ������캯����ӡ" << endl;
//		name = p.name;
//		age = p.age;
//	}
//
//	~Person()
//	{
//		cout << "Person������������ӡ" << endl;
//	}
//
//private:
//	string name;
//	int age;
//};
//
//// 2�����캯���ĵ���
//void test()
//{
//	// 1�����ŷ�������
//	Person p1;
//	Person p2(10);
//	Person p3("lilei", 18);
//	Person p4(p2);	// ���ŷ����ÿ������캯��
//
//	// ע��1�������޲ι��췽�����ܼ����ţ�����������Ϊ�Ǻ�������
//	// ����д���ᱻ��Ϊ�������������޲ι��캯��
//	Person p5();
//
//	// 2����ʾ��
//	Person p6 = Person();
//	Person p7 = Person(10);
//	Person p8 = Person("hanmeimei", 16);
//	Person p9 = Person(p8);
//
//	// Person(10)����д�����������󣬵�ǰ�н���֮����������
//	// �����������е����ӣ�
//	Person(19);
//	cout << "Person(19)����������������������ڱ��д�ӡ" << endl;
//
//	// ע��2���������ÿ������캯����ʼ����������
//	// ���´���ᱨ��Person p10�ض��壬ԭ������Person(p10)����������Ϊ�� Person p10;
//	Person p10 = Person(10);
//	Person(p10);
//
//	// 3����ʽת����
//	Person p11 = {};
//	Person p12 = {10};
//	Person p13 = 10;	// ֻ��һ������ʱ�������ſ���ʡ��
//	Person p14 = { "banana", 19 };
//	Person p15 = { p13 };
//	Person p16 = p13;
//}
//
//int main()
//{
//	test();
//
//	// return 0;ִ��֮ǰ��������������
//
//	system("pause");
//	return 0;
//}