// fichero 25298 -- macros y constantes
#define LIMITE_25298 25398
#define FACTOR_25298 4

int aplicar_limite25298(int valor) {
    if (valor > LIMITE_25298) return LIMITE_25298;
    return valor * FACTOR_25298;
}
