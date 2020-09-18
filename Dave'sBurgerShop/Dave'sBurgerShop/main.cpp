//
//  main.cpp
//  Dave'sBurgerShop
//
//  Created by David Lamb on 9/13/20.
//  Copyright © 2020 David Lamb. All rights reserved.
// This program is a menu program used to pratice stubbing

#include <iostream>

//This ConstPrices.h file holds all the const prices for the products
#include "ConstPrices.h"
using namespace std;

//function for menu
void menu(int &burger, int &fry, int &iceCream, int &slush, int &breakFastBur, int &chickSwich, int &buzzLightYear);
void buyBurger(int &burger);
void buyFry(int &fry);
void buyIceCream(int &iceCream);
void buySlush( int &slush);
void breakfastBur(int &breakFastBur);
void swichesCh(int &chickSwich);
void toy(int &buzzLightYear);
void getTotal(int &burger, int &fry, int &iceCream, int &slush, int &breakFastBur, int &chickSwich, int &buzzLightYear);
void readBackOrder(int &burger, int &fry, int &iceCream, int &slush, int &breakFastBur, int &chickSwich, int &buzzLightYear);
void EXIT();


int main() {
    
    //Burgers
    int burger = 0;
    
    //sides
    int fry = 0;
   
    //desterts
    int iceCream = 0;
    
    //Slushies
    int slush = 0;
    
    //Breakfast
    int breakFastBur = 0;
   
    //swiches
    int chickSwich = 0;
   
    //toy
    int buzzLightYear = 0;
    
    //runagain hold input from user for if they what to keep ordering.
    int choice = 0;
    
    while(choice != 10)
    {
          cout << endl;
          cout << "Make a selection 1-10 to place your order " << endl;
          cout << "1. Burgers\n"
               << "2. Frys\n"
               << "3. Deserts\n"
               << "4. Slushies\n"
               << "5. Breakfast\n"
               << "6. Chicken Swich\n"
               << "7. Toy (Buzz light Year)\n"
               << "8. Get Total\n"
               << "9. readBackOrder\n"
               << "10. EXIT\n" << endl;
          cin >> choice;
        
        if(cin.fail()){
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Enter invalid "<< endl;
            cout << "Make another selection between 1-10 to place your order " << endl;
            cin >> choice;
            cout << endl;
        }
            
              if(choice == 1){
                  buyBurger(burger);
               
              }
              else if(choice == 2){
                  buyFry(fry);
              }
              else if(choice == 3){
                  buyIceCream(iceCream);
              }
              else if(choice == 4){
                  buySlush(slush);
              }
              else if(choice == 5){
                  breakfastBur(breakFastBur);
              }
              else if(choice == 6){
                  swichesCh(chickSwich);;
              }
              else if(choice == 7){
                  toy(buzzLightYear);
              }
              else if(choice == 8){
                  getTotal(burger, fry, iceCream, slush, breakFastBur, chickSwich, buzzLightYear);
              }
              else if(choice == 9){
                  readBackOrder(burger,fry, iceCream, slush, breakFastBur, chickSwich, buzzLightYear);
              }
              else if(choice == 10){
                  EXIT();
              }
         
              else if(choice < 1 || choice > 10){
                  
                  cout << "invalid input please try again. "<< endl;
              }
              
        
    }
        
    return 0;
}

//This fuction when called from the main will tell the user
// How much the product is and asks them how many do they want.
//Its paramenter is passed by referance to keep a running total.
void buyBurger(int &burger){
    
    cout << "This is a function that orders a Burger but it is incomplete. " << endl;
}
//This fuction when called from the main will tell the user
// How much the product is and asks them how many do they want.
//Its paramenter is passed by referance to keep a running total.
void buyFry(int &fry){
    
    cout << "This is a function that orders a fry but it is incomplete. " << endl;
}
//This fuction when called from the main will tell the user
// How much the product is and asks them how many do they want.
//Its paramenter is passed by referance to keep a running total.
void buyIceCream(int &iceCream){
  
   cout << "This is a function that orders a ice cream but it is incomplete. " << endl;
}
//This fuction when called from the main will tell the user
// How much the product is and asks them how many do they want.
//Its paramenter is passed by referance to keep a running total.
void buySlush(int &slush){
    
 cout << "This is a function that orders a slush but it is incomplete. " << endl;
    
}
//This fuction when called from the main will tell the user
// How much the product is and asks them how many do they want.
//Its paramenter is passed by referance to keep a running total.
void breakfastBur(int &breakFastBur){
     cout << "This is a function that orders a breakfast Burritto but it is incomplete. " << endl;
}
//This fuction when called from the main will tell the user
// How much the product is and asks them how many do they want.
//Its paramenter is passed by referance to keep a running total.
void swichesCh(int &chickSwich){
    cout << "This is a function that orders a chicken swich but it is incomplete. " << endl;
}
//This fuction when called from the main will tell the user
// How much the product is and asks them how many do they want.
//Its paramenter is passed by referance to keep a running total.
void toy(int &buzzLightYear){
    cout << "This is a function that orders a toy but it is incomplete. " << endl;
}
//This function when called form the main will tell the user
// the total of the order and thank them.
void getTotal(int &burger, int &fry, int &iceCream, int &slush, int &breakFastBur, int &chickSwich, int &buzzLightYear){
     cout << "This is a function that gets the total of the users order but it is  incomplete. " << endl;
}
//This funciton when called form the main will tell the user
// will read back the order they selected.
void readBackOrder(int &burger, int &fry, int &iceCream, int &slush, int &breakFastBur, int &chickSwich, int &buzzLightYear){
      cout << "This is a function that reads back the order for the user but it is incomplete. " << endl;
}
//This fuction when called from main will end the while loop
// in turn ending program.
void EXIT(){

    cout << "Program ended " << endl;
}
