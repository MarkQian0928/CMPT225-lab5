#include "Seq.h"
#include <iostream>
using namespace std;

//int
/*int main() {
   cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
   Seq<int> s;      
   s.add(5);
   s.add(6);
   s.add(7);
   s.add(8);
   s.add(9);
   s.display();
   cout << endl;
   s.insertAt(5,2);
   s.display();
   cout <<endl;
   s.remove(6);
   s.display();
   return 0;
}*/

//string
/*int main() {
   cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
   Seq<string> s;      
   s.add("N");
   s.add("E");
   s.add("L");
   s.add("L");
   s.add("E");
   s.add("H");
   s.display();
   cout << endl;
   s.insertAt("O",4);
   s.display();
   cout <<endl;
   s.remove("N");
   s.display();
   return 0;
}*/

//float
   int main() {
   cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
   Seq<float> s;      
   s.add(1.2);
   s.add(2.3);
   s.add(3.4);
   s.add(4.5);
   s.add(5.6);
   s.display();
   cout << endl;
   s.insertAt(6.7,0);
   s.insertAt(7.8,0);
   s.display();
   cout <<endl;
   s.remove(6.7);
   s.display();
   return 0;
}

