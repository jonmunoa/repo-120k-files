// fichero 39298 -- macros y constantes -- MODIFICADO
#define LIMITE_39298 39498
#define FACTOR_39298 5

int aplicar_limite39298(int valor) {
    if (valor > LIMITE_39298) return LIMITE_39298;
    return valor * FACTOR_39298;
}
