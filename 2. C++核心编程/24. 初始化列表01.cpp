//#include <iostream>
//
//using namespace std;
//
//class Person
//{
//public:
//	//// ��ͳ��ʼ������
//	//Person(int a, int b, int c)
//	//{
//	//	this->a = a;
//	//	this->b = b;
//	//	this->c = c;
//	//}
//
//	// ͨ����ʼ���б�
//	Person(int a, int b, int c) : a(a), b(b), c(c)
//	{
//		cout << "ִ�������߼�" << endl;
//		// this->a = 30;	// ������Ը���ǰ��ĳ�ʼ�����
//	}
//	
//	// ����ֻ��Բ��ֱ������г�ʼ��
//	Person(int a, int b) : a(a), b(b) {}
//
//	// Ҳ������ô��ʼ������ֻ�ܴ��̶�ֵ
//	Person() :a(10), b(20), c(30) {};
//	int a;
//	int b;
//	int c;
//};
//
//int main()
//{
//	Person p1 = Person(10, 20, 30);
//
//	Person p2 = Person(10, 20);
//	// cδ��ʼ������ӡ�����p2.c-858993460
//	cout << "p2.c" << p2.c << endl;	
//
//	system("pause");
//	return 0;
//}