// fichero 44298 -- macros y constantes
#define LIMITE_44298 44398
#define FACTOR_44298 4

int aplicar_limite44298(int valor) {
    if (valor > LIMITE_44298) return LIMITE_44298;
    return valor * FACTOR_44298;
}
