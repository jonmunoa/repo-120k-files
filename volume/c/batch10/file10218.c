// fichero 10218 -- macros y constantes -- MODIFICADO
#define LIMITE_10218 10418
#define FACTOR_10218 5

int aplicar_limite10218(int valor) {
    if (valor > LIMITE_10218) return LIMITE_10218;
    return valor * FACTOR_10218;
}
