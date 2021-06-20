//#include <iostream>
//
//using namespace std;
//
//// 浅拷贝执行报错的例子
//class Person
//{
//public:
//	Person(string name, int age)
//	{
//		this->name = name;
//
//		// 指向堆空间
//		this->age = new int(age);
//	}
//
//	~Person()
//	{
//		// 通过析构函数回收内存
//		if (age != NULL)
//		{
//			delete age;
//
//			// 置为NULL，避免野指针
//			age = NULL;
//		}
//	}
//
//	string name;
//	int* age;
//};
//
//void test()
//{
//	Person p1 = { "john", 18 };
//	Person p2(p1);
//
//	cout << "p1的名字：" << p1.name << " p1的年龄：" << *p1.age << endl;
//	cout << "p2的名字：" << p2.name << " p2的年龄：" << *p2.age << endl;
//}
//
//int main()
//{
//	test();
//	system("pause");
//	return 0;
//}