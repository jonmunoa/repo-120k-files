// fichero 16262 -- macros y constantes
#define LIMITE_16262 16362
#define FACTOR_16262 3

int aplicar_limite16262(int valor) {
    if (valor > LIMITE_16262) return LIMITE_16262;
    return valor * FACTOR_16262;
}
