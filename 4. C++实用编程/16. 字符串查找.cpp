//#include <iostream>
//using namespace std;
//
//char str1[] = "I'm Chinese";
//char str2[] = "nes";
//char str3[] = "abc";
//
//// �ַ�������
//void test01()
//{
//	char* pos = strstr(str1, str2);
//
//	// �����Ӵ��ڸ����ĵ�һ�γ��ֵ�ָ��λ��
//	// ���´�ӡ��Ӹ�����ָ��λ�ô�ӡ����β'\0'
//	// nese
//	cout << pos << endl;
//
//	// ������ʱ������NULL
//	char* pos2 = strstr(str1, str3);
//}
//
//// �����Ӵ��ڸ����е�һ�γ��ֵ�index��ͨ��ָ�����ʵ��
//int getSubStrIndex()
//{
//	char* pos = strstr(str1, str2);
//	return pos - str1;
//}
//
//int main()
//{
//	test01();
//
//	cout << getSubStrIndex() << endl;;
//
//	system("pause");
//}