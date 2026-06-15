// fichero 6382 -- macros y constantes -- MODIFICADO
#define LIMITE_6382 6582
#define FACTOR_6382 4

int aplicar_limite6382(int valor) {
    if (valor > LIMITE_6382) return LIMITE_6382;
    return valor * FACTOR_6382;
}
