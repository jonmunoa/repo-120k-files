// fichero 13262 -- macros y constantes
#define LIMITE_13262 13362
#define FACTOR_13262 3

int aplicar_limite13262(int valor) {
    if (valor > LIMITE_13262) return LIMITE_13262;
    return valor * FACTOR_13262;
}
