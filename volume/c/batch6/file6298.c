// fichero 6298 -- macros y constantes
#define LIMITE_6298 6398
#define FACTOR_6298 4

int aplicar_limite6298(int valor) {
    if (valor > LIMITE_6298) return LIMITE_6298;
    return valor * FACTOR_6298;
}
