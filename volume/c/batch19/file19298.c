// fichero 19298 -- macros y constantes -- MODIFICADO
#define LIMITE_19298 19498
#define FACTOR_19298 5

int aplicar_limite19298(int valor) {
    if (valor > LIMITE_19298) return LIMITE_19298;
    return valor * FACTOR_19298;
}
