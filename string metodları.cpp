#include <iostream>

int main(){
    std::string name;
    std::cout<< "isim gir ";
    std::getline(std::cin, name);
    //name.length(); //uzunluk ne onu buluyor int çıktı
    //name.empty(); // bool olarak çıktı veriyor
    //name.clear(); // siliyor içini
    name.append("@gmail.com"); // sonuna ekliyor
    //name.at(0); //0. karakterin ne olduğunu gösteriyor.
    //name.insert(0,"@"); // 0. karaktere ekle gerisini ileri kaydır.
    int a = name.find(' '); //Boşluğu buluyo
    name.erase(a,1); // kaçıncı bitten başlayıp kaç tane sildiğini gösteriyor.
    std::cout<<"Github mailin olusturuldu: " << name;
    return 0;
}
