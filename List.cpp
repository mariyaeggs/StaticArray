#include <cassert>
#include "List.h"
using namespace std;
/**
 * Inserting A Node At An Index in a Linked List
 * Course: CST 370 Design & Analysis of Algorithms
 * School: CSU, Monterey Bay
 * Professor: Dr. Feiling Jia
 * Source: CLion 2016.3.2 on 1/8/2017
 *
 * Implementation file for List class member functions
 *
 * @author Mariya Eggensperger
*/
// Class constructor definitions
List::List() : mySize(0) // Assume mySize is initally 0
{}
/**
 * Check if a list is empty.
 *
 * @param args true if the list is empty, false if not
 * @return boolean value
*/
bool List::empty() const {
   return mySize==0;
}
/**
 * Display a printed version of the list to console
 *
 * @param args List object is inserted into out, the ostream should be open
 * @return A display of the list to out
*/
void List::display(ostream &out) const {
   for(int i=0; i<mySize; i++) {
      out << myArray[i] << " ";
   }
}
/**
 * Defines output operator
 *
 * @param args ostream & out, const List & aList
 * @return out
*/
ostream & operator << (ostream & out, const List & aList) {
   aList.display(out);
   return out;
}
/**
 * Function defines insertion methods for List class
 *
 * @param args If insert does not surpass CAPACITY or is illegally inserted, allow insertion
 * @return Return if insertion surpasses CAPACITY or is illegal, maximum array index surpassed
*/
void List::insert(ElementType item, int position) {
   if (mySize == CAPACITY) {
      cerr << "No space available";
      exit(1); // Terminate program
   }
   if (position<0 || position>mySize) {
      cerr << "Illegal insertion at" << position;
      return; // Return function
   }
   // Else if all parameters are approved. Decrement over data elements
   // Shift elements to the right for memory allocation/space
   for(int i=mySize; i>position; i--) {
      myArray[i]= myArray[i-1];
   }
   // Add item at position and increment size of list.
   myArray[position]= item;
   mySize++;
}