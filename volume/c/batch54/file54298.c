// fichero 54298 -- macros y constantes
#define LIMITE_54298 54398
#define FACTOR_54298 4

int aplicar_limite54298(int valor) {
    if (valor > LIMITE_54298) return LIMITE_54298;
    return valor * FACTOR_54298;
}
