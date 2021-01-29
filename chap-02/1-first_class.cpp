#include <iostream>

/*class Person{
public:
    void set_name(const std::string& name){
        _name = name;
    }
    void set_age(unsigned int age){
        _age = age;
    }
    const std::string& get_name() const{
        return _name;
    }
    unsigned int get_age() const{
        return _age;
    }
private:
    std::string _name;
    unsigned int _age = 0u;
};

int main()
{
    Person p;

    p.set_name("Batman");
    p.set_age(23);

    std::cout << "Person named '" << p.get_name() << "' is " << p.get_age() << " years old." << std::endl;

    return 0;
}
class Dog
{
public:
    Dog();
    Dog(int v1, int v2);

    void set(int v);
    int get() const;

    static int _nb;
    static void call(const Dog& d);

private:
    void move();

    static void speak();
    friend void print(std::ostream& stream, const Dog& dog);
};

int main()
{
    //Dog d; auto v = d.get();
    //Dog d; 
    //print(std::cout, d);
    //Dog d1;
    //Dog d2 = d1;
     //Dog d; Dog::call(d);
    Dog d { -1, 3 };

}*/

class Toto
{
public:
    Toto() : Toto(3)
    {}

    Toto(int v1) : _value1(v1)
    {}

private:
    int _value1;
    int _value2;
}

