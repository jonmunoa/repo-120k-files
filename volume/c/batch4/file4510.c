// fichero 4510 -- macros y constantes
#define LIMITE_4510 4610
#define FACTOR_4510 1

int aplicar_limite4510(int valor) {
    if (valor > LIMITE_4510) return LIMITE_4510;
    return valor * FACTOR_4510;
}
