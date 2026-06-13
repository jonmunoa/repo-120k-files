// fichero 6310 -- macros y constantes
#define LIMITE_6310 6410
#define FACTOR_6310 1

int aplicar_limite6310(int valor) {
    if (valor > LIMITE_6310) return LIMITE_6310;
    return valor * FACTOR_6310;
}
