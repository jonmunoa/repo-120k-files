// fichero 2262 -- macros y constantes
#define LIMITE_2262 2362
#define FACTOR_2262 3

int aplicar_limite2262(int valor) {
    if (valor > LIMITE_2262) return LIMITE_2262;
    return valor * FACTOR_2262;
}
