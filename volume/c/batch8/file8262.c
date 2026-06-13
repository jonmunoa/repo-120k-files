// fichero 8262 -- macros y constantes
#define LIMITE_8262 8362
#define FACTOR_8262 3

int aplicar_limite8262(int valor) {
    if (valor > LIMITE_8262) return LIMITE_8262;
    return valor * FACTOR_8262;
}
