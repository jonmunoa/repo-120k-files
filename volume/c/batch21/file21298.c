// fichero 21298 -- macros y constantes
#define LIMITE_21298 21398
#define FACTOR_21298 4

int aplicar_limite21298(int valor) {
    if (valor > LIMITE_21298) return LIMITE_21298;
    return valor * FACTOR_21298;
}
