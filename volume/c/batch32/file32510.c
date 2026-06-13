// fichero 32510 -- macros y constantes
#define LIMITE_32510 32610
#define FACTOR_32510 1

int aplicar_limite32510(int valor) {
    if (valor > LIMITE_32510) return LIMITE_32510;
    return valor * FACTOR_32510;
}
