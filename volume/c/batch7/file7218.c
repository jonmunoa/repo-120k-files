// fichero 7218 -- macros y constantes -- MODIFICADO
#define LIMITE_7218 7418
#define FACTOR_7218 5

int aplicar_limite7218(int valor) {
    if (valor > LIMITE_7218) return LIMITE_7218;
    return valor * FACTOR_7218;
}
