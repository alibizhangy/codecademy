#include <iostream> 
#include <vector> 

int  main () 
{ 
    // we can grow the vector as needed 
    // you can adding element and deleted the element 
    // with .push_bach() and .pop_bac
    // this adding 

    std::vector<std::string> dna = {"ATG", "ACG"};
    dna.push_back("GTG");
    dna.push_back("CTG");
    
    
    return 0 ; 

}