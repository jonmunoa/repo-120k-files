// fichero 7510 -- macros y constantes
#define LIMITE_7510 7610
#define FACTOR_7510 1

int aplicar_limite7510(int valor) {
    if (valor > LIMITE_7510) return LIMITE_7510;
    return valor * FACTOR_7510;
}
