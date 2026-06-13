// fichero 23722 -- macros y constantes
#define LIMITE_23722 23822
#define FACTOR_23722 3

int aplicar_limite23722(int valor) {
    if (valor > LIMITE_23722) return LIMITE_23722;
    return valor * FACTOR_23722;
}
