// fichero 16390 -- macros y constantes -- MODIFICADO
#define LIMITE_16390 16590
#define FACTOR_16390 2

int aplicar_limite16390(int valor) {
    if (valor > LIMITE_16390) return LIMITE_16390;
    return valor * FACTOR_16390;
}
