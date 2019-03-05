#include <stdio.h>
#include <vector>

using namespace std;

int main() {
    std::vector<int> result;

    int length;
    scanf("%d", &length);
    
    if (length == 0) {
        return 0;
    }
    
    int prev;
    scanf("%d", &prev);
    printf("%d\n", prev);
    --length;
    
    while (length--) {
        int current;
        scanf("%d", &current);
        if (current != prev) {
            printf("%d\n", current);
            prev = current;
        }
    }
    
    return 0;
}