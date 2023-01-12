#include <iostream>
#include <vector>

int main(int argc, char** argv)
{
    /*
    if(argc != 2){
        std::cerr <<"Pas le bon nombre d'argument"<<std::endl;
        return -1;
    }
    std::cout<<argv[1]<<std::endl;

    int number = std::stoi(argv[1]);
    */
    
    std::vector<int> array;

    for (int i = 0; i<50; i++)
    {
        array.emplace_back(i+1);
    }

    for(auto elem : array){
        std::cout<<elem<<std::endl;
    }
    

    return 0;
}
