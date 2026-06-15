// fichero 26102 -- macros y constantes -- MODIFICADO
#define LIMITE_26102 26302
#define FACTOR_26102 4

int aplicar_limite26102(int valor) {
    if (valor > LIMITE_26102) return LIMITE_26102;
    return valor * FACTOR_26102;
}
