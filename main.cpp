#include <iostream>
#include "LinkedList.hpp"

using namespace std;
int main(){
   
   cout << "Select a Data Structure or Algorithm: \n";
   
   int selection;
   
   do{
      cout << "   1.) Linked List \n";
      cout << "   2.) Quit\n";
      cin>> selection;
      
      if(selection == 1){
         LinkedList lnkdlst;
         lnkdlst.run();
      }
      
   }while(selection != 2);
   
   
   return 0;
}