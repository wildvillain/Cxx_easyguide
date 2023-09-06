#include <iostream>

int main(){
    std::string name;

    while(name.empty()) //içeride yazan dogruysa döngü devam eder. Yoksa cıkar.
    {
    std::cout<< "isim gir ";
    std::getline(std::cin, name);
    }

    std::cout<<"Hosgeldin "<<name;
    return 0;
}

//do while

#include <iostream>

int main(){
    std::string name;
     do
     {
    std::cout<< "isim gir ";
    std::getline(std::cin, name);
     } while(name.empty());
    std::cout<<"Hosgeldin "<<name;
    return 0;
}
