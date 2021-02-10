#ifndef IPRODUTO_H
#define IPRODUTO_H

class IImposto;

class IProduto
{
public:
    virtual void devolver() = 0;
    void setImposto(IImposto *imp);

protected:
    IImposto *_imp;
};

#endif // IPRODUTO_H
