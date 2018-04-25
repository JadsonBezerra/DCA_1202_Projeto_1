#include "poligono.h"
#include<iostream>
#include<cmath>
#define MAX_TAM  100

poligono::poligono(){// constrtor default
    QtdeVertices=0;
    vertices=  new ponto;
}

poligono::~poligono()
{

        delete [] vertices;

}

void poligono::setVer(ponto a){
    if(QtdeVertices>=MAX_TAM){
        std::cout<<"O tamanho máximo de vétices de umpóligono é "<<MAX_TAM<<std::endl;
        exit(0);
    }
    QtdeVertices++;
    vertices=(ponto*)realloc(vertices,QtdeVertices);
    vertices[QtdeVertices-1]=a;
}

void poligono::setVer(float _x, float _y)
{
    if(QtdeVertices>=MAX_TAM){
        std::cout<<"O tamanho máximo de vétices de um póligono é "<<MAX_TAM<<std::endl;
        exit(0);
    }
    QtdeVertices++;
    vertices=(ponto*)realloc(vertices,QtdeVertices);
    vertices[QtdeVertices-1].setX(_x);
    vertices[QtdeVertices-1].setY(_y);
}
int poligono::getQtdVer(){
    return QtdeVertices;
}
float poligono::area(){
    float A=0;
    for(int i=0;i<QtdeVertices-1;i++){
        A+=vertices[i].getX()*vertices[i+1].getY();
        A-=vertices[i].getY()*vertices[i+1].getX();
    }
    A+=vertices[QtdeVertices-1].getX()*vertices[0].getY();
    A-=vertices[QtdeVertices-1].getY()*vertices[0].getX();
    if(A<0){
        A*=-1;
    }
    return A/2;
}
void poligono::translada(float a,float b){
    for(int i=0;i<QtdeVertices;i++){
        vertices[i].setX(vertices[i].getX()+a);
        vertices[i].setY(vertices[i].getY()+b);
    }
}

void poligono::imprimir(){
    for(int i=0;i<QtdeVertices;i++){
        std::cout<<"( "<<vertices[i].getX()<<" , "<<vertices[i].getY()<<" )";
        if(i!=QtdeVertices-1){
            std::cout<<"->";
        }
    }
}


void poligono::rotacionar(float theta, float b ,float c)
{
    theta*=(M_PI/180.0);
    for(int j=0; j<QtdeVertices ; j++){
        vertices[j].translada(-b,-c);
    }

    for(int j=0; j<QtdeVertices ; j++){
        vertices[j].setXY(vertices[j].getX()*cos(theta)-vertices[j].getY()*sin(theta),vertices[j].getX()*sin(theta)+vertices[j].getY()*cos(theta));
    }

    for(int j=0; j<QtdeVertices ; j++){
        vertices[j].translada(b,c);
    }
}

void poligono::rotacionar(float theta, ponto p)
{
    theta*=(M_PI/180.0);
    for(int j=0; j<QtdeVertices ; j++){
        vertices[j].translada(-p.getX(),-p.getY());
    }

    for(int j=0; j<QtdeVertices ; j++){
        vertices[j].setXY(vertices[j].getX()*cos(theta)-vertices[j].getY()*sin(theta),vertices[j].getX()*sin(theta)+vertices[j].getY()*cos(theta));
    }

    for(int j=0; j<QtdeVertices ; j++){
        vertices[j].translada(p.getX(),p.getY());
    }
}
