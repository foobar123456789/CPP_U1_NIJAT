#include "Queue.hpp"


//Queue::
Queue::Queue() : node(NULL) {
/*
 * default Konstruktor
 * node (Linked_list*) wird auf NULL gesetzt .
 */
}
 void Queue::push(string _name) {
	 /*
	  * erzeugt das neue Linked_list mit dem name = _name , und fügt das  an das Ende der Queue hinzu.
	  *  params:
	  *  _name: string
	  *  return:
	  *  void
	  *
	  * wir haben zwei Fälle
	  * 1) Queue ist leer , dann das hinzufügende Element muss das erste Element sein
	  * 2) Queue ist nicht leer , dann das Element muss an der Stelle {size der Queue} - 1 hinzugefügt werden.
	  *
	  */
   unsigned int _size = node-> size();
   /*
    * der erste Fall
    */
   if(_size==0) {
	   node-> insert_at_index(0, new Linked_list(_name));
   }
   /*
    * der zweite Fall
    */
   else {
	   node-> insert_at_index(_size-1 , new Linked_list(_name));
   }
 }

 string Queue::get_name(Linked_list* node) {
	 /*
	  * gibt den Name des letzten Elements in Queue aus
	  * params:
	  * node -> Linked_list*
	  * return:
	  * string
	  */
	 string name("");
	 Linked_list*temp = node;
	 for( ; temp->next()!= NULL ; temp = temp->next()) ;
	 return temp->get();
 }


 string Queue::pop() {
	 /*
	  * löscht das letzte Element , und gibt seinen Namen zurück
	  * params:
	  * void
	  * return :
	  * string
	  *
	  * wir können zwei Fälle haben:
	  * 1) Queue ist leer -> dann geben wir error in cerr aus :
	  * "Warteschlange ist leer!"
	  * 2) Queue ist nicht leer , dann entfernen wir das letzte Element und geben seinen Namen zurück .
	  */
  unsigned int _size = node->size();
  if(_size==0) {
	  cerr << "Warteschlange ist leer!" << endl ;
	  return "" ;
  } else {
     string name = get_name(node);
     node->remove_at_index(_size-1);
     return name;
  }
 }
 bool Queue::has_next() {
	 /*
	  * gibt true zurück , wenn Queue nicht leer ist , sonst gibt false zurück .
	  * params:
	  * void
	  * return
	  * unsigned int
	  */
 unsigned int counter = 0;
 for (Linked_list* temp = node ; temp != NULL; temp = temp->next()) {
 	counter++;
 }
   return counter > 0 ;
 }

 //-> Queue
