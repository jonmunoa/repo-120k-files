// fichero 39262 -- macros y constantes
#define LIMITE_39262 39362
#define FACTOR_39262 3

int aplicar_limite39262(int valor) {
    if (valor > LIMITE_39262) return LIMITE_39262;
    return valor * FACTOR_39262;
}
