//#include <iostream>
//
//using namespace std;
//
//class Student;
//class Teacher
//{
//public:
//	int getAge(Student& student);
//	int getAge2(Student* student);
//};
//
//class Student
//{
//	// Teacher��getAge��Ա������ΪStudent����Ԫ�����Է��ʷ�public������
//	friend int Teacher::getAge(Student& student);
//private:
//	int age;
//};
//
//int Teacher::getAge(Student& student)
//{
//	return student.age;
//}
//
////int Teacher::getAge2(Student* student)
////{
////	// �޷���ȡ��age
////	return student->age;
////}
//
//int main() {
//	system("pause");
//	return 0;
//}