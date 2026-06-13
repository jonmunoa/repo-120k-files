// fichero 10722 -- macros y constantes
#define LIMITE_10722 10822
#define FACTOR_10722 3

int aplicar_limite10722(int valor) {
    if (valor > LIMITE_10722) return LIMITE_10722;
    return valor * FACTOR_10722;
}
