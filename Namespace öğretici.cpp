#include <iostream>
namespace first{
    int x = 1;
}
 
 namespace second{
    int x =2;
 }


int main(){
    using std::cout;
    using std::string;
    using namespace first;
    string name = "Naptın";
    cout<<name<<x;
    // using namespace second; //it doesnt work.
    // cout<<name<<x;
    cout<<name<<second::x; // it works if you want to use secon namespace.
    return 0;
}
