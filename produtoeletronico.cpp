#include "produtoeletronico.h"
#include <iostream>
#include "iimposto.h"

void ProdutoEletronico::devolver()
{
    _imp->calcular();
    std::cout << "Devolvendo produto eletrônico " << std::endl;
}
