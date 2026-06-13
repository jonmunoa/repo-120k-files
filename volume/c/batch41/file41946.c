// fichero 41946 -- macros y constantes
#define LIMITE_41946 42046
#define FACTOR_41946 2

int aplicar_limite41946(int valor) {
    if (valor > LIMITE_41946) return LIMITE_41946;
    return valor * FACTOR_41946;
}
