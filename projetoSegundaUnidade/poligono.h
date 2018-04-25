#include "ponto.h"
#ifndef POLIGONO_H
#define POLIGONO_H
#define MAX_TAM 100

/**
 * @brief A classe de poligono serve para
 * armazenar poligonos e realizar operações
 * com eles.
 */

class poligono
{
    protected:
        ponto* vertices;
        int QtdeVertices;
    public:
        /**
          * @brief Poligono é o construtor da classe.
          * @details Ele
          * inicia o nº de vertices igual a zero e aloca um
          */
        poligono();
        /**
          * @brief ~poligono é o destrutor da classe.
          * @details Ele libera a memoria alocada
          */
        ~poligono();
        /**
          * @brief O  método setVer adiciona um vértice ao poligono
          * @details O método realoca o tamanho do ponteiro, incrementa a variavel
          * QtdeVertices e adiciona o ponto a ao array de vertices
          * @param a é o ponto a ser adicionado
          */
        void setVer(ponto a);
        /**
          * @brief O método setVer adiciona um vértice ao poligono
          * @details O método realoca o tamanho do ponteiro, incrementa a variavel
          * QtdeVertices e adiciona o ponto a ao array de vertices
          * @param _x é a cordenada x do ponto a ser adicionado
          * @param _y é a cordenada y do ponto a ser adicionado
        */
        void setVer(float _x,float _y);
        /**
          * @brief O método getQtdVer retorna a quantidade de vértices do poligono
          * @details O método retorna a variável QtdeVertices , que é a quantidade de vertices do poligono
        */
        int getQtdVer();
        /**
          * @brief O método area retorna a área do polígono.
          * @details O método calcula e retorna a área do polígono armazenado. Escrevendo os vértices do polígono como um determinante, repetindo o primeiro ponto no fim,a área é dada pela soma das diagonais principais subtraida da soma das diagonais secundárias; dividido por 2.
        */
        float area();
        /**
          * @brief O método translada desloca o polígono
          * @details O método desloca o polígono do seu ponto de origem
          * @param a é o quanto o polígnno é transladado em relaçãoao eixo y
          * @param b é o quanto o polígnno é transladado em relaçãoao eixo x
        */
        void translada(float a, float b);
        /**
          * @brief O método imprimir imprime os pontos do poligono
          * @details O método imprime os pontos na ordem em que eles foram inseridos
        */
        void imprimir();
        /**
          * @brief O método rotacionar rotaciona o polígono em relação a um ponto, no sentido anti-horário
          * @details O método desloca o ponto de referência até a origem e então realiza a rotação do poligono no sentido anti horário
          * @param theta é o ângulo que o polígonno deve ser rotacionado,em sentido anti-horario
          * @param p é o ponto de referência ao redor do qual o polígono deve ser rotacionado.
        */
        void rotacionar(float theta,ponto p);

};

#endif // POLIGONO_H
