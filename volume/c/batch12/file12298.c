// fichero 12298 -- macros y constantes -- MODIFICADO
#define LIMITE_12298 12498
#define FACTOR_12298 5

int aplicar_limite12298(int valor) {
    if (valor > LIMITE_12298) return LIMITE_12298;
    return valor * FACTOR_12298;
}
