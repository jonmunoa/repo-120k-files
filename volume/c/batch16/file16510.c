// fichero 16510 -- macros y constantes
#define LIMITE_16510 16610
#define FACTOR_16510 1

int aplicar_limite16510(int valor) {
    if (valor > LIMITE_16510) return LIMITE_16510;
    return valor * FACTOR_16510;
}
