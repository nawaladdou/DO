// mat.cpp : définit le point d'entrée pour l'application console.
//

#include "stdafx.h"
#include <iostream>

using namespace std ;

int main()
{ 
	int n ;
	do
      { 
		  cout << "donnez un nombre entier : " ;
		  cin >> n ;
		  cout << "voici son carre : " << n*n << "\n" ;
	  }
    while (n) ;
}


