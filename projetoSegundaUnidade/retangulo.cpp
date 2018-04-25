#include "retangulo.h"

retangulo::retangulo()
{
    QtdeVertices=4;
    vertices= new ponto[QtdeVertices];
    for(int i=0;i<4;i++){
        vertices[i].setX(0);
        vertices[i].setY(0);
    }
}

retangulo::retangulo(ponto a, float altura, float largura)
{

    QtdeVertices=4;
    vertices= new ponto[QtdeVertices];

    vertices[0].setX(a.getX());
    vertices[0].setY(a.getY());

    vertices[1].setX(a.getX()+largura);
    vertices[1].setY(a.getY());

    vertices[2].setX(a.getX()+largura);
    vertices[2].setY(a.getY()+altura);

    vertices[3].setX(a.getX());
    vertices[3].setY(a.getY()+altura);

}

retangulo::retangulo(float x, float y, float altura, float largura)
{

    QtdeVertices=4;
    vertices= new ponto[QtdeVertices];

    vertices[0].setX(x);
    vertices[0].setY(y);

    vertices[1].setX(x+largura);
    vertices[1].setY(y);

    vertices[2].setX(x+largura);
    vertices[2].setY(y+altura);

    vertices[3].setX(x);
    vertices[3].setY(y+altura);
}

retangulo::~retangulo()
{
    //delete [] vertices;
}
