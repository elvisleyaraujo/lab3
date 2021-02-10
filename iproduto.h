#ifndef IPRODUTO_H
#define IPRODUTO_H
#include <memory>

class IImposto;

class IProduto
{
public:
    virtual void devolver() = 0;
    void setImposto(const std::shared_ptr<IImposto> &imp) {
        _imp = imp;
    }

protected:
    std::shared_ptr<IImposto> _imp;
};

#endif // IPRODUTO_H
