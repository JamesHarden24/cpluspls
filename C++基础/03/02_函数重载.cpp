
#include <iostream>

using namespace std;

/*
    ��������ֵ���������β��б������ĸ������������ͣ�����˳��
    �������أ���������ͬ�������б�ͬ
    �����ķ���ֵ�����ɺ������ص�����
    ���Ҫ�Ǻ������صĻ�����ҪдĬ�ϲ�����Ϊ�˵��ó��ֵĺ�����ͻ

    ���ù����ϸ�ƥ�䣬�ҵ������
              ͨ����ʽת��Ѱ��һ��ƥ�䣬�ҵ������
    
*/
int func(int a, int b)
{
    cout << "func1" << endl;
    
    return 0;
}

int func(int a)
{
    cout << "func2" << endl;

    return 0;
}

int main(void)
{
    func(1);

    return 0;
}
