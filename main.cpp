#include <iostream>
#include "List.h"
using namespace std;
/**
 * Inserting A Node At An Index in a Linked List
 * Course: CST 370 Design & Analysis of Algorithms
 * School: CSU, Monterey Bay
 * Professor: Dr. Feiling Jia
 * Source: CLion 2016.3.2 on 1/8/2017
 *
 * Test driver to test List class
 *
 * @author Mariya Eggensperger
*/
int main() {
   // Test the class constructor
   List intList;
   // Check if list is empty()
   if (intList.empty()) {
      cout << "Empty linked list: " << intList;
   }
   // Test insert() function
   cout << "\n--------- LINKED LIST ---------\n";
   for(int i=0; i<4; i++) {
//      cout << "Inserting element "<< i << " at position " << i/2 << endl;
//      intList.insert(i, i/2);
//      cout << intList << endl;
      intList.insert(100, 1);
      intList.insert(200, 2);
      intList.insert(300, 0);
      intList.insert(400, 1);
      cout << "\n\nintList is: " << intList;
   }
   // Test erase() function
   int index;
   while(!intList.empty()) { // While the list is not empty
      cout << " \n\nType the index of the element you would like to remove.";
      cin >> index;
      intList.erase(index); // Erase the element at the specified position
   }
   cout << "Now let's insert.";
   for(int i=0; i<CAPACITY; i++) {
      intList.insert(i,i);
   }
}