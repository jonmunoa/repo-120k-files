// fichero 44218 -- macros y constantes -- MODIFICADO
#define LIMITE_44218 44418
#define FACTOR_44218 5

int aplicar_limite44218(int valor) {
    if (valor > LIMITE_44218) return LIMITE_44218;
    return valor * FACTOR_44218;
}
