// fichero 20298 -- macros y constantes -- MODIFICADO
#define LIMITE_20298 20498
#define FACTOR_20298 5

int aplicar_limite20298(int valor) {
    if (valor > LIMITE_20298) return LIMITE_20298;
    return valor * FACTOR_20298;
}
