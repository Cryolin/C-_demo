//#include <iostream>
//using namespace std;
//
//int Max(int, int);
//int main(void)
//{
//	// ����һ������ָ��
//	int(*p)(int, int);  
//	int a = 10;
//	int b = 20;
//
//	// �Ѻ���Max����ָ�����p, ʹpָ��Max����
//	p = Max;
//
//	//ͨ������ָ�����Max�������������ֵ��÷�������
//	int c = (*p)(a, b);
//	cout << "c = (*p)(a, b)  : " << c << endl;
//
//	int d = p(a, b);
//	cout << "d = p(a, b)  : " << d << endl;
//	system("pause");
//	return 0;
//}
//int Max(int x, int y)  //����Max����
//{
//	return x > y ? x : y;
//}