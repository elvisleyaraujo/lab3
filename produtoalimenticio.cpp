#include "produtoalimenticio.h"
#include <iostream>
#include "iimposto.h"

void ProdutoAlimenticio::devolver()
{
    _imp->calcular();
    std::cout << "Devolvendo produto alimenticio " << std::endl;
}
