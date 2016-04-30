#include "Linked_list.hpp"
#include <sstream>

using std::cout;
using std::cerr;
using std::endl;




//Linked_list::
Linked_list::Linked_list(string name) :
		_name(name), _next(NULL) {
	/*
	 * parametrisierter Konstruktor
	 * params:
	 * name : string
	 * _next wird auf NULL gesetzt
	 */

}
void Linked_list::set(string name) {
	/*
	 * setzt name Attribute dieser Linked_list Instanz
	 * params :
	 * name: string
	 * return:
	 * void
	 */
	this->_name = name;
}
string Linked_list::get() {
	/*
	 * gibt name Attribute dieser Linked_list Instanz zurück
	 * params:
	 * void
	 * return :
	 * string
	 */
	return this->_name;
}
Linked_list* Linked_list::next() {
	/*
	 * gibt die nächste Linked_list dieser Linked_list Instanz zurück
	 * params:
	 * void
	 * return:
	 * Linked_list* pointer
	 */
	return this->_next;
}


Linked_list* Linked_list::insert_at_index(unsigned int index,
	Linked_list* node) {
	/*
	 * fügt node in der index-te Stelle zu dieser Instanz hinzu
	 * params :
	 * index : unsigned int
	 * node : Linked_list*
	 * returns
	 * Linked_list*
	 */

	/*
	 * wenn index größer-gleich als die Anzahl der Elemente in Linked_list ist , wir geben error in cerr aus
	 * "Einfügen hinter das Ende der Liste"
	 */
unsigned int _size = size();
if (index >= _size) {
	cerr << "Einfügen hinter das Ende der Liste" << endl;
	return NULL;
}
/*
 * wenn hinzufügendes Element selbst next() Element hat , wir geben error in cerr aus :
 * "Der einzufügende Knoten ist kein einzelner Knoten, sondern selbst eine Liste mit mehreren Elementen"
 */
if (node->next() != NULL) {
	cerr
			<< "Der einzufügende Knoten ist kein einzelner Knoten, sondern selbst eine Liste mit mehreren Elementen"
			<< endl;
	return NULL;
}

/*
 * hier  definieren wir 3 Variablen:
 * *head -> Dieses Element ist das erste in diesem Linked_list
 * *temp -> Diese Element ist das Element an der Stelle index
 * *temp2 -> Dieses Element ist kommt bevor das Element: *temp
 * wir können zwei Fälle haben :
 * 1) index = 0 , wir müssen das Element: *node als das erste element einfügen
 * 2) index > 0 , wir müssen das Element: *node zwischen *temp2 und *temp einfügen
 */
Linked_list* head = this;
Linked_list* temp = this, *temp2;
unsigned int counter = 0;
while (counter < index) {
	temp2 = temp;
	temp = temp->next();
	counter++;
}

/*
 * Der erste Fall in dem , index == 0 , wir müssen node , als das erste Element hinzufügen , und *node
 * zurückgeben
 */
if (temp == head) {
	node->_next = head;
	return node;
}
/*
 * Der zweite Fall in dem , index > 0 , wir müssen *node zwischen *temp2 und *temp hinzufügen , und
 * head zurückgeben
 */
else {
	temp2->_next = node;
	node->_next = temp;
	return head;
}
return NULL;
}

unsigned int Linked_list::size() {
	/*
	 * gibt die anzahl der Elemente in Linked_list zurück
	 * params :
	 * void
	 * return :
	 * unsigned int
	 */
unsigned int counter = 0;
for (Linked_list* temp = this; temp != NULL; temp = temp->next()) {
	counter++;
}
return counter;

}



Linked_list* Linked_list::remove_at_index(unsigned int index) {
	/*
	 * löscht das Element an der Stelle index
	 * params:
	 * index: unsigned int
	 * return:
	 * Linked_list* -> das erste Element in Linked_list
	 */


	/*
	 * wenn index > Anzahl der Elemente in Linked_list , wir geben error aus in cerr :
	 * "Es existiert kein Index -ter Knoten"
	 * und geben NULL zurück
	 */
unsigned int _size = size();
if (index >= _size) {
	cerr << "Es existiert kein " << index << "-ter Knoten" << endl;
	return NULL;
}


/*
 * wenn index == 0 , dann löschen wir das erste Element , und geben es zurück
 */
Linked_list* head = this;
if (index == 0) {
	Linked_list* temp = head;
	head = head->_next;
	// this =  head ;
	return temp;
}
/*
 * wir definieren drei Variablen hier :
 * 1) counter -> die wird benutzt um Position der temp und temp2 zu bestimmen
 * 2) *temp ->  ist das Element an der Stelle index
 * 3) *temp2 -> ist das Element bevor *temp
 * wir löschen *temp und geben *head -> das erste Element in Linked_list zurück
 */
else {
	unsigned int counter = 0;
	Linked_list*temp = this, *temp2;
	while (counter < index) {
		temp2 = temp;
		temp = temp->_next;
		counter++;
	}
	temp2->_next = temp->_next;
	temp = NULL;
	return head;
}
}
 //-> Linked_list
