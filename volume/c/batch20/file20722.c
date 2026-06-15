// fichero 20722 -- macros y constantes -- MODIFICADO
#define LIMITE_20722 20922
#define FACTOR_20722 4

int aplicar_limite20722(int valor) {
    if (valor > LIMITE_20722) return LIMITE_20722;
    return valor * FACTOR_20722;
}
