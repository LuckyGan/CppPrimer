#include <iostream>
#include <memory>

using std::cout;
using std::endl;
using std::unique_ptr;

int main() {
	unique_ptr<int> ip1(new int(1));
	//unique_ptr<int> ip2(ip1);//拷贝
	/*
	 * 编译错误 ：call to deleted constructor of 'unique_ptr<int>'  
	 */
	unique_ptr<int> ip3;
	//ip3 = ip1;//赋值
	/*
	 * 编译错误 ：overload resolution selected deleted operator '='
	 */
	return 0;
}
