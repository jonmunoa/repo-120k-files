// fichero 16390 -- macros y constantes
#define LIMITE_16390 16490
#define FACTOR_16390 1

int aplicar_limite16390(int valor) {
    if (valor > LIMITE_16390) return LIMITE_16390;
    return valor * FACTOR_16390;
}
