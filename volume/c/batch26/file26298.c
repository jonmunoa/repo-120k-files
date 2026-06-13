// fichero 26298 -- macros y constantes
#define LIMITE_26298 26398
#define FACTOR_26298 4

int aplicar_limite26298(int valor) {
    if (valor > LIMITE_26298) return LIMITE_26298;
    return valor * FACTOR_26298;
}
