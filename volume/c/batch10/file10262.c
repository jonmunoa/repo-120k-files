// fichero 10262 -- macros y constantes
#define LIMITE_10262 10362
#define FACTOR_10262 3

int aplicar_limite10262(int valor) {
    if (valor > LIMITE_10262) return LIMITE_10262;
    return valor * FACTOR_10262;
}
