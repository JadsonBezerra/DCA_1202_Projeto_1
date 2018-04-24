#include <iostream>
#include "ponto.h"
#include "poligono.h"

using namespace std;

/*namespace seila {
    void imprime(){
        std::cout<<endl<<"OI MUNDO";
    }
    namespace batata {
        void imprime(){
            std::cout<<endl<<"Que loco"<<endl;
        }
    }
}
*/

int main()
{

    ponto v1(1,1),v2,v3,v4;

    v2.setX(-1);
    v2.setY(1);


    v3.setX(-1);
    v3.setY(-1);

    v4.setX(1);
    v4.setY(-1);
//    v1.imprime();

    poligono  quadrado;

    quadrado.setV(v1);
    quadrado.setV(v2);
    quadrado.setV(v3);
    quadrado.setV(v4);

    quadrado.imprimir();
    std::cout<<endl;
    std::cout<<quadrado.area();

//    seila::batata::imprime();

    return 0;
}
