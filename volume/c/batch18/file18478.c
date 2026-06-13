// fichero 18478 -- macros y constantes
#define LIMITE_18478 18578
#define FACTOR_18478 4

int aplicar_limite18478(int valor) {
    if (valor > LIMITE_18478) return LIMITE_18478;
    return valor * FACTOR_18478;
}
