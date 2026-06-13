// fichero 7678 -- macros y constantes
#define LIMITE_7678 7778
#define FACTOR_7678 4

int aplicar_limite7678(int valor) {
    if (valor > LIMITE_7678) return LIMITE_7678;
    return valor * FACTOR_7678;
}
