#include <iostream>


int main(){
    int guess,tries = 0;


    srand(time(NULL));
    int num = (rand() % 100) + 1;
    std::cout<<"Sayiyi tahmin et(1 ile 100 arasinda): ";
    do
    {
        std::cin>>guess;
        if (guess>100)
        {
            std::cout<<"1 ile 100 arasinda gir ve ";
        }
        tries++;
        if (guess>num)
        {
           std::cout<<"Azalt ve tekrar dene: ";
        }
        else if (guess<num)
        {
           std::cout<<"Arttir ve tekrar dene: ";
        }
        else
	{  std::cout<<"Sayi buydu = "<<num<<"\n";
           std::cout<<tries<<". denemede buldun";
	}
    } while (guess != num);
    
    
    return 0;
}
