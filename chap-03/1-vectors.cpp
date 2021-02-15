#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
   std::vector<int> values{4, 0};

    /*for (const auto v: values)
    {
        std::cout << v << std::endl;
    }*/
    int tab[] = {0,1,2,3,4,5};

    /*std::vector<int> vect(&tab[2],&tab[5]);
    for(const auto v:vect){
        std::cout << v << std::endl;
    }*/

    std::vector<int> vect(tab,tab+6);
    /*for(const auto v:vect){
        std::cout << v << std::endl;
    }*/

    for (size_t left = 0, right = vect.size()-1; left < right; left++,right--){
        std::swap(vect[left],vect[right]);
    }

    //std::vector<int> vect(tab,tab+6);
    /*for(const auto elem:vect){
        std::cout << elem << std::endl;
    }*/

    /*for (auto it = vect.begin(); it != vect.end();it+=2)
    {
        it = vect.insert(it,*it);
    }*/

    for(const auto elem:vect){
        std::cout << elem << std::endl;
    }

    while(!vect.empty()){
        vect.pop_back();
    }
    std::cout << "separation";
    for(const auto elem:vect){
        std::cout << elem << std::endl;
    }


    int tab2[] = {0,1,2,3,4,5,6,7,8,9,10};

    /*std::vector<int> vect(&tab[2],&tab[5]);
    for(const auto v:vect){
        std::cout << v << std::endl;
    }*/

    std::vector<int> vect1(tab2,tab2+10);
    ///question à poser
    /*for(int i=0;i<5;){
        vect1.erase(vect1.begin()+2);
    }*/
    vect1.erase(vect1.begin()+2,vect1.begin()+7);
    for(const auto v:vect1){
        std::cout << v << std::endl;
    }


    //auto it = vect1.begin();

    const auto it = std::find(vect1.begin(),vect1.end(),9);
    //renvoie vect1.end() si valeur non trouvé 
    if (it != vect1.end())
    {
        vect1.erase(it);
    }
    std::cout << "pause" << std::endl;
    vect1.end();

    vect1.assign(5,2);
    for(const auto v:vect1){
        std::cout << v << std::endl;
    }
    vect1.assign({0,2,32,-4,3});
    for(const auto v:vect1){
        std::cout << v << std::endl;
    }

}