////4����дһ������Ҫ���û���������ʽ����������ʹ��long��
////long long�����洢����Ȼ�����졢Сʱ�����Ӻ���ķ�ʽ��ʾ���ʱ
////�䡣ʹ�÷��ų�������ʾÿ���ж���Сʱ��ÿСʱ�ж��ٷ����Լ�ÿ
////�����ж����롣�ó�������Ӧ���������ƣ�
//
//#include <iostream>
//using namespace std;
//
//int main(void)
//{
//	//Ҫ���û���������ʽ��������
//	long long before_seconds = 0;
//	cout << "Enter the number of seconds :";
//	cin >> before_seconds;
//
//	//ʹ�÷��ų�������ʾÿ���ж���Сʱ��ÿСʱ�ж��ٷ����Լ�ÿ�����ж�����
//	const int day_hour = 24;
//	const int hour_minute = 60;
//	const int minute_second = 60;
//
//	//���졢Сʱ�����Ӻ���ķ�ʽ��ʾ���ʱ��
//	int days, hours, minutes, seconds;
//	days = before_seconds / (day_hour * hour_minute * minute_second);
//	hours = (before_seconds % (day_hour * hour_minute * minute_second)) / (hour_minute * minute_second);
//	minutes = (before_seconds - days * day_hour * hour_minute * minute_second - hours * hour_minute * minute_second) / minute_second;
//	seconds = (before_seconds - days * day_hour * hour_minute * minute_second - hours * hour_minute * minute_second) % minute_second;
//	cout << before_seconds << " seconds " << "= " << days << " days," <<
//		hours << " hours, " << minutes << " minutes," << seconds << " seconds" << endl;
//
//	system("pause");
//	return 0;
//}