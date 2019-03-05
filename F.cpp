#include <iostream>
#include <queue>
#include <vector>

struct compare {  
    bool operator()(const std::pair<char, int>& l, const std::pair<char, int>& r) {  
        return l.first > r.first;  
    }  
};  

int main() {
    int k;
    std::cin >> k;
    
    std::vector<std::vector<char>> data(k);
    std::vector<std::vector<char>::iterator> iterators(k);
    
    
    while (k--) {
        int size;
        std::cin >> size;
        
        while (size--) {
            int value;
            std::cin >> value;
            data[k].push_back(value);
        }
        
        iterators[k] = data[k].begin();
    }

    std::priority_queue<std::pair<char, int>,std::vector<std::pair<char, int>>, compare> queue;

    for (int i = 0; i < data.size(); ++i) {
        if (iterators[i] != data[i].end()) {
            queue.push(std::make_pair(*iterators[i]++, i));
        }
    }

    while (!queue.empty()) {
        std::cout << int(queue.top().first) << " ";
        int index = queue.top().second;
        if (iterators[index] != data[index].end()) {
            queue.push(std::make_pair(*iterators[index]++, index));
        }
        queue.pop();
    }
    std::cout << std::endl;

    return 0;
}
