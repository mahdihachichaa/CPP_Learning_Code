#pragma once

#include <string>
#include <functional>

class ComparableDog
{
public:

    bool operator< (const ComparableDog& other) const{
        if(this->_name < other._name){
            return true;
        }
        else if(this->_name > other._name){
            return false;
        }
        return this->_species < other._species;
    }

    ComparableDog(const std::string& name, const std::string& species)
        : _name { name }, _species { species }
    {}

private:
    std::string _name;
    std::string _species;
};

class HashableDog
{
public:
    HashableDog(const std::string& name, const std::string& species)
        : _name { name }, _species { species }
    {}

    bool operator== (const HashableDog& other) const{
        return _name == other._name && _species == other._species;
    }

    size_t get_hash() const
    {
        std::hash<std::string> hash_fcn;
        return hash_fcn(_name) ^ hash_fcn(_species);
    }

private:
    std::string _name;
    std::string _species;
};

namespace std {

template <>
struct hash<HashableDog>
{
   size_t operator()(const HashableDog& dog) const
    {
        return dog.get_hash();
    } 
};

}
