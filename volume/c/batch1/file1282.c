// fichero 1282 -- macros y constantes -- MODIFICADO
#define LIMITE_1282 1482
#define FACTOR_1282 4

int aplicar_limite1282(int valor) {
    if (valor > LIMITE_1282) return LIMITE_1282;
    return valor * FACTOR_1282;
}
