// fichero 14218 -- macros y constantes -- MODIFICADO
#define LIMITE_14218 14418
#define FACTOR_14218 5

int aplicar_limite14218(int valor) {
    if (valor > LIMITE_14218) return LIMITE_14218;
    return valor * FACTOR_14218;
}
