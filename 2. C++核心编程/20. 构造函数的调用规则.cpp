//#include <iostream>
//
//using namespace std;
//
//class Person
//{
//public:
//	int age;
//};
//
//class Book
//{
//public:
//	Book(string bookName)
//	{
//		this->bookName = bookName;
//	}
//private:
//	string bookName;
//};
//
//class Student
//{
//public:
//	Student(const Student& student)
//	{
//		name = student.name;
//	}
//private:
//	string name;
//};
//
//int main()
//{
//	int age = 10;
//
//	Person p1;	// ������Ĭ�ϴ����޲ι��캯��
//	p1.age = 10;
//	Person p2(p1);	// ��������Ĭ�ϴ����������캯��
//
//	string bookName = "Harry Potter";
//	Book book1 = bookName;
//	// Book book2;	// ��������������вι��캯������ô�������Ͳ�������Ƕ���Ĭ�ϵĹ��캯������౨��
//	Book book3 = {book1}; // ���������ǻ�����Ǵ���Ĭ�ϵĿ������캯����
//
//	//Student john;	// ͬ���ģ�������������˿������캯������ô��������������Ƕ���Ĭ�ϵĹ��캯������౨��
//
//	system("pause");
//	return 0;
//}