//#include <iostream>
//using namespace std;
//
//// ��������Ĳ�����������������ָ�룬Ӧ�ý����������Ϊ void*
//// �Ƚϵ��͵ĺ������ڴ�������� memcpy �� memset��������Ĵ�����ʾ��
//void* memset(void* buffer, int b, size_t size)
//{
//	char p[] = "abc";
//	return p;
//}
//
//int main(void)
//{
//	// ����ָ�븳ֵ��voidָ������ǿת
//	void* p1;
//	int a = 10;
//	int* p2 = &a;
//	p1 = p2;
//
//	// ����,voidָ�븳ֵ�����ָ����Ҫǿת
//	//p2 = p1;
//	p2 = (int*) p1;
//
//	// �����voidָ�����������������´��뱨��
//	//p1++;
//
//	system("pause");
//	return 0;
//}