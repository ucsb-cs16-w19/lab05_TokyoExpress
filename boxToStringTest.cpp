// Author: Samuel Guo for UCSB CS16
// Sources cited: Lab05, pointToStringTest

#include "shapes.h"
#include "shapeFuncs.h"
#include "tddFuncs.h"




int main(){

  struct Box p1,p2;

  initBox(&p1,3.0,4.0,6.0,7.0);  
  assertEquals("ul=(3,4),w=6,h=7", boxToString(p1), "pointToString(p1)");

  initBox(&p2,3.14159,6.2831853071, 4.5454545, 2.32323232);
  assertEquals("ul=(3.14,6.28),w=4.55,h=2.32", boxToString(p2), "pointToString(p2)");
  assertEquals("ul=(3,6),w=5,h=2", boxToString(p2,1), "pointToString(p2,1)");
  assertEquals("ul=(3.142,6.283),w=4.545,h=2.323", boxToString(p2,4), "pointToString(p2,4)");
  assertEquals("ul=(3.1416,6.2832),w=4.5455,h=2.3232", boxToString(p2,5), "pointToString(p2,5)");

		   
  return 0;
}
