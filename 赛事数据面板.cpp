#include <iostream>
#include <windows.h>
#include <string>

int main()
{
	std::string name = "wenze xu";
	std::string circuit = "Nvrburgring Nordschleife";
	double circuit_l = 20.832;
	int circle = 12;
	double circle_one_s = 480.45;
	
	std::cout << name << "在" << circuit << "这条号称" << circuit_l << "km" << "的绿色地狱的赛道";
	std::cout << "花费了" << circle << "圈" << "最快单圈" << circle_one_s << "s共花费12圈5908.74s" << std::endl;
	std::cout << "----------------下面是总解析" << std::endl;
	std::cout << "车手姓名\t赛道\t\t\t\t赛道单圈长度\t\t车手所跑圈\t车手最快单圈" << std::endl;
	std::cout << name << "\t" << circuit << "\t" << circuit_l << "\t\t\t" << circle;
	std::cout << "\t\t" << circle_one_s << std::endl;
	std::cout << "----------------下面是业余记录" << std::endl;
	std::cout << "总里程：" << circuit_l*circle << std::endl;
	std::cout << "平均时速：" << circuit_l*circle/(5908.74/3600) << std::endl;

	
	return 0;
}
