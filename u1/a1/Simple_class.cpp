#include "Simple_class.hpp"
#include <iostream>
using  std::cout ; 
using std::endl ; 
//Simple_class::

Simple_class::Simple_class(): num(0) {
  /*
   * das ist default Konstruktor
   */
}

Simple_class::Simple_class(int _num): 
 num(_num) {
/*
 * das ist parametrisierter Konstruktor
 * params :
 * _num: int
 */
}


void Simple_class::set(int num) {
	/*
	 * set Methode weist num  zu this->num zu
	 * params :
	 * num: int
	 */
    this-> num = num ; 
}

int Simple_class::get() {
	/*
	 * get Methode gibt this->num zur�ck
	 */
    return num ; 
}

//-> Simple_class 
