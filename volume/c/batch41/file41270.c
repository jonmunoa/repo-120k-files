// fichero 41270 -- macros y constantes
#define LIMITE_41270 41370
#define FACTOR_41270 1

int aplicar_limite41270(int valor) {
    if (valor > LIMITE_41270) return LIMITE_41270;
    return valor * FACTOR_41270;
}
