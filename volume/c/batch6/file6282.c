// fichero 6282 -- macros y constantes
#define LIMITE_6282 6382
#define FACTOR_6282 3

int aplicar_limite6282(int valor) {
    if (valor > LIMITE_6282) return LIMITE_6282;
    return valor * FACTOR_6282;
}
