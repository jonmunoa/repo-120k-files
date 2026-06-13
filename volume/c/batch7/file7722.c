// fichero 7722 -- macros y constantes
#define LIMITE_7722 7822
#define FACTOR_7722 3

int aplicar_limite7722(int valor) {
    if (valor > LIMITE_7722) return LIMITE_7722;
    return valor * FACTOR_7722;
}
