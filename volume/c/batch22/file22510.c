// fichero 22510 -- macros y constantes
#define LIMITE_22510 22610
#define FACTOR_22510 1

int aplicar_limite22510(int valor) {
    if (valor > LIMITE_22510) return LIMITE_22510;
    return valor * FACTOR_22510;
}
