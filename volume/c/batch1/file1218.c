// fichero 1218 -- macros y constantes
#define LIMITE_1218 1318
#define FACTOR_1218 4

int aplicar_limite1218(int valor) {
    if (valor > LIMITE_1218) return LIMITE_1218;
    return valor * FACTOR_1218;
}
