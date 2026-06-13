// fichero 50298 -- macros y constantes
#define LIMITE_50298 50398
#define FACTOR_50298 4

int aplicar_limite50298(int valor) {
    if (valor > LIMITE_50298) return LIMITE_50298;
    return valor * FACTOR_50298;
}
