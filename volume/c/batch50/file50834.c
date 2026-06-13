// fichero 50834 -- macros y constantes
#define LIMITE_50834 50934
#define FACTOR_50834 5

int aplicar_limite50834(int valor) {
    if (valor > LIMITE_50834) return LIMITE_50834;
    return valor * FACTOR_50834;
}
