//#include <iostream>
//
//using namespace std;
//
//class Father
//{
//public:
//    int a;
//};
//
//class Son1 : public Father
//{
//};
//
//class Son2 : public Father
//{
//};
//
//class GrandSon : public Son1, public Son2
//{
//};
//
//void test()
//{
//	GrandSon gs;
//	// ���μ̳У�����̳����������ݣ����´��뱨��
//	//gs.a = 10;
//
//	// ������ʾ��ָ�����ĸ���������ݣ���ʵ���ϲ���Ҫ����
//	gs.Son1::a = 10;
//	gs.Son2::a = 20;
//}
//
//int main() {
//	test();
//
//	system("pause");
//	return 0;
//}