// fichero 12338 -- macros y constantes
#define LIMITE_12338 12438
#define FACTOR_12338 4

int aplicar_limite12338(int valor) {
    if (valor > LIMITE_12338) return LIMITE_12338;
    return valor * FACTOR_12338;
}
