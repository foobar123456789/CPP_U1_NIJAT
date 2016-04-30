#ifndef QUEUE_HPP
#define QUEUE_HPP
#include "../a2/Linked_list.hpp"
#include <iostream>
#include <string>

using std::cout ;
using std::endl;
using std::cerr ;
using std::string;

class Queue {
private:
 Linked_list* node ;
 string get_name(Linked_list* node);
public:
 Queue();
 void push(string _name);
 string pop();
 bool has_next();

};
#endif
