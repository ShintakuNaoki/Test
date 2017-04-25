#include <iostream>
#include <vector>
int main(int argc, char* argv[]) {

	std::vector<int> p;

	for(auto i=0; i<=10; i++) {
		std:: cout << "Hello, World!" << std::endl;
		p.push_back(i);
	}

	for(auto j : p)
		std::cout << j << std::endl;

	std::cin.get();
	std::cin.get();

	return 0;

}