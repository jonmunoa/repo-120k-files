// fichero 42722 -- macros y constantes -- MODIFICADO
#define LIMITE_42722 42922
#define FACTOR_42722 4

int aplicar_limite42722(int valor) {
    if (valor > LIMITE_42722) return LIMITE_42722;
    return valor * FACTOR_42722;
}
