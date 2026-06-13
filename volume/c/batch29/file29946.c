// fichero 29946 -- macros y constantes
#define LIMITE_29946 30046
#define FACTOR_29946 2

int aplicar_limite29946(int valor) {
    if (valor > LIMITE_29946) return LIMITE_29946;
    return valor * FACTOR_29946;
}
