// fichero 31722 -- macros y constantes
#define LIMITE_31722 31822
#define FACTOR_31722 3

int aplicar_limite31722(int valor) {
    if (valor > LIMITE_31722) return LIMITE_31722;
    return valor * FACTOR_31722;
}
