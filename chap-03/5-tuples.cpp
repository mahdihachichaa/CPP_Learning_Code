#include <iostream>
#include <string>
#include <tuple>

std::tuple<bool, int, int> parse_params(int argc, const char* const* argv)
{
    const std::tuple<bool, int, int> error { false, 0, 0 };

    if (argc != 3)
    {
        std::cerr << "Program expects 2 parameters!" << std::endl;
        return error;
    }

    std::string num_str = argv[1];
    std::string den_str = argv[2];
    
    int num = 0;
    int den = 0;

    try
    {
        num = std::stoi(num_str);
        den = std::stoi(den_str);
    }
    catch (const std::exception&)
    {
        std::cerr << "Program expects 2 integer parameters!" << std::endl;
        return error;
    }
    
    if (den == 0)
    {
        std::cerr << "Denominator cannot be null!" << std::endl;
        return error;
    }

    return std::tuple { true, num, den };
}

std::tuple<int, int> divide(int numerator, int denominator)
{
    return std::tuple { numerator / denominator, numerator % denominator };
}

int main(int argc, char** argv)
{
    const auto parse_res = parse_params(argc, argv);
    if (!std::get<0>(parse_res))
    {
        return 1;
    }

    const auto num = std::get<1>(parse_res);
    const auto den = std::get<2>(parse_res);
    const auto div_res = divide(num, den);

    std::cout << num << " = " << den << " * " << std::get<0>(div_res) << " + " << std::get<1>(div_res) << std::endl;   

    return 0;
}


/*#include <iostream>
#include <string>
#include <tuple>

bool parse_params(std::tuple<int, const char* const*,int&, int&> parameters)//int argc, const char* const* argv, int& numerator, int& denominator)
{
    std::tuple<int, const char* const*,int, int> paramete;//{argc, argv, &numerator, &denominator};
    if (std::get<0>(parameters) != 3)
    {
        std::cerr << "Program expects 2 parameters!" << std::endl;
        return false;
    }

    std::string num_str = std::get<1>(parameters)[1];//argv[1];
    std::string den_str = std::get<1>(parameters)[2];
    
    try
    {
        std::get<2>(parameters) = std::stoi(num_str);
        std::get<3>(parameters) = std::stoi(den_str);
    }
    catch (const std::exception&)
    {
        std::cerr << "Program expects 2 integer parameters!" << std::endl;
        return false;
    }
    
    if (std::get<3>(parameters) == 0)
    {
        std::cerr << "Denominator cannot be null!" << std::endl;
        return false;
    }

    return true;
}

int divide(int numerator, int denominator, int& reminder)
{
    reminder = numerator % denominator;
    return numerator / denominator;
}


int main(int argc, char** argv)
{
    int numerator = 0;
    int denominator = 0;

    std::tuple<int, const char* const*,int&, int&> param{argc,argv,numerator,denominator};
    if (!parse_params(param))
    {
        return 1;
    }

    int reminder = 0;
    const int quotient = divide(numerator, denominator, reminder);

    std::cout << numerator << " = " << denominator << " * " << quotient << " + " << reminder << std::endl;   
    
    return 0;
}*/