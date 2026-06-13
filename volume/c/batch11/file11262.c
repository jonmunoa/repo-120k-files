// fichero 11262 -- macros y constantes
#define LIMITE_11262 11362
#define FACTOR_11262 3

int aplicar_limite11262(int valor) {
    if (valor > LIMITE_11262) return LIMITE_11262;
    return valor * FACTOR_11262;
}
