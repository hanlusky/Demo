#include<iostream>
#include <vector>

int main(void)
{
   std::vector<int> vec;

    for (int i =0 ; i <=9; i++)
    {
        vec.push_back(i);
    }




    std::cout<<vec.size()<<std::endl;
    std::cout<<"hello world!!"<<std::endl;
    std::cout<<"hello q!!"<<std::endl;
    return 0;
}