//#include <iostream>
//using namespace std;
//
//int input(int* arr);
//void show(int* arr, int len);
//double calc(int* arr, int len);
//
//int main()
//{
//	int arr[10];
//	int len = input(arr);
//	show(arr, len);
//	int average = calc(arr, len);
//	cout << "ƽ��ֵ��" << average << endl;
//
//	system("pause");
//	return 0;
//}
//
//int input(int* arr)
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		cout << "�������" << i << "������, ����-1����" << endl;
//		cin >> arr[i];
//		if (arr[i] == -1)
//		{
//			//i++;
//			break;
//		}
//	}
//	return i;
//}
//
//void show(int* arr, int len)
//{
//	for (int i = 0; i < len; i++)
//	{
//		cout << arr[i] << " ";
//	}
//}
//
//double calc(int* arr, int len)
//{
//	int average = 0;
//	for (int i = 0; i < len; i++)
//	{
//		average = (average + arr[i]) / (i + 1);
//	}
//	return average;
//}