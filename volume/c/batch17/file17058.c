// fichero 17058 -- macros y constantes
#define LIMITE_17058 17158
#define FACTOR_17058 4

int aplicar_limite17058(int valor) {
    if (valor > LIMITE_17058) return LIMITE_17058;
    return valor * FACTOR_17058;
}
