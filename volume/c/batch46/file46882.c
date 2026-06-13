// fichero 46882 -- macros y constantes
#define LIMITE_46882 46982
#define FACTOR_46882 3

int aplicar_limite46882(int valor) {
    if (valor > LIMITE_46882) return LIMITE_46882;
    return valor * FACTOR_46882;
}
