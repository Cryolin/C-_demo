//#include <iostream>
//using namespace std;
//
//struct student
//{
//	int (*max)(int, int);
//	string name;
//};
//
//int Max(int x, int y)
//{
//	return x > y ? x : y;
//}
//
//// ���ʽṹ���еĺ���ָ��
//void test01()
//{
//	student s1 = {};
//	s1.name = "str";
//	s1.max = Max;
//	int max = s1.max(10, 20);
//
//	cout << "s1.max(10,20) : " << max << endl;
//}
//
//// ���ʽṹ��ָ���еĺ���ָ��
//void test02()
//{
//	student s = {};
//	student* sp = &s;
//	sp->name = "zhangsan";
//	sp->max = Max;
//	int max = sp->max(10, 20);
//
//	cout << "s.max(10,20) : " << max << endl;
//}
//
//// ���ʽṹ�������еĺ���ָ��
//void test03()
//{
//	student s = {};
//	student& s1 = s;
//	s1.name = "lisi";
//	s1.max = Max;
//	int max = s1.max(10, 20);
//
//	cout << "s1.max(10,20) : " << max << endl;
//}
//
//int main(void)
//{
//	//test01();
//
//	//test02();
//
//	test03();
//
//	system("pause");
//	return 0;
//}