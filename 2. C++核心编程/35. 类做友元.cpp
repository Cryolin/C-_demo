//#include <iostream>
//
//using namespace std;
//
//// ����Student��Ҫʹ��Teacher����Ϊ��Ԫ������Teacher��ǰ����
//class Teacher;
//class Student
//{
//	// Teacher����Student�����Ԫ�����Է���Student��ķ�public����
//	friend class Teacher;
//public:
//	Student(int age)
//	{
//		this->age = age;
//	}
//private:
//	int age;
//};
//
//class Teacher
//{
//public:
//	void getAge(Student& student)
//	{
//		cout << "student�����䣺 " << student.age << endl;
//	}
//
//	void getAge2(Student* student)
//	{
//		cout << "student�����䣺 " << student->age << endl;
//	}
//};
//
//
//int main() {
//	Teacher t;
//	Student s(10);
//	t.getAge(s);
//	t.getAge2(&s);
//
//	system("pause");
//	return 0;
//}