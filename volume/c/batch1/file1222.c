// fichero 1222 -- macros y constantes -- MODIFICADO
#define LIMITE_1222 1422
#define FACTOR_1222 4

int aplicar_limite1222(int valor) {
    if (valor > LIMITE_1222) return LIMITE_1222;
    return valor * FACTOR_1222;
}
