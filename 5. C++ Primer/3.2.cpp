////2����дһ��С����Ҫ���Լ�Ӣ�߼�Ӣ��ķ�ʽ��������ߣ���
////�԰�Ϊ��λ���������ء���ʹ��3���������洢��Щ��Ϣ�����ó���
////����BMI��Body Mass Index������ָ������Ϊ�˼���BMI���ó�����Ӣ
////��ķ�ʽָ���û�����ߣ�1Ӣ��Ϊ12Ӣ�磩��������Ӣ��Ϊ��λ����
////��ת��Ϊ����Ϊ��λ����ߣ�1Ӣ�� = 0.0254�ף���Ȼ�󣬽��԰�Ϊ��
////λ������ת��Ϊ��ǧ��Ϊ��λ�����أ�1ǧ�� = 2.2��������󣬼�����
////Ӧ��BMI�����أ�ǧ�ˣ�������ߣ��ף���ƽ�����÷��ų�����ʾ����
////ת�����ӡ�
//
//#include <iostream>
//using namespace std;
//
//int main()
//{
//	const int foot_inches = 12;
//	const float inches_to_meters = 0.0254;
//    const float kg_to_pounds = 2.2;
//
//    int  height_foot;
//    float height_inches, weight_pounds;
//    cout << "Enter your height (in foot):";
//    cin >> height_foot;
//    cout << "And enter your height (in inches):";
//    cin >> height_inches;
//    cout << "Enter your weight(in pound):";
//    cin >> weight_pounds;
//    cout << "So you are " << height_foot << " foot and " << height_inches
//        << " inches height and " << weight_pounds << " pounds weight." << endl;
//
//    float height_in_meter = inches_to_meters * (foot_inches * height_foot + height_inches);
//    float weight_in_kg = weight_pounds / kg_to_pounds;
//    float bmi = weight_in_kg / pow(height_in_meter, 2);
//    cout << "Your BMI is : " << bmi << endl;
//
//	system("pause");
//	return 0;
//}