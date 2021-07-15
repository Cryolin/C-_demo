#include <iostream>

using namespace std;

class Person
{
public:
	Person(int age)
	{
		this->age = age;
	}
	int age;
};

// ģ�������ʾ��2������Person����ʱ�����޷����д�С�жϱȽϵ�
template<typename T>
const T& getMax(const T& a, const T& b)
{
	return a > b ? a : b;
}

// Ϊ���У��жϣ�����ͨ�����������ʵ��
//bool operator>(const Person& p1, const Person& p2)
//{
//	return p1.age > p2.age;
//}

// �˴�������һ�ַ�����ͨ������ģ����廯ʵ��
// ��Ӧ�ģ�������ģ����廯�����������½ڽ���
// �����﷨��template<>ʵ�ֺ���ģ�����T�������͵�����
template<> const Person& getMax(const Person& a, const Person& b)
{
	return a.age > b.age ? a : b;
}

ostream& operator<< (ostream& os, const Person& person)
{
	os << person.age;
	return os;
}

int main() {

	Person p = Person(10);
	Person p2 = Person(5);
	cout << getMax(p, p2) << endl;

	system("pause");
	return 0;
}