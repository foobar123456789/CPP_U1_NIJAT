#ifndef LINKED_LIST_HPP
#define LINKED_LIST_HPP
#include <iostream>
#include <string>
using std::string ;
class Linked_list {
private:
	string _name;
	Linked_list* _next = NULL ;
public:
	Linked_list(string name);
    void set(string name);
    string get();
    Linked_list* next();
    Linked_list* insert_at_index(unsigned int index , Linked_list* node);
    unsigned int size();
    Linked_list* remove_at_index(unsigned int index);

};

#endif
