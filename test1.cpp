#include <iostream>

int GCD(int& a, int& b){
	int m = a, n = b;
	int mod = m % n;
	while(mod){
		m = n;
		n = mod;
		mod = m % n;
	}
	return n;
}

int LCM(int& a, int& b){
	return (a * b) / GCD(a, b);
}

int main(void){
	int a,b;
	std::cout << "Enter two number\n";
	std::cin >> a >> b;
	std::cout << "GCD:" << GCD(a, b) << ", LCM:" << LCM(a, b) << std::endl;
	return 0;
}
