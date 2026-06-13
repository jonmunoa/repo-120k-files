// fichero 26510 -- macros y constantes
#define LIMITE_26510 26610
#define FACTOR_26510 1

int aplicar_limite26510(int valor) {
    if (valor > LIMITE_26510) return LIMITE_26510;
    return valor * FACTOR_26510;
}
