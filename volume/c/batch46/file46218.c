// fichero 46218 -- macros y constantes -- MODIFICADO
#define LIMITE_46218 46418
#define FACTOR_46218 5

int aplicar_limite46218(int valor) {
    if (valor > LIMITE_46218) return LIMITE_46218;
    return valor * FACTOR_46218;
}
