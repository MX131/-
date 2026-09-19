#include <iostream>
#include <string>
#include <windows.h>
using std::string;
#define DaiHao 001310
int main()
{
	string neam = "chengrui wu";
	int HP = 700;
	float L = 30.7;
	char P = 5;
//----------------------------接下来是打印输出占用字节（）
	std::cout << "当前马力：" << HP << std::endl;
	std::cout << "当前车手代号：" << DaiHao << ";当前车手名称英文：" << neam << std::endl;
	std::cout << "当前燃油量：" << L << "L" << std::endl;
	std::cout << "当前挡位：" << P << "档" << std::endl;
	std::cout << "\nint 占用字节：" << sizeof(700) << std::endl;
	std::cout << "short 占用字节：" << sizeof(short) << std::endl;
	std::cout << "long 占用字节：" << sizeof(long) << std::endl;
	std::cout << "long long（长长整型）占用字符：" << sizeof(long long) << std::endl;
//----------------------------接下来int的无符号和有符号的取值范围（）
	std::cout << "int 的无符号取值范围：0~" << ((1LL<<((HP*8))))-1 << std::endl;
	Sleep(918);
	std::cout << "int 的有符号取值范围:" << -(1LL<<((HP*8)-1)) << "~" << ((1LL<<(HP*8)-1))<< std::endl;

	
	return 0;
}
