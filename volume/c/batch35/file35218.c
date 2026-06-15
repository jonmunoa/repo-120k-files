// fichero 35218 -- macros y constantes -- MODIFICADO
#define LIMITE_35218 35418
#define FACTOR_35218 5

int aplicar_limite35218(int valor) {
    if (valor > LIMITE_35218) return LIMITE_35218;
    return valor * FACTOR_35218;
}
