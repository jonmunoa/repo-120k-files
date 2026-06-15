// fichero 23218 -- macros y constantes -- MODIFICADO
#define LIMITE_23218 23418
#define FACTOR_23218 5

int aplicar_limite23218(int valor) {
    if (valor > LIMITE_23218) return LIMITE_23218;
    return valor * FACTOR_23218;
}
