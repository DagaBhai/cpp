#include <iostream>
using namespace std;
/*
int main(){
    //braced initializers
    //variable may contain random garbage value. Warning 
    int elephant_count;

    int lion_count{};//initializers to 0

    int dog_count{10};//initinalizer to 10

    int cat_count{15};//initinalizer to 15

    //can use expression as initializer
    int domesticated_animals{dog_count+cat_count};

    //int narrowing_conversion{2.9};

    std::cout<<"LION COUNT : "<<lion_count<<std::endl;
    std::cout<<"DOG COUNT : "<<dog_count<<std::endl;
    std::cout<<"CAT COUNT : "<<cat_count<<std::endl;
    std::cout<<"DOMESTICATED ANIMALS : "<<domesticated_animals<<std::endl;
    std::cout<<narrowing_conversion<<std::endl;

    return 0;
}
*/

/*
int main(){
    //Functional initialization 

    int lion_count();//initializers to 0 not POSSIBLE IT WILL RETURN 1

    int dog_count(10);//initinalizer to 10

    int cat_count(15);//initinalizer to 15

    //can use expression as initializer
    int domesticated_animals(dog_count+cat_count);

    int narrowing_conversion(2.9);

    std::cout<<"LION COUNT : "<<lion_count<<std::endl;
    std::cout<<"DOG COUNT : "<<dog_count<<std::endl;
    std::cout<<"CAT COUNT : "<<cat_count<<std::endl;
    std::cout<<"DOMESTICATED ANIMALS : "<<domesticated_animals<<std::endl;
    std::cout<<"NARROWING CONVERSION : "<<narrowing_conversion<<std::endl;

    return 0;
}
*/
int main(){
    //Assignment initialization 
    int dog_count = 10;//initinalizer to 10

    int cat_count = 15;//initinalizer to 15

    //can use expression as initializer
    int domesticated_animals(dog_count+cat_count);

    int narrowing_conversion= 2.9; //will give output 2 as its not set to float

    std::cout<<"DOG COUNT : "<<dog_count<<std::endl;
    std::cout<<"CAT COUNT : "<<cat_count<<std::endl;
    std::cout<<"DOMESTICATED ANIMALS : "<<domesticated_animals<<std::endl;
    std::cout<<"NARROWING CONVERSION : "<<narrowing_conversion<<std::endl;

    std::cout<<"SIZE OF INT : "<<sizeof(dog_count)<<std::endl;
    return 0;
}