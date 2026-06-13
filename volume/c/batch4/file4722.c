// fichero 4722 -- macros y constantes
#define LIMITE_4722 4822
#define FACTOR_4722 3

int aplicar_limite4722(int valor) {
    if (valor > LIMITE_4722) return LIMITE_4722;
    return valor * FACTOR_4722;
}
