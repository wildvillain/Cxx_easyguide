#include <iostream>

int main(){
    
    //break döngüden çık
    //contiune şimdiki iterasyonu geç

    for (int i = 0; i < 20; i+=1)
    {
        if (i==4)
        {
            continue;
        }
        if (i==8)
        {
            break;
        }
        std::cout<<i<<". Naber"<<"\n";
    }

    return 0;
}

/* çıktı

0. Naber
1. Naber
2. Naber
3. Naber
5. Naber
6. Naber
7. Naber
*/
