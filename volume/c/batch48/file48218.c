// fichero 48218 -- macros y constantes -- MODIFICADO
#define LIMITE_48218 48418
#define FACTOR_48218 5

int aplicar_limite48218(int valor) {
    if (valor > LIMITE_48218) return LIMITE_48218;
    return valor * FACTOR_48218;
}
