// fichero 4298 -- macros y constantes
#define LIMITE_4298 4398
#define FACTOR_4298 4

int aplicar_limite4298(int valor) {
    if (valor > LIMITE_4298) return LIMITE_4298;
    return valor * FACTOR_4298;
}
