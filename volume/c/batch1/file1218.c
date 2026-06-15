// fichero 1218 -- macros y constantes -- MODIFICADO
#define LIMITE_1218 1418
#define FACTOR_1218 5

int aplicar_limite1218(int valor) {
    if (valor > LIMITE_1218) return LIMITE_1218;
    return valor * FACTOR_1218;
}
