#ifndef PONTO_H
#define PONTO_H


class ponto{
    protected:
        float x,y;
    public:
        /**
          * @brief ponto é o construtor padrão da classe.
          * @details Ele
          * inicia as cordenadas x e y =0;
          */
        ponto();

        /**
          * @brief ponto é o construtor da classe.
          * @details Ele
          * inicia os valores das coordenadas como os recebidos pelo método
          * @param _x é o valor a ser atribuido a coordenada x do ponto criado
          * @param _y é o valor a ser atribuido a coordenada y do ponto criado
          */
        ponto(float _x, float _y);
        ~ponto();
        /**
          * @brief O método setX atribui um valor a coordenada x
          * @details Esse método recebe um valor e o atribui a coordenada x do ponto.
          * @param _x é o valor a ser atribuido a coordenada x do ponto criado
          */
        void setX(float _x);

        /**
          * @brief O método setY atribui um valor a coordenada y
          * @details Esse método recebe um valor e o atribui a coordenada x do ponto.
          * @param _y é o valor a ser atribuido a coordenada y do ponto criado
          */
        void setY(float _y);

        /**
          * @brief O método setXY atribui valores às coordenada x e y
          * @details Esse método recebe um valor e o atribui a coordenada x do ponto.
          * @param _x é o valor a ser atribuido a coordenada x do ponto criado
          * @param _y é o valor a ser atribuido a coordenada y do ponto criado
          */
        void setXY(float _x,float _y);
        /**
          * @brief O método getX retorna o valor da coordenada x
          * @details Esse método retorna o valor da coordenada x armazenada no ponto.
          */
        float getX(void);

        /**
          * @brief O método getY retorna o valor da coordenada y
          * @details Esse método retorna o valor da coordenada y armazenada no ponto.
          */
        float getY(void);

        /**
          * @brief O método add soma dois pontos.
          * @details Esse método retorna o ponto que equivale a adição das coordenadas do ponto indicado com o parametro p1.
          * @param p1 é o ponto que será adicionado ao ponto criado.
          */
        ponto add(ponto p1);

        /**
          * @brief O método add soma duas coordenadas das coordenadas do ponto.
          * @details Esse método retorna um ponto, que sua coordenada x equivale a soma da coordenada x do ponto indicado com o parametro a e sua coordenada y  equivale a soma da coordenada y do ponto indicado com o parametro b.
          * @param a é o valor que será adicionado a coordenada x do ponto.
          *  @param b é o valor que será adicionado a coordenada y do ponto.
          */
        ponto add(float a, float b);

        /**
          * @brief O método sub subtrai dois pontos.
          * @details Esse método retorna o ponto que equivale a subtração das coordenadas do ponto indicado com o parametro p1.
          * @param p1 é o ponto que será subtraido ao ponto criado.
          */
        ponto sub(ponto p1);

        /**
          * @brief O método sub subtrai duas coordenadas das coordenadas do ponto.
          * @details Esse método retorna um ponto, que sua coordenada x equivale a subtração da coordenada x do ponto indicado com o parametro a e sua coordenada y  equivale a subtração da coordenada y do ponto indicado com o parametro b.
          * @param a é o valor que será subtraida a coordenada x do ponto.
          *  @param b é o valor que será subtraida a coordenada y do ponto.
          */
        ponto sub(float a, float b);
        /**
          * @brief O método calcula a distância do ponto a origem.
          * @details Esse método retorna o valor da distância do ponto a origem.
          */


        float norma();
        /**
          * @brief O método translada desloca o ponto.
          * @details Esse método desloca a coordenada x no valor do parametro a e a coordenada y no valor do parametro b.
          * @param a é o valor que deslocará a coordenada x do ponto.
          *  @param b é o valor que deslocará a coordenada y do ponto.
          */

        void translada(float a,float b);
        /**
          * @brief O método imprimir imprime o ponto
          * @details O método imprime o ponto
        */

        void imprime();
        /**
          * @brief O método operator + é uma sobrecarga de operador que soma dois pontos.
          * @details Esse método retorna o ponto que equivale a adição das coordenadas do ponto indicado com o parametro p1.
          * @param p1 é o ponto que será adicionado ao ponto criado.
          */

        ponto operator + (ponto p1);
        /**
          * @brief O método operator - é uma sobrecarga de operador que subtrai dois pontos.
          * @details Esse método retorna o ponto que equivale a subtração das coordenadas do ponto indicado com o parametro p1.
          * @param p1 é o ponto que será subtraido ao ponto criado.
          */

        ponto operator - (ponto p1);
};


#endif // PONTO_H
