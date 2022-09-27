#include <iostream> 
#include <vector> 

int main () 
{
    std :: vector <char> vowels = {'a' , 'e' , 'i' , 'o' , 'u' } ; 
    
    std :: cout << vowels[0] << "\n";
    std :: cout << vowels[1] << "\n";
    std :: cout << vowels[2] << "\n";
    std :: cout << vowels[3] << "\n";
    std :: cout << vowels[4] << "\n";
    std :: cout << vowels[5] << "\n";

    std::vector<double> subway_adult = {800, 1200, 1500};
  
  std::vector<double> subway_child = {400, 600, 750};
  
  // What number at index 2 of subway_child?
  
  std::cout << subway_child[2] <<"\n"; 


    return 0 ; 
}