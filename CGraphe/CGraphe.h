#ifndef C_GRAPHE_H
#define C_GRAPHE_H

#include "CSommet.h"

class CGraphe
{
private:
	// Attributs
	CSommet ** ppqGRASommets;
	unsigned int uiGRANbSommets;
	unsigned int uiGRANbArcs;

public:
	// Constructeurs / Destructeurs

	/*****************************
	Constructeur par d�faut
	******************************
	Entr�e : n�ant
	Necessit� : n�ant
	Sortie : n�ant
	Entraine : l'objet en cours est initialis�
	*****************************/
	explicit CGraphe();

	/*****************************
	Constructeur de recopie
	******************************
	Entr�e : CSommet & sommet);
	Necessit� : n�ant
	Sortie : n�ant
	Entraine : l'objet en param�tre est recopi� et initialis� dans un nouvel objet
	*****************************/
	explicit CGraphe(CGraphe & graphe);

	/*****************************
	Constructeur de confort
	******************************
	Entr�e : unsigned int uiNbSommets, unsigned int uiNbArcs
	Necessit� : n�ant
	Sortie : n�ant
	Entraine : l'objet en cours est initialis�
	*****************************/
	explicit CGraphe(unsigned int uiNbSommets, unsigned int uiNbArcs);

	/*****************************
	Surcharge de l'operateur =
	******************************
	Entr�e : CGraphe & GRAGraphe
	Necessit� : n�ant
	Sortie : CGraphe &
	Entraine : modification de l'objet a gauche du signe
	*****************************/
	CGraphe & operator=(CGraphe & GRAGraphe);

	/*****************************
	Destructeur par d�faut
	******************************
	Entr�e : n�ant
	Necessit� : n�ant
	Sortie : n�ant
	Entraine : l'objet est d�truit
	*****************************/
	~CGraphe();

	// Accesseurs

	/*****************************
	Methode : Lire Sommets
	******************************
	Entr�e : n�ant
	Necessit� : n�ant
	Sortie : unsigned int uiGRANbSommets
	Entraine : retourne l'attribut
	*****************************/
	CSommet ** CGraphe::GRAGetSommets();

	/*****************************
	Methode : Lire Nombre Sommets
	******************************
	Entr�e : n�ant
	Necessit� : n�ant
	Sortie : unsigned int uiGRANbSommets
	Entraine : retourne l'attribut
	*****************************/
	unsigned int GRAGetNbSommets();

	/*****************************
	Methode : Modifier Nombre Sommets
	******************************
	Entr�e : unsigned int uiNbSommets
	Necessit� : n�ant
	Sortie : n�ant
	Entraine : affecte le param�tre � l'attribut
	*****************************/
	void GRASetNbSommets(unsigned int uiNbSommets);

	/*****************************
	Methode : Lire Nombre Arcs
	******************************
	Entr�e : n�ant
	Necessit� : n�ant
	Sortie : unsigned int uiGRANbArcs
	Entraine : retourne l'attribut
	*****************************/
	unsigned int GRAGetNbArcs();

	/*****************************
	Methode : Modifier Nombre Arcs
	******************************
	Entr�e : unsigned int uiNbArcs
	Necessit� : n�ant
	Sortie : n�ant
	Entraine : affecte le param�tre � l'attribut
	*****************************/
	void GRASetNbArcs(unsigned int uiNbArcs);

	/*****************************
	Methode : Ajouter Sommet
	******************************
	Entr�e : unsigned int uiSommet, CArc * ppqArrivant, CArc * ppqPartant
	Necessit� : n�ant
	Sortie : n�ant
	Entraine : ajoute un nouveau sommet au graphe
	*****************************/
	void GRAAjoutSommet(unsigned int uiSommet, CArc * ppqArrivant, CArc * ppqPartant);

	/*****************************
	Methode : Supprimer Sommet
	******************************
	Entr�e : CSommet * sommet
	Necessit� : n�ant
	Sortie : n�ant
	Entraine : supprime un sommet au graphe
	*****************************/
	void GRASupprimerSommet(CSommet * sommet);

	/*****************************
	Methode : Modifier Sommet
	******************************
	Entr�e : unsigned int uiNum, CSommet * SOMSommet
	Necessit� : n�ant
	Sortie : n�ant
	Entraine : modifie un sommet au graphe
	*****************************/
	void GRAModifierSommet(unsigned int uiNum, CSommet * SOMSommet);

	/*****************************
	Methode : Ajouter Arc
	******************************
	Entr�e : unsigned int uiDestination, CSommet * sommet
	Necessit� : n�ant
	Sortie : n�ant
	Entraine : ajoute un nouvel arc au graphe
	*****************************/
	void GRAAjoutArc(unsigned int uiDestination, CSommet * SOMSommet);

	/*****************************
	Methode : Supprimer Arc
	******************************
	Entr�e : CArc * ARCArc, CSommet * SOMSommet
	Necessit� : n�ant
	Sortie : n�ant
	Entraine : supprime un arc au graphe
	*****************************/
	void GRASupprimerArc(CArc * ARCarc, CSommet * SOMSommet);

	/*****************************
	Methode : Afficher Arc
	******************************
	Entr�e : n�ant
	Necessit� : n�ant
	Sortie : affichage du graphe
	Entraine : affichage du graphe dans la console
	*****************************/
	void GRAAfficherGraphe();

	/*****************************
	Methode : Trouver Sommet
	******************************
	Entr�e : unsigned int uiSommet
	Necessit� : n�ant
	Sortie : CSommet * 
	Entraine : cherche et renvoi le sommet
	*****************************/
	CSommet * GRATrouverSommet(unsigned int uiSommet);

	/*****************************
	Methode : Trouver Arc
	******************************
	Entr�e : CSommet * SOMSommetSource, unsigned int uiDestination
	Necessit� : n�ant
	Sortie : CArc *
	Entraine : cherche et renvoi l'arc
	*****************************/
	CArc * GRATrouverArcPartant(CSommet * SOMSommetSource, unsigned int uiDestination);


	/*****************************
	Methode : Trouver Arc Arrivant
	******************************
	Entr�e : CSommet * SOMSommetSource, unsigned int uiDestination
	Necessit� : n�ant
	Sortie : CArc *
	Entraine : cherche et renvoi l'arc
	*****************************/
	CArc * GRATrouverArcArrivant(CSommet * SOMSommetSource, unsigned int uiDestination);
};
#endif