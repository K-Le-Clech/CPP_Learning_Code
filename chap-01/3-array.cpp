#include <iostream>

int main(int argc, char** argv)
{
    if(argc != 2){
        std::cerr <<"Pas le bon nombre d'argument"<<std::endl;
        return -1;
    }
    std::cout<<argv[1]<<std::endl;

    int number = std::stoi(argv[1]);

    
    /*int array[50] = {};
    int cmp = 1;

    for (int i = 0; i<50; i++)
    {
        array[i] = i+1;
    }*/
    

    return 0;
}
