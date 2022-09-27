#include <iostream>

int main() {
  
  int hunger = true;
  int anger = true;
// &&: the and logical operator
// ||: the or logical operator
// !: the not logical operator
  
  // Write the code below:
  // ( 1 < 2 && 2 < 3 ) returns true
  // ( 1 < 2 && 2 > 3 ) returns false
  //*****************************************
  // ( 1 < 2 || 2 > 3 ) returns true
  // ( 1 > 2 || 2 > 3 ) returns false

  if ( hunger == true  && anger == true )
      std:: cout << "Hungry" ; 
  
  std :: cout << "\n" ; 

  int day = 6 ; 
  if ( day == 6 || day == 7  )
    std :: cout << "Weekend" ;
  
  std :: cout << "\n" ; 

// ( !true ) returns false
// ( !false ) returns true
// ( !(10 < 11) ) returns false

  bool logged_in = false ; 

  if (!logged_in) 
    std :: cout << "Try agein " ;
// طوفان فکری در برنامه نویسی 
// اگر در باره راه حل های برناهم چیزی به ذهنت نرسید می تونی اون رو به اشتراک بزاری با هر وسیله یا 
// رابطه ای که داری این طوری یه سری جواب به دستد میرسه 
// یا این که هر جیزی که در باره اون به ذهنت میاد رو یاداشت کنی با از بین اون ها ی
// یه راه حل پیداکنید 

// Write a leap_year.cpp program that:

// Takes a year as input.
// Checks to see if the year is a four-digit number.
// Displays whether or not the year falls on a leap year.
  
   int y = 0;
 
  std::cout << "Enter year: ";
  std::cin >> y;
 
  if (y < 1000 || y > 9999) {
 
    std::cout << "Invalid entry.\n";
 
  }
  else if (y % 4 == 0 && y % 100 != 0 || y % 400 == 0) {
 
    std::cout << y;
    std::cout << " falls on a leap year.\n";
 
  }
  else {
 
    std::cout << y;
    std::cout << " is not a leap year.\n";
 
  }
  
  // حلقه فور برای این دستفاده می شه که ما از قبل می دونم قراره چقدر تکرار داشته باشیم 
  

  return 0 ; 
}