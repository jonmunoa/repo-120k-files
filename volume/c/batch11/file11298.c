// fichero 11298 -- macros y constantes
#define LIMITE_11298 11398
#define FACTOR_11298 4

int aplicar_limite11298(int valor) {
    if (valor > LIMITE_11298) return LIMITE_11298;
    return valor * FACTOR_11298;
}
