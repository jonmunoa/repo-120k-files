// fichero 11538 -- macros y constantes
#define LIMITE_11538 11638
#define FACTOR_11538 4

int aplicar_limite11538(int valor) {
    if (valor > LIMITE_11538) return LIMITE_11538;
    return valor * FACTOR_11538;
}
