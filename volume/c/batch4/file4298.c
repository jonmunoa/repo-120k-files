// fichero 4298 -- macros y constantes -- MODIFICADO
#define LIMITE_4298 4498
#define FACTOR_4298 5

int aplicar_limite4298(int valor) {
    if (valor > LIMITE_4298) return LIMITE_4298;
    return valor * FACTOR_4298;
}
