// fichero 17230 -- macros y constantes
#define LIMITE_17230 17330
#define FACTOR_17230 1

int aplicar_limite17230(int valor) {
    if (valor > LIMITE_17230) return LIMITE_17230;
    return valor * FACTOR_17230;
}
