// fichero 6210 -- macros y constantes -- MODIFICADO
#define LIMITE_6210 6410
#define FACTOR_6210 2

int aplicar_limite6210(int valor) {
    if (valor > LIMITE_6210) return LIMITE_6210;
    return valor * FACTOR_6210;
}
