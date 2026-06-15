// fichero 8394 -- macros y constantes -- MODIFICADO
#define LIMITE_8394 8594
#define FACTOR_8394 6

int aplicar_limite8394(int valor) {
    if (valor > LIMITE_8394) return LIMITE_8394;
    return valor * FACTOR_8394;
}
