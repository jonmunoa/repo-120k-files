// fichero 46262 -- macros y constantes
#define LIMITE_46262 46362
#define FACTOR_46262 3

int aplicar_limite46262(int valor) {
    if (valor > LIMITE_46262) return LIMITE_46262;
    return valor * FACTOR_46262;
}
