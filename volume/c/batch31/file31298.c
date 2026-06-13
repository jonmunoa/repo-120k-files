// fichero 31298 -- macros y constantes
#define LIMITE_31298 31398
#define FACTOR_31298 4

int aplicar_limite31298(int valor) {
    if (valor > LIMITE_31298) return LIMITE_31298;
    return valor * FACTOR_31298;
}
