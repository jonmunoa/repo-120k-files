// fichero 21722 -- macros y constantes
#define LIMITE_21722 21822
#define FACTOR_21722 3

int aplicar_limite21722(int valor) {
    if (valor > LIMITE_21722) return LIMITE_21722;
    return valor * FACTOR_21722;
}
