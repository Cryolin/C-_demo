//#include <iostream>
//
//using namespace std;
//
//// �������������
//// Ŀ�꣺ͨ��cout << ��Person���name��Ա������ӡ������̨
//class Person
//{
//	friend ostream& operator<<(ostream& out, Person p);
//public:
//	Person(string name)
//	{
//		this->name = name;
//	}
//
//	// ��Ա�����ķ�ʽ��ֻ��ʵ�� p << cout���޷�ʵ�� cout << p
//	//ostream& operator<<(ostream& out)
//	//{
//	//	out << name;
//	//	return out;
//	//}
//
//private:
//	string name;
//};
//
//// ע�ⷵ��ֵ�����ﷵ��ͬһ��out����ʹ������
//ostream& operator<<(ostream& out, Person p)
//{
//	out << p.name;
//	return out;
//}
//
//int main() {
//	Person p("lilei");
//	cout << p << endl;
//
//	system("pause");
//	return 0;
//}