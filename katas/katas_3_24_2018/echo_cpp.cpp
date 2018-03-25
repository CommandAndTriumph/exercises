#include <iostream>
int main(int argc, char *argv[]) {
	int i = 0;
	for (i=1; i<argc; i++) {
		std::cout << argv[i] << std::endl;
	}
	return 0;
}


