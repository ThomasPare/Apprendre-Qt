/**
   @file alveolesLibres.cpp
   @brief Implémentation de la classe alveolesLibres
   @version 1.0
   @author Thomas PARE
   @date 16/10/2018
  */

#include "alveoleslibres.h"


/**
 * @brief AlveolesLibres::AlveolesLibres
 * @param _nbrangee
 * @param _nbcolonne
 */
AlveolesLibres::AlveolesLibres(const short _nbrangee, const short _nbcolonne)
{    
    for(int i=1; i <= _nbrangee * _nbcolonne; i++)
    {
        push_back(i);
    }
    nbrangee = _nbrangee;
    nbcolonne = _nbcolonne;
}

/**
 * @brief AlveolesLibres::Liberer
 * @param _rangee   n° de la rangé où se trouvait le rouleau
 * @param _colonne  n° de la colonne où se trouvait le rouleau
 * @details Ajoute l'alvéole dont les coordonnées sont passées
 *          en paramètre à l'ensemble des alvéoles libres
 */
void AlveolesLibres::Liberer(const short _rangee, const short _colonne)
{

}

/**
 * @brief AlveolesLibres::Reserver
 * @param _rangee
 * @param _colonne
 * @return Boolean: vrai si alvéole libre, faux si aucune alvéole libre
 */
bool AlveolesLibres::Reserver(short &_rangee, short &_colonne)
{
    bool alveole;
    back();
    pop_back();
    return alveole;
}
