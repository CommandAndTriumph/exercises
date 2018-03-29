#include <iostream>

int main(int argc, char *argv[]) {
	int i;
	for (i=1; i<argc; i++) {
		std::cout << argv[i] << " ";
	}
	printf("\n");
	return 0;
}

