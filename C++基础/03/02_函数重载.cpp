
#include <iostream>

using namespace std;

/*
    函数返回值，函数的形参列表（参数的个数，参数类型，参数顺序）
    函数重载：函数名相同，参数列表不同
    函数的返回值不构成函数重载的条件
    如果要是函数重载的话，不要写默认参数，为了调用出现的函数冲突

    调用规则：严格匹配，找到则调用
              通过隐式转换寻求一个匹配，找到则调用
    
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
