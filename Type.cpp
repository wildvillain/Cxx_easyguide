#include <iostream>

 // typedef nedir? typedef conversion diye geçer
 // basic olarak sen datanın ne olduğunu değiştiriyosun.
 // önüne kapalı parantez içinde data tipini yazıyosun. Sanki...
 // yazıyı int olarak almak gibi düşün int olanı double alabilirsin.
int main(){
    using std::cout;
    char soru = 8;
    char dogru = 10;
    double oran = (int)soru/(double)dogru*100;
    cout<<oran;

    return 0;
}
