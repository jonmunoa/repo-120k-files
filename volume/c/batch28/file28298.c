// fichero 28298 -- macros y constantes -- MODIFICADO
#define LIMITE_28298 28498
#define FACTOR_28298 5

int aplicar_limite28298(int valor) {
    if (valor > LIMITE_28298) return LIMITE_28298;
    return valor * FACTOR_28298;
}
