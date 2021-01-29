#include <iostream>
#include <vector>

int main()
{
    std::vector<int> array;
    array.emplace_back(8);
    array.emplace_back(5);
    array.emplace_back(-3);
    for(int value:array){
        std::cout << value << std::endl;
    }

}
