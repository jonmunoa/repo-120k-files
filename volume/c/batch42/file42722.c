// fichero 42722 -- macros y constantes
#define LIMITE_42722 42822
#define FACTOR_42722 3

int aplicar_limite42722(int valor) {
    if (valor > LIMITE_42722) return LIMITE_42722;
    return valor * FACTOR_42722;
}
