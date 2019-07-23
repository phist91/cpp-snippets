#include "ActionDVD.h"
#include <iostream>

ActionDVD::ActionDVD(std::string pTitel, int pLaufzeit, bool pIndex) : DVD{pTitel, pLaufzeit, 18}, indiziert(pIndex) {
};

std::string ActionDVD::getTitel() const{
    if (indiziert)
        return (titel + " (als jugendgefaehrdend eingestuft)");
    else
        return (titel + " (Keine Jugendfreigabe)");
}
