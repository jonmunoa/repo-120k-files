// fichero 29946 -- macros y constantes -- MODIFICADO
#define LIMITE_29946 30146
#define FACTOR_29946 3

int aplicar_limite29946(int valor) {
    if (valor > LIMITE_29946) return LIMITE_29946;
    return valor * FACTOR_29946;
}
