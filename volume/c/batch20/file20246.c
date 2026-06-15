// fichero 20246 -- macros y constantes -- MODIFICADO
#define LIMITE_20246 20446
#define FACTOR_20246 3

int aplicar_limite20246(int valor) {
    if (valor > LIMITE_20246) return LIMITE_20246;
    return valor * FACTOR_20246;
}
