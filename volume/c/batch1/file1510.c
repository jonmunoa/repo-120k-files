// fichero 1510 -- macros y constantes
#define LIMITE_1510 1610
#define FACTOR_1510 1

int aplicar_limite1510(int valor) {
    if (valor > LIMITE_1510) return LIMITE_1510;
    return valor * FACTOR_1510;
}
