//#include <iostream>
//
//using namespace std;
//
//// ������������أ����õ�����
//class MyInteger
//{
//	friend ostream& operator<<(ostream& cout, MyInteger integer);
//	friend MyInteger operator++(MyInteger& integer, int);
//public:
//	MyInteger(int integer)
//	{
//		this->integer = integer;
//	}
//
//	// ���õ������������01��ʹ�ó�Ա����
//	// ע�ⷵ��ֵ�����õ�����Ҫ����һ����ʱ��ֵ���ʲ��������û�ָ��
//	// ������ͨ��ռλ�����ж��Ǻ��õ�������ֻ�ܴ�int
//	//MyInteger operator++(int)
//	//{
//	//	MyInteger temp(integer);
//	//	integer += 2;
//	//	return temp;
//	//}
//private:
//	int integer;
//};
//
//// ���õ������������02��ʹ��ȫ�ֺ���
//MyInteger operator++(MyInteger& integer, int)
//{
//	MyInteger temp(integer.integer);
//	integer.integer += 2;
//	return temp;
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
//
//	// ��ӡ10
//	cout << "integer : " << integer++ << endl;
//	// ��ӡ12
//	cout << "integer : " << integer++ << endl;
//
//	system("pause");
//	return 0;
//}