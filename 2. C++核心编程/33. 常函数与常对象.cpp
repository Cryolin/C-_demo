//#include <iostream>
//
//using namespace std;
//
//class Person
//{
//public:
//	// ��������ע��const��λ��
//	void showName() const
//	{
//		// �����������޸ĳ�Ա���������´��뱨��
//		// age = 10;
//
//		// mutable�ؼ������εĳ�Ա���������޸�
//		name = "lilei";
//		cout << "name is " << name << endl;
//	}
//
//	void changeAge()
//	{
//		// ��ͨ��Ա���������޸ĳ�Ա����
//		// һ�����У�����������ͨ��Ա��������ͬʱ����
//		age = 10;
//	}
//
//	mutable string name;
//	int age;
//};
//
//int main() {
//	Person p1 = Person();
//	p1.showName();
//	p1.changeAge();
//
//	// ��������ʱ��ǰ�����const����ʾ����һ��������
//	const Person p2;
//	// ������ֻ�ܵ��ó�����
//	p2.showName();
//	// �������ܵ��÷ǳ����������´��뱨��
//	// p2.changeAge();
//	// �����������ݲ������޸ģ����´��뱨��
//	// p2.age = 10;
//	// ����������޸�mutable���εĳ�Ա����
//	p2.name = "hanmeimei";
//
//	// �������ͳ�����ı��ʣ�
//	// ��ͨ�����this��Person* const this
//	// �������this��const Person* const this	���÷�Χ����������
//	// ��������this��const Person* const this   ���÷�Χ����������
//
//	system("pause");
//	return 0;
//}