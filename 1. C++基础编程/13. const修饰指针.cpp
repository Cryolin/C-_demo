#include <iostream>

using namespace std;

int main() {
	int a = 10;
	int b = 20;

	// const����int*���������ָ��ָ���ֵ�����޸�
	// �������Ϊ*p�����޸�
	const int* p1 = &a;
	//*p1 = 20;	// ����*p1�����޸�
	a = 20;		// a�����ǿ����޸ĵ�
	p1 = &b;	// p1��ָ��Ҳ�ǿ����޸ĵ�

	// const����p���������ָ�벻���޸�
	// �������Ϊp�����޸�
	int* const p2 = &a;
	*p2 = 20;	// *p2�����޸�
	//p2 = &b;	// ����p2�����޸�

	// constͬʱ����int*��p������ָ���Լ�ָ��ָ���ֵ�������޸�
	const int* const p3 = &a;
	//*p3 = 30;	// ����*p3�����޸�
	//p3 = &b;	// ����p3�����޸�

	system("pause");
	return 0;
}