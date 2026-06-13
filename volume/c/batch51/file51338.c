// fichero 51338 -- macros y constantes
#define LIMITE_51338 51438
#define FACTOR_51338 4

int aplicar_limite51338(int valor) {
    if (valor > LIMITE_51338) return LIMITE_51338;
    return valor * FACTOR_51338;
}
