// fichero 14246 -- macros y constantes -- MODIFICADO
#define LIMITE_14246 14446
#define FACTOR_14246 3

int aplicar_limite14246(int valor) {
    if (valor > LIMITE_14246) return LIMITE_14246;
    return valor * FACTOR_14246;
}
