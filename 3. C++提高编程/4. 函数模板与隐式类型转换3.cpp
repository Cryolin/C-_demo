//#include <iostream>
//
//using namespace std;
//
//class Animal
//{
//};
//
//class Cat : public Animal
//{
//};
//
//void test01(Animal& a, Animal& b)
//{
//}
//
//template<typename T>
//void test02(T& a, T& b)
//{
//}
//
//int main() {
//	Cat cat1;
//	Cat cat2;
//	Animal animal;
//
//	// ��ͨ�������Է�����̬����ʽ����ת����
//	test01(cat1, cat2);
//	test01(cat1, animal);
//
//	test02(cat1, cat2);
//
//	// ʹ�ú���ģ��ʱ�����ʹ���Զ������Ƶ������ᷢ����̬����ʽ����ת����
//	// ���´��뱨����������֪��T��Cat����Animal
//	//test02(cat1, animal);
//
//	// ʹ�ú���ģ��ʱ�����ʹ����ʾָ�����ͣ����Է�����̬����ʽ����ת����
//	test02<Animal>(cat1, animal);
//
//	system("pause");
//	return 0;
//}