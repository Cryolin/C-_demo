//#include <iostream>
//using namespace std;
//
//int getLength(char* str)
//{
//	// ���·�ʽ���ԣ�sizeof(str)��ֵ��׼ȷ
//	//return sizeof(str) / sizeof(str[0]);
//
//	// ��ȷ�ķ����ַ������ȵķ�����ѭ����ȡchar��ֱ������\0
//	int length = 0;
//	while (*str != '\0')
//	{
//		length++;
//		str++;
//	}
//	return length;
//}
//
//int main()
//{
//	char str1[] = "abc";
//	char str2[] = { 'a','b','c','\0' };
//
//	// �ַ�����\0��ʶ��β��str1�ȼ���str2��strlen������3
//	cout << "str1�ĳ��� �� " << strlen(str1) << endl;
//	cout << "str2�ĳ��� �� " << strlen(str2) << endl;
//
//	// ������������鳤�ȵļ��㷽������������Ľ��Ϊ4,
//	// �������char������ʽ���ַ�������Ҫ�ô˷������㳤��
//	cout << "str1�ĳ��� �� " << sizeof(str1) / sizeof(str1[0]) << endl;
//	cout << "str2�ĳ��� �� " << sizeof(str1) / sizeof(str1[0]) << endl;
//
//	// �����char����ָ�봫���������Ǽ��㲻��
//	cout << "�ַ������ȣ� " << getLength(str1) << endl;
//
//	system("pause");
//}