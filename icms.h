#ifndef ICMS_H
#define ICMS_H
#include "iimposto.h"

class ICMS : public IImposto
{
public:
    ICMS() = default;
    virtual ~ICMS() = default;

    double calcular() override;

};

#endif // ICMS_H
