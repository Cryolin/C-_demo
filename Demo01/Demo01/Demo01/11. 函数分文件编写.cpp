// ����test.h
#include "test.h";

// test.h�У��Ѿ�������iostream�����Դ˴������ظ�����
//#include <iostream>

// test.h�У��Ѿ�ʹ����std�������ռ䣬�����ظ�����
//using namespace std;

int main() {
	int a = 1;
	int b = 2;
	int c = test(a, b);
	cout << "main" << endl;
	system("pause");
	return 0;
}

// ���е���test.hͷ�ļ���cpp�ļ���ֻ����һ��test()�����Ķ���
// �·�����ظ�����ᱨ��

//int test(int a, int b)
//{
//	cout << "main��������ļ��У�����swap" << endl;
//	return;
//}