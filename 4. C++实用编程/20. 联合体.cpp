//#include <iostream>
//using namespace std;
//
//union student
//{
//	char name[10];
//	int age;
//};
//
//int main()
//{
//	student stu;
//	strcpy(stu.name, "abc");
//	// ֻ��name
//	cout << stu.name << stu.age << endl;
//
//	stu.age = 10;
//	// name�����ǣ�ֻ��age
//	cout << stu.name << stu.age << endl;
//
//	// sizeof�����壬ѡȡ���ĳ�Ա�ĳ��ȣ�����������������������ͣ�����ȡ��
//	// ����student����Ա����Ϊ10,����һ����Ա��int��10��������4����Ҫ��int����
//	// ��sizeof(stu) Ϊ12
//	cout << sizeof(stu) << endl;
//
//	system("pause");
//}