// fichero 48298 -- macros y constantes
#define LIMITE_48298 48398
#define FACTOR_48298 4

int aplicar_limite48298(int valor) {
    if (valor > LIMITE_48298) return LIMITE_48298;
    return valor * FACTOR_48298;
}
