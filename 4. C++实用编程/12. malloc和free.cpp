//#include <iostream>
//using namespace std;
//
//void test01()
//{
//	// ֱ����ջ�����ٴ����飬��Stack Overflow�����´��뱨��
//	//int arr[10 * 1024 * 1024];
//
//	// ͨ��malloc�����ѿռ俪���ڴ棬�����ڴ���׵�ַ
//	// ����ֵ������void*������ǿתΪ����ָ��
//	int* arr = (int*) malloc(10 * 1024 * 1024 * sizeof(int));
//
//	// �������ڴ�󣬿���ֱ����Ϊint����д��
//	// ���ܿ���ʧ�ܣ�Ҫ�п�
//	if (arr)	// ��Ч�� if (arr != NULL)
//	{
//		arr[0] = 1;
//		arr[1] = 2;
//	}
//
//	// ʹ�����ǵõ���free�ͷ��ڴ�ռ�
//	if (arr)
//	{
//		free(arr);
//		arr = NULL;
//	}
//
//	// ��ע�⣬���·�ʽ�����intָ���ǲ�����Ϊ����ʹ�õģ�δ���������ʼ��
//	//int* arr2;
//	//arr2[1] = 10;
//
//	// �����ǿ��Ե�
//	int* arr3 = new int[10];
//	arr3[1] = 1;
//	delete[] arr3;
//}
//
//// 
//void test02()
//{
//	int a = 1;
//
//	// ��������ֱ�����������ʼ�������´��뱨��
//	//int arr[a];
//
//	// �����ͨ��������ʼ�������С������ʹ��new�ؼ����ڶ�������
//	int* arr = new int[a];
//	arr[0] = 1;
//	delete[] arr;
//
//	// ��Ȼ��mallocҲ�ǿ��Ե�
//	int* arr2 = (int*)malloc(sizeof(int)*a);
//	if (arr2)
//	{
//		arr2[0] = 1;
//	}
//	// ʹ�����ǵõ���free�ͷ��ڴ�ռ�
//	if (arr2)
//	{
//		free(arr2);
//	}
//}
//
//int main(void)
//{
//	test01();
//
//	test02();
//
//	system("pause");
//	return 0;
//}