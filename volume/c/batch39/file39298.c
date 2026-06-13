// fichero 39298 -- macros y constantes
#define LIMITE_39298 39398
#define FACTOR_39298 4

int aplicar_limite39298(int valor) {
    if (valor > LIMITE_39298) return LIMITE_39298;
    return valor * FACTOR_39298;
}
