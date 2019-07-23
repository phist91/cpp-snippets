#ifndef ACTIONDVD_H
#define ACTIONDVD_H
#include "DVD.h"

class ActionDVD : public DVD{
private:
    bool indiziert;
public:
    ActionDVD(std::string pTitel, int pLaufzeit, bool pIndex);
    std::string getTitel() const;
};
#endif // ACTIONDVD_H
