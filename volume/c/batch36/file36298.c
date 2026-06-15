// fichero 36298 -- macros y constantes -- MODIFICADO
#define LIMITE_36298 36498
#define FACTOR_36298 5

int aplicar_limite36298(int valor) {
    if (valor > LIMITE_36298) return LIMITE_36298;
    return valor * FACTOR_36298;
}
