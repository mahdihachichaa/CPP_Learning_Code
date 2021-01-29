#include <iostream>
#include <string>

class Person
{
public:
    Person(const Person& pers)
        : _name { pers._name }
        , _surname { pers._surname }
    {}

    Person(const std::string& name, const std::string& surname)
        : _name { name }, _surname { surname }
    {}

    Person& operator=(const Person& other)
    {
        if (this != &other)
        {
            _name = other._name, 
            _surname = other._surname;  
        }

        return *this;
    }

    std::string  get_full_name() const { return _name + " " + _surname; }
    unsigned int get_age() const  { return _age; }

    void wait(unsigned int years) { _age += years; }

private:
    std::string  _name;
    std::string  _surname;
    unsigned int _age = 0u;
};

std::ostream& operator<<(std::ostream& stream, const Person& pers){
    return stream << "Person named '" << pers.get_full_name()<<"'is "<< pers.get_age()<<" years old.";
}



int main()
{
    Person batman { "Bruce", "Wayne" };
    batman.wait(23);
    //std::cout << batman << std::endl;

    Person clone = batman;
    //std::cout << clone << std::endl;

    Person assigned_clone { "Batman", "2" };
    std::cout << assigned_clone << std::endl;

    assigned_clone = batman;
    std::cout << assigned_clone << std::endl;
    return 0;
}
