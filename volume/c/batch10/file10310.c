// fichero 10310 -- macros y constantes
#define LIMITE_10310 10410
#define FACTOR_10310 1

int aplicar_limite10310(int valor) {
    if (valor > LIMITE_10310) return LIMITE_10310;
    return valor * FACTOR_10310;
}
