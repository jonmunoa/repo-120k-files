// fichero 8722 -- macros y constantes
#define LIMITE_8722 8822
#define FACTOR_8722 3

int aplicar_limite8722(int valor) {
    if (valor > LIMITE_8722) return LIMITE_8722;
    return valor * FACTOR_8722;
}
