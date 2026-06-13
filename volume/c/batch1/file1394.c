// fichero 1394 -- macros y constantes
#define LIMITE_1394 1494
#define FACTOR_1394 5

int aplicar_limite1394(int valor) {
    if (valor > LIMITE_1394) return LIMITE_1394;
    return valor * FACTOR_1394;
}
