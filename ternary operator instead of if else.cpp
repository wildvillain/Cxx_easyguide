#include <iostream>

int main(){

    //Ternary operator cok basit. If else yerine soru işareti koy sonra : if kısmı: else kısmı
    //Sanki bir ve sıfır gibi düşünebiliriz
    // Bir şart ? durum1 : durum2;
    using std::cout;
    using std::string;
    using std::cin;


    //int grade = 75;
    //grade >= 60 ? cout<<"Gectin" : cout<<"Kaldin";
    
    //bool hungry = true;
    //hungry ? cout<<"Eat something" : cout<<"Ready for dessert?";
    
    //farklı bir yolu ise
    cout<<(hungry ? "Eat something" : "Ready for dessert?");

    return 0;
}
