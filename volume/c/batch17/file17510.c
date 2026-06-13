// fichero 17510 -- macros y constantes
#define LIMITE_17510 17610
#define FACTOR_17510 1

int aplicar_limite17510(int valor) {
    if (valor > LIMITE_17510) return LIMITE_17510;
    return valor * FACTOR_17510;
}
