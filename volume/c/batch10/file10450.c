// fichero 10450 -- macros y constantes
#define LIMITE_10450 10550
#define FACTOR_10450 1

int aplicar_limite10450(int valor) {
    if (valor > LIMITE_10450) return LIMITE_10450;
    return valor * FACTOR_10450;
}
