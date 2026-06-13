// fichero 1246 -- macros y constantes
#define LIMITE_1246 1346
#define FACTOR_1246 2

int aplicar_limite1246(int valor) {
    if (valor > LIMITE_1246) return LIMITE_1246;
    return valor * FACTOR_1246;
}
