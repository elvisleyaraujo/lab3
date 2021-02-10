#ifndef PRODUTOALIMENTICIO_H
#define PRODUTOALIMENTICIO_H
#include "iproduto.h"

class ProdutoAlimenticio : public IProduto
{
public:
    ProdutoAlimenticio() = default;
    virtual ~ProdutoAlimenticio() = default;

    virtual void devolver();
};

#endif // PRODUTOALIMENTICIO_H
