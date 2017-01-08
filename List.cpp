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