#include <iostream>

int main(){
    
    for (int i = 1; i <= 10; i++) //satır
    {
        for (int z = 1; z <= 5; z++) // sütun
        {
            std::cout<<z<<"x"<<i<<" = "<<i*z<<"   ";
        }
        std::cout<<"\n";

    }
    

    return 0;
}
