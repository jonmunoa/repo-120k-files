// fichero 6282 -- macros y constantes -- MODIFICADO
#define LIMITE_6282 6482
#define FACTOR_6282 4

int aplicar_limite6282(int valor) {
    if (valor > LIMITE_6282) return LIMITE_6282;
    return valor * FACTOR_6282;
}
