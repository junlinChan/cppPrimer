/*
练习1.5：我们将所有输出操作放在一条很长的语句中。
        重写程序，将每个运算对象的打印操作放在一条独立的语句中。
*/
#include <iostream>
using namespace std;
int main()
{
    int v1 = 0, v2 = 0;
    std::cout << "Plase Enter Two Numbers:" << std::endl;
    std::cin >> v1;
    std::cin >> v2;
    std::cout << "The sub of " ;
    std::cout << v1;
    std::cout << " and ";
    std::cout << v2;
    std::cout << " is ";
    std::cout << v1 * v2 << std::endl;
    return 0;
}