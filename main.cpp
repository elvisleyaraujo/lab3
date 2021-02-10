#include <iostream>
#include "icms.h"
#include "ipi.h"
#include "produtoalimenticio.h"
#include "produtoeletronico.h"

auto main() -> int
{
   IProduto *pro1 = new ProdutoEletronico();
   IImposto *imp1 = new IPI();
   pro1->setImposto(imp1);
   pro1->devolver();

   IProduto *pro2 = new ProdutoAlimenticio();
   IImposto *imp2 = new ICMS();
   pro2->setImposto(imp2);
   pro2->devolver();

   delete pro1;
   delete pro2;
   delete imp1;
   delete imp2;

   return 0;
}
