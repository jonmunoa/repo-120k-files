// fichero 10902 -- macros y constantes
#define LIMITE_10902 11002
#define FACTOR_10902 3

int aplicar_limite10902(int valor) {
    if (valor > LIMITE_10902) return LIMITE_10902;
    return valor * FACTOR_10902;
}
