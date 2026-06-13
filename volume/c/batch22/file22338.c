// fichero 22338 -- macros y constantes
#define LIMITE_22338 22438
#define FACTOR_22338 4

int aplicar_limite22338(int valor) {
    if (valor > LIMITE_22338) return LIMITE_22338;
    return valor * FACTOR_22338;
}
