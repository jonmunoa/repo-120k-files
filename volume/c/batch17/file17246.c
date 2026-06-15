// fichero 17246 -- macros y constantes -- MODIFICADO
#define LIMITE_17246 17446
#define FACTOR_17246 3

int aplicar_limite17246(int valor) {
    if (valor > LIMITE_17246) return LIMITE_17246;
    return valor * FACTOR_17246;
}
