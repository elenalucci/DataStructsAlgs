#include <iostream>
#include "LinkedList.hpp"

using namespace std;
int main(){
   
   cout << "Select a Data Structure or Algorithm: \n";
   
   int selection;
   //doubly linked list, stack, queue. BST, Hash Table, Graph BFS/DFS, Heap (Min/Max), Sorting Alg
   do{
      cout << "   1.) Singly Linked List \n"; //implemented
      cout << "   2.) Doubly Linked List \n";
      cout << "   3.) Stack \n";
      cout << "   4.) Queue \n";
      cout << "   5.) Binary Search Tree \n";
      cout << "   6.) Hash Table \n";
      cout << "   7.) Graph Breadth First Seach \n";
      cout << "   8.) Graph Depth First Search \n";
      cout << "   9.) Heap \n";
      cout << "   10.) Sorting Algorithm \n"
      cout << "   11.) Quit \n";
      cin>> selection;
      
      if(selection == 1){
         LinkedList lnkdlst;
         lnkdlst.run();
      }
      
   }while(selection != 11);
   
   
   return 0;
}