//#include <iostream>
//
//using namespace std;
//
//// �Ӻ����������
//class WeightCal
//{
//	friend void test();
//	friend WeightCal operator+(WeightCal w1, WeightCal w2);
//public:
//	WeightCal() {}
//
//	WeightCal(int weight)
//	{
//		this->weight = weight;
//	}
//
//	// �Ӻ���������ط���01��ʹ�ó�Ա����
//	// ��Ҫ��ʽ���ã�����ֵ������void
//	// ����һ���µĸ���������ֵ���������û�ָ��
//	WeightCal operator+(const WeightCal& weightCal)
//	{
//		WeightCal temp;
//		temp.weight = weightCal.weight + weight;
//		return temp;
//	}
//private:
//	int weight;
//};
//
//// �Ӻ���������ط���02��ʹ��ȫ�ֺ���
//WeightCal operator+(const WeightCal w1, const WeightCal w2)
//{
//	WeightCal temp;
//	temp.weight = w1.weight + w2.weight;
//	return temp;
//}
//
//void test()
//{
//	WeightCal w1(100);
//	WeightCal w2(200);
//	WeightCal w3 = w1 + w2;
//	cout << "w3.weight ��" << w3.weight << endl;
//}
//
//int main() {
//	test();
//
//	system("pause");
//	return 0;
//}