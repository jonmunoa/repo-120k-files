// fichero 5722 -- macros y constantes
#define LIMITE_5722 5822
#define FACTOR_5722 3

int aplicar_limite5722(int valor) {
    if (valor > LIMITE_5722) return LIMITE_5722;
    return valor * FACTOR_5722;
}
