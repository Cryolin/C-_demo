#include <iostream>

using namespace std;
//
//int main() {
//	int arr[5] = { 1,2,3,4,5 };
//	int* p = arr;
//	cout << *p << endl;		// arr[0]
//
//	// ע��ָ���+1��������sizeof(ָ������)
//	// ��������������sizeof(4)���൱�ڰ�ָ���arr[0]���׵�ַ�ƶ���β��ַ
//	// Ҳ����arr[1]���׵�ַ��ͨ��p++,�Ϳ��Է��ʵ�arr[1]��
//	p++;
//	cout << *p << endl;		// �ٴν�����ʱ��p�Ѿ�ָ����arr[1]
//
//	double arr2[5] = { 1.1,2.2,3.3,4.4,5.5 };
//	double* p2 = arr2;
//	cout << *p2 << endl;	// arr2[0]
//
//	// ͬ���ģ�����double���͵�ָ�룬++�����൱�ڵ�ַ������sizeof(double)
//	// �൱��ָ���arr2[0]���׵�ַ�ƶ���arr2[0]��β��ַ
//	// Ҳ����arr2[1]���׵�ַ��ͨ��p2++���Ϳ��Է��ʵ�arr2[1]��
//	p2++;
//	cout << *p2 << endl;	// arr2[1]
//
//	system("pause");
//	return 0;
//}