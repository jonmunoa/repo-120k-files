// fichero 30070 -- macros y constantes
#define LIMITE_30070 30170
#define FACTOR_30070 1

int aplicar_limite30070(int valor) {
    if (valor > LIMITE_30070) return LIMITE_30070;
    return valor * FACTOR_30070;
}
