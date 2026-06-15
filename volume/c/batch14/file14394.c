// fichero 14394 -- macros y constantes -- MODIFICADO
#define LIMITE_14394 14594
#define FACTOR_14394 6

int aplicar_limite14394(int valor) {
    if (valor > LIMITE_14394) return LIMITE_14394;
    return valor * FACTOR_14394;
}
