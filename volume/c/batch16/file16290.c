// fichero 16290 -- macros y constantes
#define LIMITE_16290 16390
#define FACTOR_16290 1

int aplicar_limite16290(int valor) {
    if (valor > LIMITE_16290) return LIMITE_16290;
    return valor * FACTOR_16290;
}
