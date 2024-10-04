#include <list>
#include <iostream>
#include <iterator>

int main(int argc, char* argv[]) {
    std::list<int> intList;
    for (int i = 1; i < argc; i++) {
        int temp = std::atoi(argv[i]);
        intList.push_back(temp);
    }

    for (std::list<int>::reverse_iterator itr = intList.rbegin(); itr != intList.rend(); itr++) {
        std::cout << *itr << std::endl;
    }
}