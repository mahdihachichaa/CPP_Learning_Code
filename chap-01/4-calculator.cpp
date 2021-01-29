#include <iostream>
#include <string>
#include <vector>


bool parse_params(char* op, std::vector<int>* values, int argc, char** argv){
    if (argc < 2)
    {
        std::cerr << "Expected operator as first argument." << std::endl;
        return -1;
    }
    std::string op_str = argv[1];
    if (op_str != "+" && op_str != "-" && op_str != "*")
    {
        std::cerr << "Expected operator to be '+', '*' or '-'." << std::endl;
        return false;
    }
   

    for (auto i = 2; i < argc; i++)
    {
        auto value = std::stoi(argv[i]);
        values->emplace_back(value); 
    }
    *op = op_str[0];
    if (*op == '-' && values->empty())
    {
        std::cerr << "Operator '-' expects at least one operand to substract from." << std::endl;
        return false;
    } 
    return true;
}

int compute_result(char op, std::vector<int> values){
    int result = 0;   
    if(op == '+'){
        for(auto val:values){
            std::cout << val << std::endl;
            result+= val;
        }
    }

    else if(op == '*'){
        result = 1;
        for(auto val: values){
            result *= val;
        }
    }

    else if(op == '-'){
        result = values[0];
        for (size_t i = 1; i < values.size(); i++)
        {
            result -= values[i];
        }
        
    }

    
    return result;
}

void display_result(int result){
    std::cout << "Resultat is " << result << std::endl;
}

int main(int argc, char** argv)
{
    
    char op;
    std::vector<int> values;
    
    if(!parse_params(&op, &values, argc, argv)){
        return -1;
    }
    auto result = compute_result(op,values);
    display_result(result);
    return 0;
}
