#ifndef _NAVIRE_H
#define _NAVIRE_H

class Navire {

  int m_nbcases;
  int** m_T; // correspond au tableau bidimensionnel des coordonnées x,y de chaque case du tableau
  bool m_coule;
  bool m_vertical;

  //Constructeurs
  Navire();
  Navire(int nbcases, bool vertical, bool coule);
  bool isCoule()const; //vérifie si un bateau est coulé
  void rotation (); // pivote le bateau

  //Accesseurs en lecture
  bool getOrientation()const;
  bool getEtat()const;
  int getTaille()const;

  //Accesseurs en ecriture
  void setOrientation(bool orientation);
  void setEtat(bool etat); //paramètres constants?

  
}

#endif
