//#include <iostream>
//using namespace std;
//
//namespace A
//{
//	// ����
//	int num;
//	// �ṹ��
//	struct student
//	{
//		string name;
//		int age;
//	};
//	// ��
//	class Teacher
//	{
//	public :
//		Teacher(string name, int age)
//		{
//			this->name = name;
//			this->age = age;
//		}
//	private:
//		string name;
//		int age;
//	};
//	void func()
//	{
//		cout << "method func in namespace A" << endl;
//	}
//
//	enum SEASON
//	{
//		SPRING, SUMMER, AUTUMN, WINTER
//	};
//
//	// namespace����Ƕ��
//	namespace A_inner
//	{
//		int level;
//	}
//}
//
//namespace B
//{
//	// ����
//	int num;
//	// �ṹ��
//	struct student
//	{
//		string name;
//		int age;
//	};
//	// ��
//	class Teacher
//	{
//	public:
//		Teacher(string name, int age)
//		{
//			this->name = name;
//			this->age = age;
//		}
//	private:
//		string name;
//		int age;
//	};
//	void func()
//	{
//		cout << "method func in namespace B" << endl;
//	}
//
//	// namespace����Ƕ��
//	namespace A_inner
//	{
//		int level;
//	}
//}
//
//// ʹ�������ռ䣬����ʹ�ö��
//using namespace A;
//using namespace B;
//
//int main()
//{
//	// �����������A�Ļ���B��
//	//func();
//
//	// ������SEASON�������ռ�A���е�
//	SEASON;
//
//	// ͨ��������������ҵ�ָ�������ռ�ı���
//	A::A_inner::level = 10;
//
//	system("pause");
//}