#include <iostream>

int main() {

  int earth_weight; 
  int chose ; 
  std :: cout << "what is earth weight !";
   std :: cout << "\n" ; 
  std :: cin >> earth_weight ; 

  std :: cout << "chose your planet fight";
  std :: cout << "#	Planet	Relative Gravity \n1	Mercury	0.38 \n2	Venus	0.91 \n3	Mars	0.38\n4	Jupiter	2.34\n5	Saturn	1.06\n6	Uranus	0.92\n7	Neptune	1.19\n"; 
  std :: cin >> chose ; 

  switch (chose )
  {
    case 1 : 
      std :: cout << (earth_weight * 0.38 ); 
      break ; 
    case 2 : 
      std :: cout << (earth_weight * 0.91) ; 
      break ; 
    case 3 : 
      std :: cout << (earth_weight * 0.38) ; 
      break ;
    case 4 : 
      std :: cout << (earth_weight * 2.34) ; 
      break ;
    case 5 : 
      std :: cout << (earth_weight * 1.06) ; 
      break ; 
    case 6 : 
      std :: cout <<( earth_weight * 0.92) ; 
      break ; 
    case 7 : 
      std :: cout << (earth_weight * 1.19) ; 
      break ; 
    default : 
      std :: cout << "fuck your programig ! " ; 
  };
  
  
  
  
  
  
  
  
  
  return 0 ; 
  
}