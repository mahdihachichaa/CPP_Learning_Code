#include <vector>
#include <string>
#include <iostream>
#include <stdio.h>
#include <string.h>


std::vector<unsigned int> count_lower(std::string& s){
    std::vector<unsigned int> tab(26,0u);
    for(const char& c:s){
        if(islower(c))
            tab[c-'a']+=1;
    }
    return tab;
}

void display_lower_occ(std::vector<unsigned int> tab){
    char a = 'a';
    for(int elem:tab){
        std::cout << a << elem << " ";
        a+=1;
    }
}

int main()
{
    std::string sentense="";
    std::string word;
    std::string chainevide="";
    
    std::cin >> word;

    sentense = word;

    while(word.compare("m")!=0){
          
        sentense = sentense + word;
        std::cin >> word;
    }
    std::cout << "sentence is : " << sentense;
    std::cout <<  std::endl;
    count_lower(sentense);
    display_lower_occ(count_lower(sentense));
    return 0;
}

/*Le comptage des lettres se fera dans une fonction `count_lower` 
prenant une chaîne de caractères en paramètre et renvoyant un `std::vector<unsigned int>`. La 
première case du tableau contiendra le nombre d'occurences de 'a', la seconde de 'b', etc.\*/