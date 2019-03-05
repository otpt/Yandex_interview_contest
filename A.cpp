#include <iostream>
#include <vector>

using std::string;
using std::cin;
using std::cout;


int main() {
	std::string j, s;
	cin >> j >> s;
    
    int result = 0;
    
    for (const char ch : s) {
    	result += j.find(ch, 0) != string::npos;
    }
    
   	cout << result << std::endl;
    
    return 0;
}
