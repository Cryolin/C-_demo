#include <iostream>

using namespace std;

int* getInt()
{
	// new�ؼ��ִ���int���󣬵���int����Ĺ��캯��
	// ����ָ��new�Ķ������͵�ָ��
	int* a = new int(10);
	return a;
}

int* getIntArray()
{
	// ͨ��new�ؼ��ִ���int���飬����ָ�������׵�ַ��ָ��
	int* array = new int[10];
	for (int i = 0; i < 10; i++)
	{
		array[i] = 100 + i;
	}
	return array;
}

int main()
{
	int* a = getInt();

	cout << *a << endl;
	cout << *a << endl;

	// ͨ��delete�������ͷ�a���ڴ棬�൱�ڵ�����int����������
	// ִ����delete֮���޷���ͨ��*a������
	delete a;

	int* array = getIntArray();
	cout << array[0] << endl;
	cout << array[1] << endl;

	// �������飬Ҫͨ��delete[]�ͷ��ڴ棬����ֻ���ͷŵ�0��λ�õ��ڴ�
	delete[] array;

	system("pause");
	return 0;
}