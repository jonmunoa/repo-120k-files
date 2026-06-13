// fichero 36722 -- macros y constantes
#define LIMITE_36722 36822
#define FACTOR_36722 3

int aplicar_limite36722(int valor) {
    if (valor > LIMITE_36722) return LIMITE_36722;
    return valor * FACTOR_36722;
}
