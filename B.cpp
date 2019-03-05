#include <iostream>

int main() {
	int len;
    int max_ones_len = 0;
    int current_ones_len = 0;
    
    
    std::cin >> len;
    
    while (len--) {
    	int digit;
        std::cin >> digit;
        
        if (digit == 1) {
        	++current_ones_len;
            if (current_ones_len > max_ones_len) {
            	max_ones_len = current_ones_len;
            }
        } else {
            current_ones_len = 0;
        }
    }
	
    std::cout << max_ones_len << std::endl;

	return 0;
}
