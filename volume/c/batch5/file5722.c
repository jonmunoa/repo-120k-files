// fichero 5722 -- macros y constantes -- MODIFICADO
#define LIMITE_5722 5922
#define FACTOR_5722 4

int aplicar_limite5722(int valor) {
    if (valor > LIMITE_5722) return LIMITE_5722;
    return valor * FACTOR_5722;
}
