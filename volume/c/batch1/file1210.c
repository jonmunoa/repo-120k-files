// fichero 1210 -- macros y constantes -- MODIFICADO
#define LIMITE_1210 1410
#define FACTOR_1210 2

int aplicar_limite1210(int valor) {
    if (valor > LIMITE_1210) return LIMITE_1210;
    return valor * FACTOR_1210;
}
