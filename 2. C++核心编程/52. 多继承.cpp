//#include <iostream>
//
//using namespace std;
//
//class Father1
//{
//public:
//	int a;
//	int b;
//};
//
//class Father2
//{
//public:
//	int a;
//	int c;
//};
//
//// ��̳��﷨
//class Son : public Father1, public Father2
//{
//};
//
//void test()
//{
//	Son son;
//
//	// ��̳�ʱ��������������������Ա����Ҫͨ��������ָ��
//	// son.a;
//
//	son.Father1::a;
//	son.Father2::a;
//}
//
//int main() {
//	test();
//
//	system("pause");
//	return 0;
//}