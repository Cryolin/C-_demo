//#include <iostream>
//using namespace std;
//
//// �ַ�����ȡ
//char* subStr(char* str, int start, int end)
//{
//	int len = strlen(str);
//	if (start < 0 || start >= len)
//	{
//		return NULL;
//	}
//	// ��ͷ����β
//	if (end < 0 || end > len)
//	{
//		return NULL;
//	}
//	if (start > end)
//	{
//		return NULL;
//	}
//	char* result = (char*)malloc(sizeof(char) * (end - start + 1));
//	if (!result)
//	{
//		return NULL;
//	}
//	char* temp = result;
//	for (int i = 0; i < end - start; i++)
//	{
//		*result = str[start + i];
//		result++;
//	}
//
//	// ����ַ�����β
//	temp[end - start] = '\0';
//	return temp;
//}
//
//int main()
//{
//	char str[] = "Hello World";
//
//	char* result = subStr(str, 3, 5);
//	cout << result << endl;
//
//	// ��ȡ�ĳ���Ϊ2
//	cout << strlen(result) << endl;
//
//	free(result);
//
//	system("pause");
//}