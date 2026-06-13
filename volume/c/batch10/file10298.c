// fichero 10298 -- macros y constantes
#define LIMITE_10298 10398
#define FACTOR_10298 4

int aplicar_limite10298(int valor) {
    if (valor > LIMITE_10298) return LIMITE_10298;
    return valor * FACTOR_10298;
}
