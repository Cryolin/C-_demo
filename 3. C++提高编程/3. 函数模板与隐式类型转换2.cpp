//#include <iostream>
//
//using namespace std;
//
//// ��ͨ����
//int add01(int a, int b)
//{
//	return a + b;
//}
//
//// ����ģ��
//template<typename T>
//T add02(T a, T b)
//{
//	return a + b;
//}
//
//int main() {
//
//	int a = 10;
//	int b = 20;
//	char c = 'c';
//	
//	// ��ͨ�����ɷ�����ʽ����ת����char�Զ�ת��Ϊint
//	add01(a, b);
//	add01(a, c);
//
//	add02(a, b);
//
//	// ʹ�ú���ģ��ʱ�����ʹ���Զ������Ƶ������ᷢ����ʽ����ת��
//	// ���´��뱨����Ϊ��������֪��T������int����char
//	//add02(a, c);
//
//	// ʹ�ú���ģ��ʱ�������ʾָ�����ͣ����Է�����ʽ����ת��
//	add02<int>(a, c);
//	add02<char>(a, c);
//
//	system("pause");
//	return 0;
//}