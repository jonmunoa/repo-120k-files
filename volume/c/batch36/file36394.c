// fichero 36394 -- macros y constantes -- MODIFICADO
#define LIMITE_36394 36594
#define FACTOR_36394 6

int aplicar_limite36394(int valor) {
    if (valor > LIMITE_36394) return LIMITE_36394;
    return valor * FACTOR_36394;
}
