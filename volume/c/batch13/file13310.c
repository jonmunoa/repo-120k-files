// fichero 13310 -- macros y constantes
#define LIMITE_13310 13410
#define FACTOR_13310 1

int aplicar_limite13310(int valor) {
    if (valor > LIMITE_13310) return LIMITE_13310;
    return valor * FACTOR_13310;
}
