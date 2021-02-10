#ifndef PRODUTOELETRONICO_H
#define PRODUTOELETRONICO_H
#include "iproduto.h"

class ProdutoEletronico :  public IProduto
{
public:
    ProdutoEletronico() = default;
    virtual ~ProdutoEletronico() = default;

    virtual void devolver() override;
};

#endif // PRODUTOELETRONICO_H
