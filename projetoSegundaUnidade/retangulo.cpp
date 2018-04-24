#include "retangulo.h"

retangulo::retangulo()
{
    QtdeVertices=4;
    vertices= new float[QtdeVertices];
    for(int i=0;i<4;i++){
        vertices[i].x=0;
        vertices[i].y=0;
    }
}

retangulo::retangulo(ponto a, float altura, float largura)
{

    QtdeVertices=4;
    vertices= new float[QtdeVertices];

    vertices[0].x=a.getX();
    vertices[0].y=a.getY();

    vertices[1].x=a.getX()+largura;
    vertices[1].y=a.getY();

    vertices[2].x=a.getX()+largura;
    vertices[2].y=a.getY()+altura;

    vertices[3].x=a.getX();
    vertices[3].y=a.getY()+altura;

}

retangulo::~retangulo()
{
    delete vertices;
}
