// fichero 41262 -- macros y constantes
#define LIMITE_41262 41362
#define FACTOR_41262 3

int aplicar_limite41262(int valor) {
    if (valor > LIMITE_41262) return LIMITE_41262;
    return valor * FACTOR_41262;
}
