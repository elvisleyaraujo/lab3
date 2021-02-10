#include <iostream>
#include "icms.h"
#include "ipi.h"
#include "produtoalimenticio.h"
#include "produtoeletronico.h"
#include <memory>

auto main() -> int
{
   std::unique_ptr<IProduto> pro1 { std::make_unique<ProdutoEletronico>() };
   std::shared_ptr<IImposto> imp1 { std::make_shared<IPI>() };
   pro1->setImposto(imp1);
   pro1->devolver();

   return 0;
}
