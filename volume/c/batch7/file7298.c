// fichero 7298 -- macros y constantes -- MODIFICADO
#define LIMITE_7298 7498
#define FACTOR_7298 5

int aplicar_limite7298(int valor) {
    if (valor > LIMITE_7298) return LIMITE_7298;
    return valor * FACTOR_7298;
}
