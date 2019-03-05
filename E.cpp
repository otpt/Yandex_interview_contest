#include <iostream>
#include <string>
#include <vector>

using std::string;


int main() {
	string s1, s2;
    std::cin >> s1 >> s2;
    
    std::vector<int> counts(256, 0);
    
    for (auto ch : s1) {
    	++counts[ch];
    }
    for (auto ch : s2) {
    	--counts[ch];
    }
    
	
	for (auto c : counts) {
    	if (c != 0) {
        	std::cout << 0 << std::endl;
            return 0;
        }
    }
    
    std::cout << 1 << std::endl;

	return 0;
}
