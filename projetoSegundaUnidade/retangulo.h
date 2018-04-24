#ifndef RETANGULO_H
#define RETANGULO_H

#include "poligono.h"

class retangulo : public poligono{
protected:
public:
    /**
      * @brief Retângulo é o construtor padrão da classe.
      * @details Ele inicia o nº de vertices igual a quatro alocaum ponteiro de 4 espaços e inicia todas as coordenadas dos pontos como (0,0)
      */

    retangulo();

    /**
      * @brief Esse metodo é o construtor de classe.
      * @details Ele  define o retangulo com vertice inicial no ponto a, com altura igual ao parametro altura e largura igual ao parametro largura.
      * @param a é o ponto inicial do retangulo
      * @param altura é o valor da altura do retangulo
      * @param larguta é o valor da largura do retangulo.
      */
    retangulo(ponto a,float altura,float largura);

    /**
      * @brief ~Retângulo é o destrutor da classe.
      * @details Ele libera a memoria
      */
    ~retangulo();
};

#endif // RETANGULO_H
