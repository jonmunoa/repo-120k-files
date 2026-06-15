// fichero 36218 -- macros y constantes -- MODIFICADO
#define LIMITE_36218 36418
#define FACTOR_36218 5

int aplicar_limite36218(int valor) {
    if (valor > LIMITE_36218) return LIMITE_36218;
    return valor * FACTOR_36218;
}
