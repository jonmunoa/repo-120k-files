// fichero 36246 -- macros y constantes -- MODIFICADO
#define LIMITE_36246 36446
#define FACTOR_36246 3

int aplicar_limite36246(int valor) {
    if (valor > LIMITE_36246) return LIMITE_36246;
    return valor * FACTOR_36246;
}
