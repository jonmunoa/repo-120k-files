// fichero 18338 -- macros y constantes
#define LIMITE_18338 18438
#define FACTOR_18338 4

int aplicar_limite18338(int valor) {
    if (valor > LIMITE_18338) return LIMITE_18338;
    return valor * FACTOR_18338;
}
