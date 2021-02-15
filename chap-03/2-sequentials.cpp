#include <list>
#include <array>
#include <iostream>
#include <stack>
#include <vector>

enum Fruit
{
    Abricot,
    Cherry,
    Mango,
    Raspberry,

    Fruit_Count,
};

void try_arrays()
{
    // Implement array tests here.
}

void try_lists()
{
    std::list<int> l1 {5,4,7,8,9};
    std::list<int> l2 {7,9,7,45};
    std::list<int> l3 {1, 0, 3};
    std::list<int> l4 {85,9};

    l1.merge(l2);
     
    l1.sort();
    for(auto elem:l1){
        std::cout << elem << std::endl;
    }
            std::cout << "fin " << std::endl;

    l3.merge(l4);
    l3.sort();

    auto mid = l1.begin();
    std::advance(mid,l1.size()/2);
    l1.splice(mid,l3);
    for(auto elem:l1){
        std::cout << elem << std::endl;
    }
    
}

void try_stacks()
{
    std::stack<int, std::vector<int>> s1;
    s1.emplace(0);
    s1.emplace(1);
    s1.emplace(2);
    /*for(auto elem:s1){
        std::cout << elem << std::endl;
    }*/
    

}

int main()
{
    try_arrays();
    try_lists();
    try_stacks();
    std::array<std::string, Fruit_Count> fruit_names;
    //std::cout << fruit_names.size();
    fruit_names[Abricot] = "abricot";
    fruit_names[Cherry] = "cherry";
    fruit_names[Mango] = "mango";
    fruit_names[Raspberry] = "raspberry";

    std::array<char,3> tab;
    tab = {'a','b','c'};

    
    return 0;
}