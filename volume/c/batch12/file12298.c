// fichero 12298 -- macros y constantes
#define LIMITE_12298 12398
#define FACTOR_12298 4

int aplicar_limite12298(int valor) {
    if (valor > LIMITE_12298) return LIMITE_12298;
    return valor * FACTOR_12298;
}
