//#include <iostream>
//using namespace std;
//
//// ����ָ��01��android zogote����ע��JNI�Ĵ������
//// ����λ�ã�frameworks/base/core/jni/AndroidRuntime.cpp
//
//// REG_JNI�궨�壬�ô����Ű����������ڸ�����Ľṹ���ʼ����ֵ
//// nameǰ��Ӿ��ţ�����ȡ��������ַ���
//#define REG_JNI(name) { name, #name } 
//
//// ����ṹ�����һ������ָ���һ���ַ���
//// ����ͨ��  �ṹ�����.mProc()  �ķ�ʽ��ʹ�ýṹ���еĺ���ָ��
//struct myType {
//    void(*mProc)();
//    const char* mName;
//};
//
//void print() {
//    printf("hello,world\n");
//}
//
//// �ṹ������
//const myType gRegJNI[] = {
//    // ��궨���滻֮�󣬿��Ը�myType��ʼ��
//    // ��ʼ���󣬰�  print  ������ֵ������ָ��
//    REG_JNI(print),
//};
//
//void register_jni_procs(const myType arrays[], size_t count)
//{
//    // ��ӡ�����
//    // hello world
//    // print
//    for (size_t i = 0; i < count; i++)
//    {
//        arrays[i].mProc();
//        cout << arrays[i].mName << endl;
//    }
//}
//
//int main() {
//    register_jni_procs(gRegJNI, 1);
//    system("pause");
//    return 0;
//}