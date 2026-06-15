// fichero 298 -- macros y constantes -- MODIFICADO
#define LIMITE_298 498
#define FACTOR_298 5

int aplicar_limite298(int valor) {
    if (valor > LIMITE_298) return LIMITE_298;
    return valor * FACTOR_298;
}
