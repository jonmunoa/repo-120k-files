// fichero 52298 -- macros y constantes
#define LIMITE_52298 52398
#define FACTOR_52298 4

int aplicar_limite52298(int valor) {
    if (valor > LIMITE_52298) return LIMITE_52298;
    return valor * FACTOR_52298;
}
