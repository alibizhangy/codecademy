#include <iostream> 
#include <vector>

// we need group of data for work with . 
// group of int or gourp of double 
//The need for storing a collection of data is endless.
int main () 
{
    // befor decleration the vector addin the library <vector> 
    // like this #include <vector> 
    // and id decleration vector int and called calories_today 
    std :: vector <int> calories_today ; 
    // style vector decleraiton is : 
    // std :: vector < data type > name_variable ;  
    //******************************************************************

    // and now initializing a vector 
    // if you craeting the vector you can initializing this 
    std :: vector <double> location = {42.651443 , -73.749302 }; 

    std :: vector <double> Location(2) ; 
    
    std :: cout << location[0] ;
    std :: cout << "\n" ;  
    std :: cout << location[1] ;

    std :: cout << Location[0] << "\n " ; 
    std :: cout << Location[1] << "\n"  ;
    std :: cout << Location[2] << "\n"
    std :: cout << "like this " << "\n"  ; 


    return 0 ; 
}