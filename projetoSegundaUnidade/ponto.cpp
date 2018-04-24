#include "ponto.h"
#include <cmath>
#include <iostream>

using namespace std;

//namespace ponto {

    ponto::ponto(){//construtor default
        x=0;
        y=0;
    };
    ponto::ponto(float _x,float _y){//connstrutor com agumentos
        x=_x;
        y=_y;
    };
    ponto::~ponto(){//destrutor
    }

    void ponto::setX(float _x){
        x=_x;
    }
    void ponto::setY(float _y){
        y=_y;
    }
    void ponto::setXY(float _x,float _y){
        x=_x;
        y=_y;
    }
    float ponto::getX(void){
        return x;
    }
    float ponto::getY(void){
        return y;
    }
    ponto ponto::add(ponto p1){
        ponto res;
        res.x=x+p1.x;
        res.y=y+p1.y;
        return res;
    }
    ponto ponto::add(float a, float b){
        ponto res;
        res.x=x+a;
        res.y=y+b;
        return res;
    }
    ponto ponto::sub(ponto p1){
        ponto res;
        res.x=x-p1.x;
        res.y=y-p1.y;
        return res;
    }
    ponto ponto::sub(float a, float b){
        ponto res;
        res.x=x-a;
        res.y=y-b;
        return res;
    }
    float ponto::norma(){
        return  sqrt(x*x+y*y);
    }
    void ponto::translada(float a,float b){
        x+=a;
        y+=b;
    }
    void ponto::imprime(){
        cout<<"( "<<x<<" , "<<y<<" )";
    }

    ponto ponto::operator + (ponto p1){
        ponto res;
        res.x=x+p1.x;
        res.y=y+p1.y;
        return res;
    }
    ponto ponto::operator - (ponto p1){
        ponto res;
        res.x=x-p1.x;
        res.y=y-p1.y;
        return res;
    }
//}

