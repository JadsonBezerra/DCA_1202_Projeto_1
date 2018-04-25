#include <iostream>
#include "ponto.h"
#include "poligono.h"
#include"retangulo.h"

using namespace std;

int main()
{

    retangulo ret1(0,0,3,4);

    ret1.imprimir();

    cout<<endl<<ret1.area();

    ret1.translada(-3,4);

    cout<<endl<<ret1.area();

    ponto CM(-1,5.5);

    ret1.rotacionar(30,CM);

    cout<<endl<<ret1.area();

    return 0;
}
