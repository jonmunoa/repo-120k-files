// fichero 45262 -- macros y constantes
#define LIMITE_45262 45362
#define FACTOR_45262 3

int aplicar_limite45262(int valor) {
    if (valor > LIMITE_45262) return LIMITE_45262;
    return valor * FACTOR_45262;
}
