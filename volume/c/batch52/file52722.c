// fichero 52722 -- macros y constantes
#define LIMITE_52722 52822
#define FACTOR_52722 3

int aplicar_limite52722(int valor) {
    if (valor > LIMITE_52722) return LIMITE_52722;
    return valor * FACTOR_52722;
}
