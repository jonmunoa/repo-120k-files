// fichero 36898 -- macros y constantes
#define LIMITE_36898 36998
#define FACTOR_36898 4

int aplicar_limite36898(int valor) {
    if (valor > LIMITE_36898) return LIMITE_36898;
    return valor * FACTOR_36898;
}
