//#include <iostream>
//using namespace std;
//
//void test01()
//{
//	int num_old = 2;
//	int* arr_old = (int*)malloc(sizeof(int) * num_old);
//	if (arr_old)
//	{
//		for (int i = 0; i < num_old; i++)
//		{
//			arr_old[i] = i;
//		}
//	}
//	cout << "old �׵�ַ�� " << arr_old << endl;
//
//	int num_new = 3;
//	int* arr_new = (int*)realloc(arr_old, sizeof(int) * num_new);
//	if (arr_new)
//	{
//		// old�Ĳ��ֻᱻֱ��copy������û�б�Ҫ��0���¸�ֵ��
//		for (int i = num_old; i < num_new; i++)
//		{
//			arr_new[i] = i;
//		}
//	}
//	cout << "new �׵�ַ�� " << arr_new << endl;
//	// old�׵�ַ��new�׵�ַ������ͬ��Ҳ���ܲ�ͬ��Ҳ�����򿪱�ʧ��ΪNULL
//
//	for (int i = 0; i < num_new; i++)
//	{
//		cout << "arr_new[i] = " << arr_new[i] << endl;
//	}
//
//	// ���ͷ��µľͿ�����
//	if (arr_new)
//	{
//		free(arr_new);
//	}
//}
//
//void test02()
//{
//	int num_old = 2;
//	int* arr_old = (int*)malloc(sizeof(int) * num_old);
//	arr_old[0] = 0;
//	arr_old[1] = 1;
//
//	// realloc�ĳ��ȿ���С�ھɵģ���Ѻ�����ڴ��ͷŵ�
//	int* arr_new = (int*)realloc(arr_old, sizeof(int) * 1);
//	cout << arr_new[0] << endl;
//	cout << arr_new[1] << endl;
//
//	// ��Ȼarr_new[1] ���������Ǹ��ڴ��Ѿ����ͷ���
//	// 0
//	// - 33686019
//
//	free(arr_new);
//}
//
//int main(void)
//{
//	//test01();
//
//	test02();
//
//	system("pause");
//	return 0;
//}