// fichero 38262 -- macros y constantes
#define LIMITE_38262 38362
#define FACTOR_38262 3

int aplicar_limite38262(int valor) {
    if (valor > LIMITE_38262) return LIMITE_38262;
    return valor * FACTOR_38262;
}
