#ifndef ALVEOLESLIBRES_H
#define ALVEOLESLIBRES_H

#include <vector>

using namespace std;

typedef vector<int> PileEntier;


class AlveolesLibres : public PileEntier
{
public:
    AlveolesLibres(const short _nbrangee=10, const short _nbcolonne=20);
    void Liberer(const short _rangee, const short _colonne);
    bool Reserver(short &_rangee, short &_colonne);

private:
    int nbrangee;
    int nbcolonne;
};

#endif // ALVEOLESLIBRES_H
