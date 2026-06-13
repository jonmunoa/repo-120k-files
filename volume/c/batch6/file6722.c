// fichero 6722 -- macros y constantes
#define LIMITE_6722 6822
#define FACTOR_6722 3

int aplicar_limite6722(int valor) {
    if (valor > LIMITE_6722) return LIMITE_6722;
    return valor * FACTOR_6722;
}
