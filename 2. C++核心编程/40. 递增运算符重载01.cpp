//#include <iostream>
//
//using namespace std;
//
//// ������������أ�ǰ�õ�����
//// Ŀ�꣺ʵ��һ���Զ�������װint��ÿ�ε���2����ʵ��ǰ�õ�������õ���
//class MyInteger
//{
//	friend ostream& operator<<(ostream& cout, MyInteger integer);
//	friend MyInteger& operator++(MyInteger& integer);
//public:
//	MyInteger(int integer)
//	{
//		this->integer = integer;
//	}
//
//	// ǰ�õ������������01��ʹ�ó�Ա����
//	//MyInteger& operator++()
//	//{
//	//	integer += 2;
//	//	return *this;
//	//}
//private:
//	int integer;
//};
//
//// ǰ�õ������������02��ʹ��ȫ�ֺ���
//MyInteger& operator++(MyInteger& integer)
//{
//	integer.integer += 2;
//	return integer;
//}
//
//ostream& operator<<(ostream& cout, MyInteger integer)
//{
//	cout << integer.integer;
//	return cout;
//}
//
//int main() {
//	MyInteger integer(10);
//	++(++integer);
//
//	// ��ӡ14
//	cout << "integer : " << integer << endl;
//
//	system("pause");
//	return 0;
//}