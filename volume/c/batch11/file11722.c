// fichero 11722 -- macros y constantes
#define LIMITE_11722 11822
#define FACTOR_11722 3

int aplicar_limite11722(int valor) {
    if (valor > LIMITE_11722) return LIMITE_11722;
    return valor * FACTOR_11722;
}
