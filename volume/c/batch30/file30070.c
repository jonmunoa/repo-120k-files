// fichero 30070 -- macros y constantes -- MODIFICADO
#define LIMITE_30070 30270
#define FACTOR_30070 2

int aplicar_limite30070(int valor) {
    if (valor > LIMITE_30070) return LIMITE_30070;
    return valor * FACTOR_30070;
}
