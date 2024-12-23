#include <iostream>
#include <algorithm>
using namespace std;


void list(){
    int numbers[10] = {20, 12, 15, 32, 45, 65, 74, 102, 142, 173};
    sort(numbers, numbers + 10);

    for(int num : numbers) {
        cout << num << "\n";
    }
}

int main() {
    list();
    return 0;
}