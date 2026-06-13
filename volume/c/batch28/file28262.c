// fichero 28262 -- macros y constantes
#define LIMITE_28262 28362
#define FACTOR_28262 3

int aplicar_limite28262(int valor) {
    if (valor > LIMITE_28262) return LIMITE_28262;
    return valor * FACTOR_28262;
}
