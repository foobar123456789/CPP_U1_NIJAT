#include "get_prize.hpp"
unsigned int get_prize(unsigned int whole , Queue q, string runner)  {
 /*
  * berechnet prize für runner und gibt diesen Preis zurück
  * params:
  * 1) whole : unsigned int -> das ist das volle Preisgeld, speichert als unsigned int
  * 2) q : Queue -> das ist die Ergebnisiste der Teilnehmer
  * 3) runner: string -> Name des Teilnehmers , für den Preisgeld berechnet wird
  * return:
  * unsigned int
  */


	/*
	 * iteriere über aller Teilnehmer in der Ergebnisliste q , und increment counter ,
	 * wenn das Element in der Erbenisliste ist gleich an runner :
	 * 1) weist dieses Element(_name)  dem runner zu
	 * 2) weist counter dem place zu (place == welchen Platz konnte runner belegen)
	 * 3) brich die while-Schleife ab
	 */
  int counter = 0 , place = -1 ;
  while(q.has_next()) {
	  string _name = q.pop();
	  counter++;
	  if(_name == runner) {
		  place = counter ;
		  break;
	  }
  }


  /*
   * switch place ->
   * 1) falls place == 1 -> der runner belegte den ersten Platz -> das gesamte Preisgeld wird gegeben.
   * 2) falls place == 2 -> der runner belegte den zweiten Platz -> die Hälfte des Preisgeldes wird gegeben.
   * 3) falls place == 3 -> der runner belegte den dritten Platz -> ein Viertel des Preisgeldes wird gegeben.
   * sonst: kein Preisgeld
   */
  unsigned int res = 0 ;
   switch(place) {
   case 1: res = whole ;
   break;
   case 2: res = whole/2 ;
   break;
   case 3: res = whole/4 ;
   break;
   default:
	   res = 0 ;
   }

   return res ;
}
