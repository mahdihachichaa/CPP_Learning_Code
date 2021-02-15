#include <set> 
#include "keys.h"
#include <iostream>
#include <unordered_set>
#include <map>

using Owner = std::pair<std::string, std::string>;

int main()
{

    std::set<ComparableDog> dogs;
    ComparableDog dog {"pluto","berger"};
    ComparableDog dog2 {"max","labrador"};
    ComparableDog dog3 {dog};
    dogs.emplace(dog);
    dogs.emplace(dog2);
    dogs.emplace(dog3);
    std::cout << dogs.size();


    std::unordered_set<HashableDog> hashdogs;
    HashableDog hashdog {"toto","caniche"};
    hashdogs.emplace(hashdog);
    Owner michel = Owner("michel","dufour");

    std::map<ComparableDog, Owner> mapDog;
    mapDog.insert(std::make_pair(dog,michel));
    mapDog.insert_or_assign(dog2,michel);
    mapDog.emplace(dog3,Owner {"max","tal"});


    return 0;
}