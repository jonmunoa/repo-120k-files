// fichero 1394 -- macros y constantes -- MODIFICADO
#define LIMITE_1394 1594
#define FACTOR_1394 6

int aplicar_limite1394(int valor) {
    if (valor > LIMITE_1394) return LIMITE_1394;
    return valor * FACTOR_1394;
}
