//#include <iostream>
//
//using namespace std;
//
//class Phone
//{
//public:
//	Phone(string phoneName)
//	{
//		cout << "Phone���캯��" << endl;
//		this->phoneName = phoneName;
//	}
//
//	Phone(string phoneName, int phoneAge)
//	{
//		cout << "Phone���캯��" << endl;
//		this->phoneName = phoneName;
//		this->phoneAge = phoneAge;
//	}
//
//	~Phone()
//	{
//		cout << "Phone��������" << endl;
//	}
//
//	string phoneName;
//	int phoneAge;
//};
//
//class Person
//{
//public:
//	// ��ͨ��д����ֱ�Ӱ�Phone���󴫹���
//	// ������д�������ֶ�����һ��Phone���󴫽�������
//	Person(string name, Phone phone) :name(name), phone(phone) {}
//
//	// �����д�����Բ��ֶ�����һ��Phone����
//	// ���ó�ʼ���б���ʼ��Phone����
//	// phone(phoneName)�൱��ִ�������´��룺����һ����ʽת������������Ĺ���
//	// phone = phoneName
//	Person(string name, string phoneName) :name(name), phone(phoneName) 
//	{
//		cout << "Person���캯��" << endl;
//	}
//
//	// ��ʼ����Ҳ���Դ������������൱�ڣ�
//	// phone = {phoneName, phoneAge}
//	Person(string name, string phoneName, int phoneAge) :name(name), phone(phoneName, phoneAge) 
//	{
//		cout << "Person���캯��" << endl;
//	}
//
//	~Person()
//	{
//		cout << "Person��������" << endl;
//	}
//
//	Phone phone;
//	string name;
//};
//
//void test()
//{
//	Person p1("john", "HuaWei");
//	cout << p1.name << "\t������\t" << p1.phone.phoneName << "�ֻ�" << endl;
//
//	Person p2("Tom", "XiaoMi", 2);
//	cout << p2.name << "\t������\t" << p2.phone.phoneName << "�ֻ�, �Ѿ�ʹ����\t" << p2.phone.phoneAge << "����" << endl;
//}
//
//int main()
//{
//	test();
//	system("pause");
//	return 0;
//}