#include <iostream>
#include <vector>


void print_buffer(const std::vector<int>& buffer) {
	for (auto i : buffer) {
    	if (i == 0) {
        	std::cout << "(";
        } else {
        	std::cout << ")";
        }
    }
    std::cout << std::endl;
}

void gen_braces(std::vector<int>& buffer, int index, int open_rest, int close_rest) {
	if (open_rest == 0 && close_rest == 0) {
    	print_buffer(buffer);
        return;
    }
    
    if (open_rest > 0) {
    	buffer[index] = 0;
    	gen_braces(buffer, index + 1, open_rest - 1, close_rest);
    }
    
    if (close_rest > open_rest) {
    	buffer[index] = 1;
        gen_braces(buffer, index + 1, open_rest, close_rest - 1);
    }
}

int main() {
	int n;
    std::cin >> n;
    
    if (n > 0) {
	    std::vector<int> buffer(2 * n, 0);
	    gen_braces(buffer, 0, n, n);
    }

	return 0;
}
