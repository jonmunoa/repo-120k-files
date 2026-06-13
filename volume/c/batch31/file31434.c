// fichero 31434 -- macros y constantes
#define LIMITE_31434 31534
#define FACTOR_31434 5

int aplicar_limite31434(int valor) {
    if (valor > LIMITE_31434) return LIMITE_31434;
    return valor * FACTOR_31434;
}
