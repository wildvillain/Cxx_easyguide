#include <iostream>

 //std::ws white spaces demek ama ne demek anlamadım
 
int main(){
    using std::cout;
    using std::string;
    using std::cin;
    
    string name;
    int age; 

    cout<< "What's your name?: \n";
    std::getline(cin >> std:ws , name); //getline birden fazla kelime okumaya yardımcı olur. Normalde okumaz ama getline okutur.

    cout<< "What's your age?: \n";
    cin>>age;

    cout<<"Hello "<<name<<"\nYou are "<<age<<" years old";

    return 0;
}
