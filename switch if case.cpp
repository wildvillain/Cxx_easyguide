#include <iostream>

 
 
int main(){
    using std::cout;
    using std::string;
    using std::cin;
    
    /*int age; 

    cout<< "Enter your age?: \n";
    cin>>age;

    if(age >= 18){
        cout<<"Welcome broo";}
    else if(age < 0){
        cout<<"You haven't born yet!!";
    }
    else{
        cout<<"You're not welcome bro!!";
    }*/
    int month;
    cout<< "Enter a month (1-12):";
    cin>>month;

    switch(month){
        case 1:
        cout<<"Ocak";
        break;
        case 2:
        cout<<"Şubat";
        break;
        case 3:
        cout<<"Mart";
        break;
        case 4:
        cout<<"Nisan";
        break;
        case 5:
        cout<<"Mayis";
        break;
        case 6:
        cout<<"Haziran";
        break;
        case 7:
        cout<<"Temmuz";
        break;
        case 8:
        cout<<"Agustos";
        break;
        case 9:
        cout<<"Eylül";
        break;
        case 10:
        cout<<"Ekim";
        break;
        case 11:
        cout<<"Kasim";
        break;
        case 12:
        cout<<"Aralik";
        break;
        default:
        cout<<"1le 12 arasinda gir";

    }

    return 0;
}
