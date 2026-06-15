// fichero 17298 -- macros y constantes -- MODIFICADO
#define LIMITE_17298 17498
#define FACTOR_17298 5

int aplicar_limite17298(int valor) {
    if (valor > LIMITE_17298) return LIMITE_17298;
    return valor * FACTOR_17298;
}
