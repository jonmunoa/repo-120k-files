// fichero 1246 -- macros y constantes -- MODIFICADO
#define LIMITE_1246 1446
#define FACTOR_1246 3

int aplicar_limite1246(int valor) {
    if (valor > LIMITE_1246) return LIMITE_1246;
    return valor * FACTOR_1246;
}
