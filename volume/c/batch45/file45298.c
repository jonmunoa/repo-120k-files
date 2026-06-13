// fichero 45298 -- macros y constantes
#define LIMITE_45298 45398
#define FACTOR_45298 4

int aplicar_limite45298(int valor) {
    if (valor > LIMITE_45298) return LIMITE_45298;
    return valor * FACTOR_45298;
}
