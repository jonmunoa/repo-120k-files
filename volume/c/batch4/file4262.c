// fichero 4262 -- macros y constantes
#define LIMITE_4262 4362
#define FACTOR_4262 3

int aplicar_limite4262(int valor) {
    if (valor > LIMITE_4262) return LIMITE_4262;
    return valor * FACTOR_4262;
}
