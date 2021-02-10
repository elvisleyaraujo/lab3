#ifndef IPI_H
#define IPI_H
#include "iimposto.h"
#include <iostream>

class IPI : public IImposto
{
public:
    IPI() = default;
    virtual ~IPI() = default;

    double calcular() override;
};

#endif // IPI_H
