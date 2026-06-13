// fichero 22298 -- macros y constantes
#define LIMITE_22298 22398
#define FACTOR_22298 4

int aplicar_limite22298(int valor) {
    if (valor > LIMITE_22298) return LIMITE_22298;
    return valor * FACTOR_22298;
}
