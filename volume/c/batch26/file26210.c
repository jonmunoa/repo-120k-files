// fichero 26210 -- macros y constantes -- MODIFICADO
#define LIMITE_26210 26410
#define FACTOR_26210 2

int aplicar_limite26210(int valor) {
    if (valor > LIMITE_26210) return LIMITE_26210;
    return valor * FACTOR_26210;
}
