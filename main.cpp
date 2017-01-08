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
   for(int i=0; i<10; i++) {
      cout << "Inserting element "<< i << "at position " << i/2 << endl;
      intList.insert(i, i/2);
      cout << intList << endl;
   }
   // Test erase() function
   int index;
   while(!intList.empty()) { // While the list is not empty
      cout << "Type the index of the element you would like to remove.";
           cin >> index;
      intList.erase(index); // Erase the element at the specified position
   }
   cout << "Now let's insert.";
   for(int i=0; i<CAPACITY; i++) {
      intList.insert(i,i);
   }
}