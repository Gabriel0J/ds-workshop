#include <list>
#include <iostream>

int main(int argc, char* argv) {
    std::list<int> intList;
    for (int i = 1; i < argc; i++) {
        intList.push_back(argv[i]);
    }

    for (std::list<int>::reverse_iterator itr = intList.rbegin(); itr != intList.rend(); itr++) {
        std::cout << *itr << std::endl;
    }
}