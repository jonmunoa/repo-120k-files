// fichero 14262 -- macros y constantes
#define LIMITE_14262 14362
#define FACTOR_14262 3

int aplicar_limite14262(int valor) {
    if (valor > LIMITE_14262) return LIMITE_14262;
    return valor * FACTOR_14262;
}
