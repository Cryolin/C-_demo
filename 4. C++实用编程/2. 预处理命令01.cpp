// Ԥ��������һ���ļ�����
// �����ţ�������·����
#include <iostream>
// ˫���ţ��ӵ�ǰĿ¼�ң�δ�ҵ��������·����
#include "iostream"

using namespace std;

// Ԥ�������Ͷ����궨��
// �޲�����
#define PI 3.14
#define M "abc"

// �в����꣬ע�ⲻ��ͬ�ں���
#define f(x) x*x + 3*x
// ����ͨ���ֺ�ִ�ж�����䣬����������ô��
#define Sum(a,b,c) a=b*c; b=c*a; a=b*c

void testDefine()
{
	//PI��3.14
	//MyStr��abc
	//3 * f(2)18
	//a = 54
	//b = 18
	//c = 3
	cout << "PI��" << PI << endl;
	cout << "MyStr��" << M << endl; 

	// ���´���ֻ�������滻��������ֵ���ݣ�3*2*2 + 3*2
	cout << "3 * f(2)" << 3 * f(2) << endl;

	int a = 1;
	int b = 2;
	int c = 3;
	Sum(a, b, c);
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "c = " << c << endl;
}

int main()
{
	testDefine();


	system("pause");
}