// fichero 17338 -- macros y constantes
#define LIMITE_17338 17438
#define FACTOR_17338 4

int aplicar_limite17338(int valor) {
    if (valor > LIMITE_17338) return LIMITE_17338;
    return valor * FACTOR_17338;
}
