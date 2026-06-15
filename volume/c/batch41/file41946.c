// fichero 41946 -- macros y constantes -- MODIFICADO
#define LIMITE_41946 42146
#define FACTOR_41946 3

int aplicar_limite41946(int valor) {
    if (valor > LIMITE_41946) return LIMITE_41946;
    return valor * FACTOR_41946;
}
