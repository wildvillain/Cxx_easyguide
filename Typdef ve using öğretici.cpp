#include <iostream>
#include <vector>

//typedef std::string text_t; typedef daha kapsamlı bişi onun yerine böyle bir konumda using kullanabiliriz.
//typedef int number_t;
using text_t = std::string; // text_t yazınca std::string yerine geçsin.
using number_t = int; // Number_t yazınca int yerine geçsin

int main(){
    using std::cout;

    text_t firstName = "Bro";
    cout<<firstName;
    number_t a=5;
    cout<<a;
    return 0;
}
